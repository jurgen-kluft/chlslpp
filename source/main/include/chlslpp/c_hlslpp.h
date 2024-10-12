#ifndef __CHLSLPP_C_HLSLPP_H__
#define __CHLSLPP_C_HLSLPP_H__

#include "chlslpp/private/common.h"

// Add HLSLPP_FEATURE_TRANSFORM definition prior to including hlsl++.h to enable compilation of matrix transformations
#include "chlslpp/private/transform/common.h"

#include "chlslpp/private/vector_float.h"

#include "chlslpp/private/vector_float8.h"

#include "chlslpp/private/matrix_float.h"

#include "chlslpp/private/vector_int.h"

#include "chlslpp/private/vector_uint.h"

#include "chlslpp/private/vector_double.h"

#include "chlslpp/private/quaternion.h"

// Some functions depend on having the knowledge of types that have been defined before.
// In order to break the header dependencies they are all defined here.
#include "chlslpp/private/dependent.h"
#endif
