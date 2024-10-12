#include "chlslpp/c_hlslpp.h"

// Hacky but needs FLOAT64
#include "chlslpp/test_helpers.h"

// For strcmp
#include <string.h>

// For std::system
#include <cstdlib>

//#define NOMINMAX
//#include <windows.h>

const float deg2rad = 3.14159265f / 180.0f;

namespace hlslpp_unit
{
	using namespace hlslpp;


	float div(float a, float b)
	{
		return a / b;
	}

	double div(double a, double b)
	{
		return a / b;
	}

	bool eq(float a, float b, float tolerance /*= 0.0f*/)
	{
		bool withinTolerance = abs(a - b) <= tolerance;
		return withinTolerance;
	}

	bool eq(const float2& v, float x, float y, float tolerance /*= 0.0f*/)
	{
		return eq(v.x, x, tolerance)
			&& eq(v.y, y, tolerance);
	}

	bool eq(const float3& v, float x, float y, float z, float tolerance /*= 0.0f*/)
	{
		return eq(v.x, x, tolerance)
			&& eq(v.y, y, tolerance)
			&& eq(v.z, z, tolerance);
	}

	bool eq(const float4& v, float x, float y, float z, float w, float tolerance /*= 0.0f*/)
	{
		return eq(v.x, x, tolerance)
			&& eq(v.y, y, tolerance)
			&& eq(v.z, z, tolerance)
			&& eq(v.w, w, tolerance);
	}

#if defined(HLSLPP_FLOAT8)

	bool eq(const float8& v, float x, float y, float z, float w, float a, float b, float c, float d, float tolerance /*= 0.0f*/)
	{
		return eq(v.f32[0], x, tolerance)
		&& eq(v.f32[1], y, tolerance)
		&& eq(v.f32[2], z, tolerance)
		&& eq(v.f32[3], w, tolerance)
		&& eq(v.f32[4], a, tolerance)
		&& eq(v.f32[5], b, tolerance)
		&& eq(v.f32[6], c, tolerance)
		&& eq(v.f32[7], d, tolerance);
	}

#endif

	bool eq(double a, double b, double tolerance /*= 0.0*/)
	{
		bool withinTolerance = abs(a - b) <= tolerance;
		return withinTolerance;
	}

#if defined(HLSLPP_DOUBLE)

	bool eq(const double2& v, double x, double y, double tolerance /*= 0.0*/)
	{
		return eq((double)v.x, x, tolerance)
			&& eq((double)v.y, y, tolerance);
	}

	bool eq(const double3& v, double x, double y, double z, double tolerance /*= 0.0*/)
	{
		return eq((double)v.x, x, tolerance)
			&& eq((double)v.y, y, tolerance)
			&& eq((double)v.z, z, tolerance);
	}

	bool eq(const double4& v, double x, double y, double z, double w, double tolerance /*= 0.0*/)
	{
		return eq((double)v.x, x, tolerance)
			&& eq((double)v.y, y, tolerance)
			&& eq((double)v.z, z, tolerance)
			&& eq((double)v.w, w, tolerance);
	}

#endif

	bool eq(float a, bool c)
	{
		bool equals = (a != 0.0f ? true : false) == c;
		return equals;
	}

	bool eq(const float2& v, bool x, bool y)
	{
		return eq(v.x, x)
			&& eq(v.y, y);
	}

	bool eq(const float3& v, bool x, bool y, bool z)
	{
		return eq(v.x, x)
			&& eq(v.y, y)
			&& eq(v.z, z);
	}

	bool eq(const float4& v, bool x, bool y, bool z, bool w)
	{
		return eq(v.x, x)
			&& eq(v.y, y)
			&& eq(v.z, z)
			&& eq(v.w, w);
	}

	bool eq(int32_t a, int32_t b)
	{
		return a == b;
	}

	bool eq(const int2& v, int32_t x, int32_t y)
	{
		return eq(v.x, x)
			&& eq(v.y, y);
	}

	bool eq(const int3& v, int32_t x, int32_t y, int32_t z)
	{
		return eq(v.x, x)
			&& eq(v.y, y)
			&& eq(v.z, z);
	}

	bool eq(const int4& v, int32_t x, int32_t y, int32_t z, int32_t w)
	{
		return eq(v.x, x)
			&& eq(v.y, y)
			&& eq(v.z, z)
			&& eq(v.w, w);
	}

