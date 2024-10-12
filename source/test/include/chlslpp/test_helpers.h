#ifndef __CHLSLPP_TEST_HELPERS_H__
#define __CHLSLPP_TEST_HELPERS_H__

#include <stdint.h>
#include <stdio.h>

#define _USE_MATH_DEFINES
#include "math.h"
#include <cmath>
#include <algorithm>
#include <cassert>

#if !defined(_XBOX) && (_MSC_VER >= 1900)
#    define HLSLPP_UNIT_HAS_CHRONO
#endif

#if defined(HLSLPP_UNIT_HAS_CHRONO)
#    include <chrono>
#endif

// For the test messages
#include <string>
#include <vector>

// Force hlslpp and std to live in the same namespace to account for name clashes and ambiguities
using namespace std;

// Temporary until we properly do it multiplatform
#if defined(_MSC_VER) && defined(_WIN64) && !defined(HLSLPP_ARM)
extern "C" unsigned __int64 __rdtsc();
#    pragma intrinsic(__rdtsc)
inline uint64_t ClockCycleCount() { return __rdtsc(); }
#else
inline uint64_t ClockCycleCount() { return 0; }
#endif

namespace hlslpp
{
    struct float1;
    struct float2;
    struct float3;
    struct float4;
    struct float8;

    struct float1x1;
    struct float1x2;
    struct float1x3;
    struct float1x4;
    struct float2x1;
    struct float2x2;
    struct float2x3;
    struct float2x4;
    struct float3x1;
    struct float3x2;
    struct float3x3;
    struct float3x4;
    struct float4x1;
    struct float4x2;
    struct float4x3;
    struct float4x4;

    struct int1;
    struct int2;
    struct int3;
    struct int4;

    struct uint1;
    struct uint2;
    struct uint3;
    struct uint4;

    struct int1x1;
    struct int1x2;
    struct int1x3;
    struct int1x4;

    struct double1;
    struct double2;
    struct double3;
    struct double4;
}; // namespace hlslpp

#define hlslpp_unit_unused(x) (void)x


namespace hlslpp_unit
{
    using namespace hlslpp;

    // Copied from https://randomascii.wordpress.com/2014/01/27/theres-only-four-billion-floatsso-test-them-all/
    union float_t
    {
        float_t(float num = 0.0f) : f(num) {}
        // Portable extraction of components.
        bool    negative() const { return (i >> 31) != 0; }
        int32_t mantissa() const { return i & ((1 << 23) - 1); }
        int32_t exponent() const { return (i >> 23) & 0xFF; }

        int32_t i;
        float   f;

        struct
        {
            uint32_t mantissa : 23;
            uint32_t exponent : 8;
            uint32_t sign : 1;
        } parts;
    };

    inline float GetRandomFloat() { return (float)(rand() % 1000) / 100.0f - 5.0f; }
    inline double GetRandomDouble() { return (double)(rand() % 1000) / 100.0 - 5.0; }

    constexpr float c_tolerance = 0.0001f;

    bool eq(float a, float b, float tolerance = c_tolerance);
    bool eq(const float2& v, float x, float y, float tolerance = c_tolerance);
    bool eq(const float3& v, float x, float y, float z, float tolerance = c_tolerance);
    bool eq(const float4& v, float x, float y, float z, float w, float tolerance = c_tolerance);

#if defined(HLSLPP_FLOAT8)
    bool eq(const float8& v, float x, float y, float z, float w, float a, float b, float c, float d, float tolerance = c_tolerance);
#endif
    bool eq(double a, double b, double tolerance = 0.0);
#if defined(HLSLPP_DOUBLE)

    bool eq(const double2& v, double x, double y, double tolerance = 0.0);
    bool eq(const double3& v, double x, double y, double z, double tolerance = 0.0);
    bool eq(const double4& v, double x, double y, double z, double w, double tolerance = 0.0);

#endif

    bool eq(const float1x1& m, float m00, float tolerance = c_tolerance);
    bool eq(const float1x2& m, float m00, float m01, float tolerance = c_tolerance);
    bool eq(const float1x3& m, float m00, float m01, float m02, float tolerance = c_tolerance);
    bool eq(const float1x4& m, float m00, float m01, float m02, float m03, float tolerance = c_tolerance);
    bool eq(const float2x1& m, float m00, float m01, float tolerance = c_tolerance);
    bool eq(const float2x2& m, float m00, float m01, float m10, float m11, float tolerance = c_tolerance);
    bool eq(const float2x3& m, float m00, float m01, float m02, float m10, float m11, float m12, float tolerance = c_tolerance);
    bool eq(const float2x4& m, float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float tolerance = c_tolerance);
    bool eq(const float3x1& m, float m00, float m01, float m02, float tolerance = c_tolerance);
    bool eq(const float3x2& m, float m00, float m01, float m10, float m11, float m20, float m21, float tolerance = c_tolerance);
    bool eq(const float3x3& m, float m00, float m01, float m02, float m10, float m11, float m12, float m20, float m21, float m22, float tolerance = c_tolerance);
    bool eq(const float3x4& m, float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23, float tolerance = c_tolerance);
    bool eq(const float4x1& m, float m00, float m01, float m02, float m03, float tolerance = c_tolerance);
    bool eq(const float4x2& m, float m00, float m01, float m10, float m11, float m20, float m21, float m30, float m31, float tolerance = c_tolerance);
    bool eq(const float4x3& m, float m00, float m01, float m02, float m10, float m11, float m12, float m20, float m21, float m22, float m30, float m31, float m32, float tolerance = c_tolerance);
    bool eq(const float4x4& m, float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23, float m30, float m31, float m32, float m33, float tolerance = c_tolerance);

    float div(float a, float b);
    double div(double a, double b);

    bool eq(bool a, bool c);
    bool eq(float a, bool c);
    bool eq(const float2& v, bool x, bool y);
    bool eq(const float3& v, bool x, bool y, bool z);
    bool eq(const float4& v, bool x, bool y, bool z, bool w);
    bool eq(int32_t a, int32_t b);
    bool eq(const int2& v, int32_t x, int32_t y);
    bool eq(const int3& v, int32_t x, int32_t y, int32_t z);
    bool eq(const int4& v, int32_t x, int32_t y, int32_t z, int32_t w);
    bool eq(uint32_t a, uint32_t b);
    bool eq(const uint2& v, uint32_t x, uint32_t y);
    bool eq(const uint3& v, uint32_t x, uint32_t y, uint32_t z);
    bool eq(const uint4& v, uint32_t x, uint32_t y, uint32_t z, uint32_t w);
    int32_t shift_left(int32_t a, int32_t b);
    int32_t shift_right(int32_t a, int32_t b);
    const float PI = 3.14159265358979f;
    float frac(float x);
    float lerpf(float x, float y, float a);

    // Some old platforms don't define these so make sure they're available for unit testing

    float round_f(float x);
    float trunc_f(float x);
    float sign_f(float x);
    double round_d(double x);
    double trunc_d(double x);

    typedef float4 (*Vec4Func)(const float4&);
    typedef float (*ScalarFunc)(float);

    void maxErrorExhaustive(Vec4Func vectorFunction, ScalarFunc scalarFunction, const char* funcName, float rangeStart, float rangeEnd);

} // namespace hlslpp_unit
#endif
