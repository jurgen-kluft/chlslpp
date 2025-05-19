package chlslpp

import (
	ccore "github.com/jurgen-kluft/cbase/package"
	"github.com/jurgen-kluft/ccode/denv"
	cunittest "github.com/jurgen-kluft/cunittest/package"
)

// GetPackage returns the package object of 'chlslpp'
func GetPackage() *denv.Package {
	// Dependencies
	cunittestpkg := cunittest.GetPackage()
	ccorepkg := ccore.GetPackage()

	// The main (chlslpp) package
	mainpkg := denv.NewPackage("chlslpp")
	mainpkg.AddPackage(ccorepkg)

	// 'chlslpp' library
	mainlib := denv.SetupCppLibProject("chlslpp", "github.com\\jurgen-kluft\\chlslpp")
	mainlib.AddDependencies(ccorepkg.GetMainLib()...)

	// 'chlslpp' unittest project
	maintest := denv.SetupDefaultCppTestProject("chlslpp"+"_test", "github.com\\jurgen-kluft\\chlslpp")
	maintest.AddDependencies(cunittestpkg.GetMainLib()...)
	maintest.Dependencies = append(maintest.Dependencies, mainlib)

	mainpkg.AddMainLib(mainlib)
	mainpkg.AddUnittest(maintest)
	return mainpkg
}