	bool eq(uint32_t a, uint32_t b)
    {
		return a == b;
    }

	bool eq(const uint2& v, uint32_t x, uint32_t y)
    {
		return eq(v.x, x)
			&& eq(v.y, y);
    }

	bool eq(const uint3& v, uint32_t x, uint32_t y, uint32_t z)
    {
		return eq(v.x, x)
			&& eq(v.y, y)
			&& eq(v.z, z);
    }

	bool eq(const uint4& v, uint32_t x, uint32_t y, uint32_t z, uint32_t w)
    {
		return eq(v.x, x)
			&& eq(v.y, y)
			&& eq(v.z, z)
			&& eq(v.w, w);
    }

	bool eq(bool a, bool c)
	{
		return a == c;
	}


	bool eq(const float1x1& m, float m00, float tolerance /*= 0.0f*/)
	{
		return eq(m.f32[0], m00, tolerance);
	}

	bool eq(const float1x2& m, float m00, float m01, float tolerance /*= 0.0f*/)
	{
		return eq(m.f32[0], m00, tolerance)
			&& eq(m.f32[1], m01, tolerance);
	}

	bool eq(const float1x3& m, float m00, float m01, float m02, float tolerance /*= 0.0f*/)
	{
		return eq(m.f32[0], m00, tolerance)
			&& eq(m.f32[1], m01, tolerance)
			&& eq(m.f32[2], m02, tolerance);
	}

	bool eq(const float1x4& m, float m00, float m01, float m02, float m03, float tolerance /*= 0.0f*/)
	{
		return eq(m.f32[0], m00, tolerance)
			&& eq(m.f32[1], m01, tolerance)
			&& eq(m.f32[2], m02, tolerance)
			&& eq(m.f32[3], m03, tolerance);
	}

	bool eq(const float2x1& m, float m00, float m01, float tolerance /*= 0.0f*/)
	{
		return eq(m.f32[0], m00, tolerance)
			&& eq(m.f32[1], m01, tolerance);
	}

	bool eq(const float2x2& m, float m00, float m01, float m10, float m11, float tolerance /*= 0.0f*/)
	{
		return eq(m.f32[0], m00, tolerance)
			&& eq(m.f32[1], m01, tolerance)
			&& eq(m.f32[2], m10, tolerance)
			&& eq(m.f32[3], m11, tolerance);
	}

	bool eq(const float2x3& m, float m00, float m01, float m02, float m10, float m11, float m12, float tolerance /*= 0.0f*/)
	{
		return eq(m.f32_0[0], m00, tolerance)
			&& eq(m.f32_0[1], m01, tolerance)
			&& eq(m.f32_0[2], m02, tolerance)

			&& eq(m.f32_1[0], m10, tolerance)
			&& eq(m.f32_1[1], m11, tolerance)
			&& eq(m.f32_1[2], m12, tolerance);
	}

	bool eq(const float2x4& m, float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float tolerance /*= 0.0f*/)
	{
		return eq(m.f32_0[0], m00, tolerance)
			&& eq(m.f32_0[1], m01, tolerance)
			&& eq(m.f32_0[2], m02, tolerance)
			&& eq(m.f32_0[3], m03, tolerance)

			&& eq(m.f32_1[0], m10, tolerance)
			&& eq(m.f32_1[1], m11, tolerance)
			&& eq(m.f32_1[2], m12, tolerance)
			&& eq(m.f32_1[3], m13, tolerance);
	}

	bool eq(const float3x1& m, float m00, float m01, float m02, float tolerance /*= 0.0f*/)
	{
		return eq(m.f32[0], m00, tolerance)
			&& eq(m.f32[1], m01, tolerance)
			&& eq(m.f32[2], m02, tolerance);
	}

	bool eq(const float3x2& m, float m00, float m01, float m10, float m11, float m20, float m21, float tolerance /*= 0.0f*/)
	{
		return eq(m.f32_0[0], m00, tolerance) && eq(m.f32_1[0], m01, tolerance)
			&& eq(m.f32_0[1], m10, tolerance) && eq(m.f32_1[1], m11, tolerance)
			&& eq(m.f32_0[2], m20, tolerance) && eq(m.f32_1[2], m21, tolerance);
	}

	bool eq(const float3x3& m, float m00, float m01, float m02, float m10, float m11, float m12, float m20, float m21, float m22, float tolerance /*= 0.0f*/)
	{
		return eq(m._m00, m00, tolerance) && eq(m._m01, m01, tolerance) && eq(m._m02, m02, tolerance)
			&& eq(m._m10, m10, tolerance) && eq(m._m11, m11, tolerance) && eq(m._m12, m12, tolerance)
			&& eq(m._m20, m20, tolerance) && eq(m._m21, m21, tolerance) && eq(m._m22, m22, tolerance);
	}

	bool eq(const float3x4& m, float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23, float tolerance /*= 0.0f*/)
	{
		return eq(m.f32_0[0], m00, tolerance) && eq(m.f32_0[1], m01, tolerance) && eq(m.f32_0[2], m02, tolerance) && eq(m.f32_0[3], m03, tolerance)
			&& eq(m.f32_1[0], m10, tolerance) && eq(m.f32_1[1], m11, tolerance) && eq(m.f32_1[2], m12, tolerance) && eq(m.f32_1[3], m13, tolerance)
			&& eq(m.f32_2[0], m20, tolerance) && eq(m.f32_2[1], m21, tolerance) && eq(m.f32_2[2], m22, tolerance) && eq(m.f32_2[3], m23, tolerance);
	}

	bool eq(const float4x1& m, float m00, float m01, float m02, float m03, float tolerance /*= 0.0f*/)
	{
		return eq(m.f32[0], m00, tolerance)
			&& eq(m.f32[1], m01, tolerance)
			&& eq(m.f32[2], m02, tolerance)
			&& eq(m.f32[3], m03, tolerance);
	}

	bool eq(const float4x2& m,
		float m00, float m01,
		float m10, float m11,
		float m20, float m21,
		float m30, float m31, float tolerance /*= 0.0f*/)
	{
		return eq(m.f32_0[0], m00, tolerance) && eq(m.f32_1[0], m01, tolerance)
			&& eq(m.f32_0[1], m10, tolerance) && eq(m.f32_1[1], m11, tolerance)
			&& eq(m.f32_0[2], m20, tolerance) && eq(m.f32_1[2], m21, tolerance)
			&& eq(m.f32_0[3], m30, tolerance) && eq(m.f32_1[3], m31, tolerance);
	}

	bool eq(const float4x3& m,
		float m00, float m01, float m02,
		float m10, float m11, float m12,
		float m20, float m21, float m22,
		float m30, float m31, float m32, float tolerance /*= 0.0f*/)
	{
		return eq(m.f32_0[0], m00, tolerance) && eq(m.f32_1[0], m01, tolerance) && eq(m.f32_2[0], m02, tolerance)
			&& eq(m.f32_0[1], m10, tolerance) && eq(m.f32_1[1], m11, tolerance) && eq(m.f32_2[1], m12, tolerance)
			&& eq(m.f32_0[2], m20, tolerance) && eq(m.f32_1[2], m21, tolerance) && eq(m.f32_2[2], m22, tolerance)
			&& eq(m.f32_0[3], m30, tolerance) && eq(m.f32_1[3], m31, tolerance) && eq(m.f32_2[3], m32, tolerance);
	}

	bool eq(const float4x4& m, float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23, float m30, float m31, float m32, float m33, float tolerance /*= 0.0f*/)
	{
		return eq(m._m00, m00, tolerance) && eq(m._m01, m01, tolerance) && eq(m._m02, m02, tolerance) && eq(m._m03, m03, tolerance)
			&& eq(m._m10, m10, tolerance) && eq(m._m11, m11, tolerance) && eq(m._m12, m12, tolerance) && eq(m._m13, m13, tolerance)
			&& eq(m._m20, m20, tolerance) && eq(m._m21, m21, tolerance) && eq(m._m22, m22, tolerance) && eq(m._m23, m23, tolerance)
			&& eq(m._m30, m30, tolerance) && eq(m._m31, m31, tolerance) && eq(m._m32, m32, tolerance) && eq(m._m33, m33, tolerance);
	}

	int32_t shift_left(int32_t a, int32_t b)
	{
		return a << b;
	}

	int32_t shift_right(int32_t a, int32_t b)
	{
		return a >> b;
	}

	float frac(float x)
	{
		float fracPart = x - std::floor(x);
		return fracPart;
	}

	float lerpf(float x, float y, float a)
	{
		return x + (y - x) * a;
	}

	float round_f(float x)
	{
		float t = trunc_f(x);
		float frac = x - t;
		float abs_frac = frac >= 0.0f ? frac : -frac;
		return abs_frac <= 0.5f ? t : x >= 0.0f ? t + 1.0f : t - 1.0f;
	}

	float trunc_f(float x)
	{
		return (float)((int)x);
	}

	float sign_f(float x)
	{
		if (x > 0.0) return 1.0;
		if (x < 0.0) return -1.0;
		return x;
	}

	double round_d(double x)
	{
		double t = trunc_d(x);
		double frac = x - t;
		double abs_frac = frac >= 0.0 ? frac : -frac;
		return abs_frac <= 0.5 ? t : x >= 0.0 ? t + 1.0 : t - 1.0;
	}

	double trunc_d(double x)
	{
		return (double)((int64_t)x);
	}

	void maxErrorExhaustive(Vec4Func vectorFunction, ScalarFunc scalarFunction, const char* funcName, float rangeStart, float rangeEnd)
	{
		struct ErrorInfo
		{
			float maxError;
			float input;
			float refValue;
			float testValue;
		};

		ErrorInfo absErrorInfo = {};
		ErrorInfo relativeErrorInfo = {};

		float_t rangeStart_t = rangeStart;
		float_t rangeEnd_t = rangeEnd;

		// Negative values

		int32_t negRangeStart = rangeStart_t.i >= 0 ? int32_t(0x80000000) : rangeStart_t.i;

		for (int64_t i = negRangeStart; i > int32_t(0x80000000); --i)
		{
			float_t input;
			input.i = (int32_t)i;

			float_t testValue = (float)vectorFunction(float4(input.f, input.f, input.f, input.f)).x;
			float_t refValue = scalarFunction(input.f);

			float absError = abs(testValue.f - refValue.f);
			float relativeError = abs((testValue.f - refValue.f) / testValue.f);

			if (absError > absErrorInfo.maxError)
			{
				absErrorInfo.maxError = absError;
				absErrorInfo.input = input.f;
				absErrorInfo.refValue = refValue.f;
				absErrorInfo.testValue = testValue.f;
			}

			if (relativeError > relativeErrorInfo.maxError)
			{
				relativeErrorInfo.maxError = relativeError;
				relativeErrorInfo.input = input.f;
				relativeErrorInfo.refValue = refValue.f;
				relativeErrorInfo.testValue = testValue.f;
			}
		}

		// Positive values

		int32_t posRangeStart = std::max<int32_t>(0, rangeStart_t.i);
		int32_t posRangeEnd = std::max<int32_t>(0, rangeEnd_t.i);

		for (int32_t i = posRangeStart; i < posRangeEnd; ++i)
		{
			float_t input;
			input.i = (int32_t)i;

			float_t testValue = (float)vectorFunction(float4(input.f, input.f, input.f, input.f)).x;
			float_t refValue = scalarFunction(input.f);

			float absError = abs(testValue.f - refValue.f);
			float relativeError = abs((testValue.f - refValue.f) / testValue.f);

			if (absError > absErrorInfo.maxError)
			{
				absErrorInfo.maxError = absError;
				absErrorInfo.input = input.f;
				absErrorInfo.refValue = refValue.f;
				absErrorInfo.testValue = testValue.f;
			}

			if (relativeError > relativeErrorInfo.maxError)
			{
				relativeErrorInfo.maxError = relativeError;
				relativeErrorInfo.input = input.f;
				relativeErrorInfo.refValue = refValue.f;
				relativeErrorInfo.testValue = testValue.f;
			}
		}

		printf("%s Max Error: %1.9g, In: %.9g, Exptd: %.9g, Rslt: %1.9g\n", funcName, absErrorInfo.maxError, absErrorInfo.input, absErrorInfo.refValue, absErrorInfo.testValue);
		printf("%s Relative Error: %1.9g, In: %.9g, Exptd: %.9g, Rslt: %1.9g\n", funcName, relativeErrorInfo.maxError, relativeErrorInfo.input, relativeErrorInfo.refValue, relativeErrorInfo.testValue);
	}

}
