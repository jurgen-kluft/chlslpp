#include "ccore/c_target.h"
#include "cunittest/cunittest.h"

#include "chlslpp/c_hlslpp.h"
#include "chlslpp/test_helpers.h"

using namespace hlslpp_unit;

#define hlslpp_check CHECK_TRUE

UNITTEST_SUITE_BEGIN(matrix_float)
{
    UNITTEST_FIXTURE(tests)
    {
        UNITTEST_FIXTURE_SETUP() {}
        UNITTEST_FIXTURE_TEARDOWN() {}

        UNITTEST_TEST(Float_Initialization)
        {
            //---------
            // Matrices
            //---------

            float f1  = (float)(rand() % 1000) / 100.0f;
            float f2  = (float)(rand() % 1000) / 100.0f;
            float f3  = (float)(rand() % 1000) / 100.0f;
            float f4  = (float)(rand() % 1000) / 100.0f;
            float f5  = (float)(rand() % 1000) / 100.0f;
            float f6  = (float)(rand() % 1000) / 100.0f;
            float f7  = (float)(rand() % 1000) / 100.0f;
            float f8  = (float)(rand() % 1000) / 100.0f;
            float f9  = (float)(rand() % 1000) / 100.0f;
            float f10 = (float)(rand() % 1000) / 100.0f;
            float f11 = (float)(rand() % 1000) / 100.0f;
            float f12 = (float)(rand() % 1000) / 100.0f;
            float f13 = (float)(rand() % 1000) / 100.0f;
            float f14 = (float)(rand() % 1000) / 100.0f;
            float f15 = (float)(rand() % 1000) / 100.0f;
            float f16 = (float)(rand() % 1000) / 100.0f;

            float1 vfoo1 = float1(f1);
            hlslpp_check(eq(vfoo1, f1));
            float2 vfoo2 = float2(f2, f3);
            hlslpp_check(eq(vfoo2, f2, f3));
            float3 vfoo3 = float3(f4, f5, f6);
            hlslpp_check(eq(vfoo3, f4, f5, f6));
            float4 vfoo4 = float4(f7, f8, f9, f10);
            hlslpp_check(eq(vfoo4, f7, f8, f9, f10));

            float1x1 mat_foo_1x1 = float1x1(42.0f);
            float1x2 mat_foo_1x2 = float1x2(32.6f, 12.1f);
            float1x3 mat_foo_1x3 = float1x3(11.1f, 21.5f, 14.3f);
            float1x4 mat_foo_1x4 = float1x4(74.1f, 3.25f, 0.75f, 1.88f);
            float2x1 mat_foo_2x1 = float2x1(1, 2);
            float3x1 mat_foo_3x1 = float3x1(1, 2, 3);
            float4x1 mat_foo_4x1 = float4x1(1, 2, 3, 4);
            float2x2 mat_foo_2x2 = float2x2(1, 2, 3, 4);
            float2x3 mat_foo_2x3 = float2x3(1, 2, 3, 4, 5, 6);
            float2x4 mat_foo_2x4 = float2x4(1, 2, 3, 4, 5, 6, 7, 8);
            float3x2 mat_foo_3x2 = float3x2(1, 2, 3, 4, 5, 6);
            float4x2 mat_foo_4x2 = float4x2(1, 2, 3, 4, 5, 6, 7, 8);
            float3x3 mat_foo_3x3 = float3x3(1, 2, 3, 4, 5, 6, 7, 8, 9);
            float3x4 mat_foo_3x4 = float3x4(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);
            float4x3 mat_foo_4x3 = float4x3(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);
            float4x4 mat_foo_4x4 = float4x4(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);

            float1x1 mat_bar_1x1 = float1x1(0.4f);
            float1x2 mat_bar_1x2 = float1x2(0.1f, 0.2f);
            float1x3 mat_bar_1x3 = float1x3(0.1f, 0.2f, 0.3f);
            float1x4 mat_bar_1x4 = float1x4(0.1f, 0.2f, 0.3f, 0.4f);
            float2x1 mat_bar_2x1 = float2x1(0.1f, 0.2f);
            float3x1 mat_bar_3x1 = float3x1(0.1f, 0.2f, 0.3f);
            float4x1 mat_bar_4x1 = float4x1(0.1f, 0.2f, 0.3f, 0.4f);
            float2x2 mat_bar_2x2 = float2x2(0.1f, 0.2f, 0.3f, 0.4f);
            float2x3 mat_bar_2x3 = float2x3(0.1f, 0.2f, 0.3f, 0.4f, 0.5f, 0.6f);
            float2x4 mat_bar_2x4 = float2x4(0.1f, 0.2f, 0.3f, 0.4f, 0.5f, 0.6f, 0.7f, 0.8f);
            float3x2 mat_bar_3x2 = float3x2(0.1f, 0.2f, 0.3f, 0.4f, 0.5f, 0.6f);
            float4x2 mat_bar_4x2 = float4x2(0.1f, 0.2f, 0.3f, 0.4f, 0.5f, 0.6f, 0.7f, 0.8f);
            float3x3 mat_bar_3x3 = float3x3(0.1f, 0.2f, 0.3f, 0.4f, 0.5f, 0.6f, 0.7f, 0.8f, 0.9f);
            float3x4 mat_bar_3x4 = float3x4(0.1f, 0.2f, 0.3f, 0.4f, 0.5f, 0.6f, 0.7f, 0.8f, 0.9f, 1.0f, 1.1f, 1.2f);
            float4x3 mat_bar_4x3 = float4x3(0.1f, 0.2f, 0.3f, 0.4f, 0.5f, 0.6f, 0.7f, 0.8f, 0.9f, 1.0f, 1.1f, 1.2f);
            float4x4 mat_bar_4x4 = float4x4(0.1f, 0.2f, 0.3f, 0.4f, 0.5f, 0.6f, 0.7f, 0.8f, 0.9f, 1.0f, 1.1f, 1.2f, 1.3f, 1.4f, 1.5f, 1.6f);

            // Array accessors

            mat_foo_4x4[0]      = float4(1.0f, 2.0f, 3.0f, 4.0f);
            mat_foo_4x4[1]      = float4(5.0f, 6.0f, 7.0f, 8.0f);
            mat_foo_4x4[2]      = float4(9.0f, 10.0f, 11.0f, 12.0f);
            mat_foo_4x4[3]      = float4(13.0f, 14.0f, 15.0f, 16.0f);
            float4 v_foo_3ex[4] = {mat_foo_4x4[0], mat_foo_4x4[1], mat_foo_4x4[2], mat_foo_4x4[3]};
            hlslpp_unit_unused(v_foo_3ex);

            mat_foo_3x3[0]      = float3(1.0f, 2.0f, 3.0f);
            mat_foo_3x3[1]      = float3(4.0f, 5.0f, 6.0f);
            mat_foo_3x3[2]      = float3(7.0f, 8.0f, 9.0f);
            float3 v_foo_4ex[3] = {mat_foo_3x3[0], mat_foo_3x3[1], mat_foo_3x3[2]};
            hlslpp_unit_unused(v_foo_4ex);

            float4   a(1, 2, 3, 4);
            float4   b(5, 6, 7, 8);
            float4   c(9, 10, 11, 12);
            float4   d(13, 14, 15, 16);
            float4x4 m_a(a, b, c, d);

            // Addition

            float1x1 mat_add_1x1 = mat_foo_1x1 + mat_bar_1x1;
            hlslpp_unit_unused(mat_add_1x1);
            float1x2 mat_add_1x2 = mat_foo_1x2 + mat_bar_1x2;
            hlslpp_unit_unused(mat_add_1x2);
            float1x3 mat_add_1x3 = mat_foo_1x3 + mat_bar_1x3;
            hlslpp_unit_unused(mat_add_1x3);
            float1x4 mat_add_1x4 = mat_foo_1x4 + mat_bar_1x4;
            hlslpp_unit_unused(mat_add_1x4);
            float2x1 mat_add_2x1 = mat_foo_2x1 + mat_bar_2x1;
            hlslpp_unit_unused(mat_add_2x1);
            float3x1 mat_add_3x1 = mat_foo_3x1 + mat_bar_3x1;
            hlslpp_unit_unused(mat_add_3x1);
            float4x1 mat_add_4x1 = mat_foo_4x1 + mat_bar_4x1;
            hlslpp_unit_unused(mat_add_4x1);
            float2x2 mat_add_2x2 = mat_foo_2x2 + mat_bar_2x2;
            hlslpp_unit_unused(mat_add_2x2);
            float2x3 mat_add_2x3 = mat_foo_2x3 + mat_bar_2x3;
            hlslpp_unit_unused(mat_add_2x3);
            float2x4 mat_add_2x4 = mat_foo_2x4 + mat_bar_2x4;
            hlslpp_unit_unused(mat_add_2x4);
            float3x2 mat_add_3x2 = mat_foo_3x2 + mat_bar_3x2;
            hlslpp_unit_unused(mat_add_3x2);
            float4x2 mat_add_4x2 = mat_foo_4x2 + mat_bar_4x2;
            hlslpp_unit_unused(mat_add_4x2);
            float3x3 mat_add_3x3 = mat_foo_3x3 + mat_bar_3x3;
            hlslpp_unit_unused(mat_add_3x3);
            float3x4 mat_add_3x4 = mat_foo_3x4 + mat_bar_3x4;
            hlslpp_unit_unused(mat_add_3x4);
            float4x3 mat_add_4x3 = mat_foo_4x3 + mat_bar_4x3;
            hlslpp_unit_unused(mat_add_4x3);
            float4x4 mat_add_4x4 = mat_foo_4x4 + mat_bar_4x4;
            hlslpp_unit_unused(mat_add_4x4);

            float1x1 mat_add_v_1x1 = mat_foo_1x1 + vfoo1;
            hlslpp_unit_unused(mat_add_v_1x1);
            float1x2 mat_add_v_1x2 = mat_foo_1x2 + vfoo1;
            hlslpp_unit_unused(mat_add_v_1x2);
            float1x3 mat_add_v_1x3 = mat_foo_1x3 + vfoo1;
            hlslpp_unit_unused(mat_add_v_1x3);
            float1x4 mat_add_v_1x4 = mat_foo_1x4 + vfoo1;
            hlslpp_unit_unused(mat_add_v_1x4);
            float2x1 mat_add_v_2x1 = mat_foo_2x1 + vfoo1;
            hlslpp_unit_unused(mat_add_v_2x1);
            float3x1 mat_add_v_3x1 = mat_foo_3x1 + vfoo1;
            hlslpp_unit_unused(mat_add_v_3x1);
            float4x1 mat_add_v_4x1 = mat_foo_4x1 + vfoo1;
            hlslpp_unit_unused(mat_add_v_4x1);
            float2x2 mat_add_v_2x2 = mat_foo_2x2 + vfoo1;
            hlslpp_unit_unused(mat_add_v_2x2);
            float2x3 mat_add_v_2x3 = mat_foo_2x3 + vfoo1;
            hlslpp_unit_unused(mat_add_v_2x3);
            float2x4 mat_add_v_2x4 = mat_foo_2x4 + vfoo1;
            hlslpp_unit_unused(mat_add_v_2x4);
            float3x2 mat_add_v_3x2 = mat_foo_3x2 + vfoo1;
            hlslpp_unit_unused(mat_add_v_3x2);
            float4x2 mat_add_v_4x2 = mat_foo_4x2 + vfoo1;
            hlslpp_unit_unused(mat_add_v_4x2);
            float3x3 mat_add_v_3x3 = mat_foo_3x3 + vfoo1;
            hlslpp_unit_unused(mat_add_v_3x3);
            float3x4 mat_add_v_3x4 = mat_foo_3x4 + vfoo1;
            hlslpp_unit_unused(mat_add_v_3x4);
            float4x3 mat_add_v_4x3 = mat_foo_4x3 + vfoo1;
            hlslpp_unit_unused(mat_add_v_4x3);
            float4x4 mat_add_v_4x4 = mat_foo_4x4 + vfoo1;
            hlslpp_unit_unused(mat_add_v_4x4);

            float1x1 mat_add_f_1x1 = mat_foo_1x1 + 1.0f;
            hlslpp_unit_unused(mat_add_f_1x1);
            float1x2 mat_add_f_1x2 = mat_foo_1x2 + 1.0f;
            hlslpp_unit_unused(mat_add_f_1x2);
            float1x3 mat_add_f_1x3 = mat_foo_1x3 + 1.0f;
            hlslpp_unit_unused(mat_add_f_1x3);
            float1x4 mat_add_f_1x4 = mat_foo_1x4 + 1.0f;
            hlslpp_unit_unused(mat_add_f_1x4);
            float2x1 mat_add_f_2x1 = mat_foo_2x1 + 1.0f;
            hlslpp_unit_unused(mat_add_f_2x1);
            float3x1 mat_add_f_3x1 = mat_foo_3x1 + 1.0f;
            hlslpp_unit_unused(mat_add_f_3x1);
            float4x1 mat_add_f_4x1 = mat_foo_4x1 + 1.0f;
            hlslpp_unit_unused(mat_add_f_4x1);
            float2x2 mat_add_f_2x2 = mat_foo_2x2 + 1.0f;
            hlslpp_unit_unused(mat_add_f_2x2);
            float2x3 mat_add_f_2x3 = mat_foo_2x3 + 1.0f;
            hlslpp_unit_unused(mat_add_f_2x3);
            float2x4 mat_add_f_2x4 = mat_foo_2x4 + 1.0f;
            hlslpp_unit_unused(mat_add_f_2x4);
            float3x2 mat_add_f_3x2 = mat_foo_3x2 + 1.0f;
            hlslpp_unit_unused(mat_add_f_3x2);
            float4x2 mat_add_f_4x2 = mat_foo_4x2 + 1.0f;
            hlslpp_unit_unused(mat_add_f_4x2);
            float3x3 mat_add_f_3x3 = mat_foo_3x3 + 1.0f;
            hlslpp_unit_unused(mat_add_f_3x3);
            float3x4 mat_add_f_3x4 = mat_foo_3x4 + 1.0f;
            hlslpp_unit_unused(mat_add_f_3x4);
            float4x3 mat_add_f_4x3 = mat_foo_4x3 + 1.0f;
            hlslpp_unit_unused(mat_add_f_4x3);
            float4x4 mat_add_f_4x4 = mat_foo_4x4 + 1.0f;
            hlslpp_unit_unused(mat_add_f_4x4);

            // Subtraction

            float1x1 mat_sub_1x1 = mat_foo_1x1 - mat_bar_1x1;
            hlslpp_unit_unused(mat_sub_1x1);
            float1x2 mat_sub_1x2 = mat_foo_1x2 - mat_bar_1x2;
            hlslpp_unit_unused(mat_sub_1x2);
            float1x3 mat_sub_1x3 = mat_foo_1x3 - mat_bar_1x3;
            hlslpp_unit_unused(mat_sub_1x3);
            float1x4 mat_sub_1x4 = mat_foo_1x4 - mat_bar_1x4;
            hlslpp_unit_unused(mat_sub_1x4);
            float2x1 mat_sub_2x1 = mat_foo_2x1 - mat_bar_2x1;
            hlslpp_unit_unused(mat_sub_2x1);
            float3x1 mat_sub_3x1 = mat_foo_3x1 - mat_bar_3x1;
            hlslpp_unit_unused(mat_sub_3x1);
            float4x1 mat_sub_4x1 = mat_foo_4x1 - mat_bar_4x1;
            hlslpp_unit_unused(mat_sub_4x1);
            float2x2 mat_sub_2x2 = mat_foo_2x2 - mat_bar_2x2;
            hlslpp_unit_unused(mat_sub_2x2);
            float2x3 mat_sub_2x3 = mat_foo_2x3 - mat_bar_2x3;
            hlslpp_unit_unused(mat_sub_2x3);
            float2x4 mat_sub_2x4 = mat_foo_2x4 - mat_bar_2x4;
            hlslpp_unit_unused(mat_sub_2x4);
            float3x2 mat_sub_3x2 = mat_foo_3x2 - mat_bar_3x2;
            hlslpp_unit_unused(mat_sub_3x2);
            float4x2 mat_sub_4x2 = mat_foo_4x2 - mat_bar_4x2;
            hlslpp_unit_unused(mat_sub_4x2);
            float3x3 mat_sub_3x3 = mat_foo_3x3 - mat_bar_3x3;
            hlslpp_unit_unused(mat_sub_3x3);
            float3x4 mat_sub_3x4 = mat_foo_3x4 - mat_bar_3x4;
            hlslpp_unit_unused(mat_sub_3x4);
            float4x3 mat_sub_4x3 = mat_foo_4x3 - mat_bar_4x3;
            hlslpp_unit_unused(mat_sub_4x3);
            float4x4 mat_sub_4x4 = mat_foo_4x4 - mat_bar_4x4;
            hlslpp_unit_unused(mat_sub_4x4);

            float1x1 mat_sub_v_1x1 = mat_foo_1x1 - vfoo1;
            hlslpp_unit_unused(mat_sub_v_1x1);
            float1x2 mat_sub_v_1x2 = mat_foo_1x2 - vfoo1;
            hlslpp_unit_unused(mat_sub_v_1x2);
            float1x3 mat_sub_v_1x3 = mat_foo_1x3 - vfoo1;
            hlslpp_unit_unused(mat_sub_v_1x3);
            float1x4 mat_sub_v_1x4 = mat_foo_1x4 - vfoo1;
            hlslpp_unit_unused(mat_sub_v_1x4);
            float2x1 mat_sub_v_2x1 = mat_foo_2x1 - vfoo1;
            hlslpp_unit_unused(mat_sub_v_2x1);
            float3x1 mat_sub_v_3x1 = mat_foo_3x1 - vfoo1;
            hlslpp_unit_unused(mat_sub_v_3x1);
            float4x1 mat_sub_v_4x1 = mat_foo_4x1 - vfoo1;
            hlslpp_unit_unused(mat_sub_v_4x1);
            float2x2 mat_sub_v_2x2 = mat_foo_2x2 - vfoo1;
            hlslpp_unit_unused(mat_sub_v_2x2);
            float2x3 mat_sub_v_2x3 = mat_foo_2x3 - vfoo1;
            hlslpp_unit_unused(mat_sub_v_2x3);
            float2x4 mat_sub_v_2x4 = mat_foo_2x4 - vfoo1;
            hlslpp_unit_unused(mat_sub_v_2x4);
            float3x2 mat_sub_v_3x2 = mat_foo_3x2 - vfoo1;
            hlslpp_unit_unused(mat_sub_v_3x2);
            float4x2 mat_sub_v_4x2 = mat_foo_4x2 - vfoo1;
            hlslpp_unit_unused(mat_sub_v_4x2);
            float3x3 mat_sub_v_3x3 = mat_foo_3x3 - vfoo1;
            hlslpp_unit_unused(mat_sub_v_3x3);
            float3x4 mat_sub_v_3x4 = mat_foo_3x4 - vfoo1;
            hlslpp_unit_unused(mat_sub_v_3x4);
            float4x3 mat_sub_v_4x3 = mat_foo_4x3 - vfoo1;
            hlslpp_unit_unused(mat_sub_v_4x3);
            float4x4 mat_sub_v_4x4 = mat_foo_4x4 - vfoo1;
            hlslpp_unit_unused(mat_sub_v_4x4);

            float1x1 mat_sub_f_1x1 = mat_foo_1x1 - 1.0f;
            hlslpp_unit_unused(mat_sub_f_1x1);
            float1x2 mat_sub_f_1x2 = mat_foo_1x2 - 1.0f;
            hlslpp_unit_unused(mat_sub_f_1x2);
            float1x3 mat_sub_f_1x3 = mat_foo_1x3 - 1.0f;
            hlslpp_unit_unused(mat_sub_f_1x3);
            float1x4 mat_sub_f_1x4 = mat_foo_1x4 - 1.0f;
            hlslpp_unit_unused(mat_sub_f_1x4);
            float2x1 mat_sub_f_2x1 = mat_foo_2x1 - 1.0f;
            hlslpp_unit_unused(mat_sub_f_2x1);
            float3x1 mat_sub_f_3x1 = mat_foo_3x1 - 1.0f;
            hlslpp_unit_unused(mat_sub_f_3x1);
            float4x1 mat_sub_f_4x1 = mat_foo_4x1 - 1.0f;
            hlslpp_unit_unused(mat_sub_f_4x1);
            float2x2 mat_sub_f_2x2 = mat_foo_2x2 - 1.0f;
            hlslpp_unit_unused(mat_sub_f_2x2);
            float2x3 mat_sub_f_2x3 = mat_foo_2x3 - 1.0f;
            hlslpp_unit_unused(mat_sub_f_2x3);
            float2x4 mat_sub_f_2x4 = mat_foo_2x4 - 1.0f;
            hlslpp_unit_unused(mat_sub_f_2x4);
            float3x2 mat_sub_f_3x2 = mat_foo_3x2 - 1.0f;
            hlslpp_unit_unused(mat_sub_f_3x2);
            float4x2 mat_sub_f_4x2 = mat_foo_4x2 - 1.0f;
            hlslpp_unit_unused(mat_sub_f_4x2);
            float3x3 mat_sub_f_3x3 = mat_foo_3x3 - 1.0f;
            hlslpp_unit_unused(mat_sub_f_3x3);
            float3x4 mat_sub_f_3x4 = mat_foo_3x4 - 1.0f;
            hlslpp_unit_unused(mat_sub_f_3x4);
            float4x3 mat_sub_f_4x3 = mat_foo_4x3 - 1.0f;
            hlslpp_unit_unused(mat_sub_f_4x3);
            float4x4 mat_sub_f_4x4 = mat_foo_4x4 - 1.0f;
            hlslpp_unit_unused(mat_sub_f_4x4);

            // Multiplication

            float1x1 mat_mul_1x1 = mat_foo_1x1 * mat_bar_1x1;
            hlslpp_unit_unused(mat_mul_1x1);
            float1x2 mat_mul_1x2 = mat_foo_1x2 * mat_bar_1x2;
            hlslpp_unit_unused(mat_mul_1x2);
            float1x3 mat_mul_1x3 = mat_foo_1x3 * mat_bar_1x3;
            hlslpp_unit_unused(mat_mul_1x3);
            float1x4 mat_mul_1x4 = mat_foo_1x4 * mat_bar_1x4;
            hlslpp_unit_unused(mat_mul_1x4);
            float2x1 mat_mul_2x1 = mat_foo_2x1 * mat_bar_2x1;
            hlslpp_unit_unused(mat_mul_2x1);
            float3x1 mat_mul_3x1 = mat_foo_3x1 * mat_bar_3x1;
            hlslpp_unit_unused(mat_mul_3x1);
            float4x1 mat_mul_4x1 = mat_foo_4x1 * mat_bar_4x1;
            hlslpp_unit_unused(mat_mul_4x1);
            float2x2 mat_mul_2x2 = mat_foo_2x2 * mat_bar_2x2;
            hlslpp_unit_unused(mat_mul_2x2);
            float2x3 mat_mul_2x3 = mat_foo_2x3 * mat_bar_2x3;
            hlslpp_unit_unused(mat_mul_2x3);
            float2x4 mat_mul_2x4 = mat_foo_2x4 * mat_bar_2x4;
            hlslpp_unit_unused(mat_mul_2x4);
            float3x2 mat_mul_3x2 = mat_foo_3x2 * mat_bar_3x2;
            hlslpp_unit_unused(mat_mul_3x2);
            float4x2 mat_mul_4x2 = mat_foo_4x2 * mat_bar_4x2;
            hlslpp_unit_unused(mat_mul_4x2);
            float3x3 mat_mul_3x3 = mat_foo_3x3 * mat_bar_3x3;
            hlslpp_unit_unused(mat_mul_3x3);
            float3x4 mat_mul_3x4 = mat_foo_3x4 * mat_bar_3x4;
            hlslpp_unit_unused(mat_mul_3x4);
            float4x3 mat_mul_4x3 = mat_foo_4x3 * mat_bar_4x3;
            hlslpp_unit_unused(mat_mul_4x3);
            float4x4 mat_mul_4x4 = mat_foo_4x4 * mat_bar_4x4;
            hlslpp_unit_unused(mat_mul_4x4);

            float1x1 mat_mul_v_1x1 = mat_foo_1x1 * vfoo1;
            hlslpp_unit_unused(mat_mul_v_1x1);
            float1x2 mat_mul_v_1x2 = mat_foo_1x2 * vfoo1;
            hlslpp_unit_unused(mat_mul_v_1x2);
            float1x3 mat_mul_v_1x3 = mat_foo_1x3 * vfoo1;
            hlslpp_unit_unused(mat_mul_v_1x3);
            float1x4 mat_mul_v_1x4 = mat_foo_1x4 * vfoo1;
            hlslpp_unit_unused(mat_mul_v_1x4);
            float2x1 mat_mul_v_2x1 = mat_foo_2x1 * vfoo1;
            hlslpp_unit_unused(mat_mul_v_2x1);
            float3x1 mat_mul_v_3x1 = mat_foo_3x1 * vfoo1;
            hlslpp_unit_unused(mat_mul_v_3x1);
            float4x1 mat_mul_v_4x1 = mat_foo_4x1 * vfoo1;
            hlslpp_unit_unused(mat_mul_v_4x1);
            float2x2 mat_mul_v_2x2 = mat_foo_2x2 * vfoo1;
            hlslpp_unit_unused(mat_mul_v_2x2);
            float2x3 mat_mul_v_2x3 = mat_foo_2x3 * vfoo1;
            hlslpp_unit_unused(mat_mul_v_2x3);
            float2x4 mat_mul_v_2x4 = mat_foo_2x4 * vfoo1;
            hlslpp_unit_unused(mat_mul_v_2x4);
            float3x2 mat_mul_v_3x2 = mat_foo_3x2 * vfoo1;
            hlslpp_unit_unused(mat_mul_v_3x2);
            float4x2 mat_mul_v_4x2 = mat_foo_4x2 * vfoo1;
            hlslpp_unit_unused(mat_mul_v_4x2);
            float3x3 mat_mul_v_3x3 = mat_foo_3x3 * vfoo1;
            hlslpp_unit_unused(mat_mul_v_3x3);
            float3x4 mat_mul_v_3x4 = mat_foo_3x4 * vfoo1;
            hlslpp_unit_unused(mat_mul_v_3x4);
            float4x3 mat_mul_v_4x3 = mat_foo_4x3 * vfoo1;
            hlslpp_unit_unused(mat_mul_v_4x3);
            float4x4 mat_mul_v_4x4 = mat_foo_4x4 * vfoo1;
            hlslpp_unit_unused(mat_mul_v_4x4);

            float1x1 mat_mul_f_1x1 = mat_foo_1x1 * 2.0f;
            hlslpp_unit_unused(mat_mul_f_1x1);
            float1x2 mat_mul_f_1x2 = mat_foo_1x2 * 2.0f;
            hlslpp_unit_unused(mat_mul_f_1x2);
            float1x3 mat_mul_f_1x3 = mat_foo_1x3 * 2.0f;
            hlslpp_unit_unused(mat_mul_f_1x3);
            float1x4 mat_mul_f_1x4 = mat_foo_1x4 * 2.0f;
            hlslpp_unit_unused(mat_mul_f_1x4);
            float2x1 mat_mul_f_2x1 = mat_foo_2x1 * 2.0f;
            hlslpp_unit_unused(mat_mul_f_2x1);
            float3x1 mat_mul_f_3x1 = mat_foo_3x1 * 2.0f;
            hlslpp_unit_unused(mat_mul_f_3x1);
            float4x1 mat_mul_f_4x1 = mat_foo_4x1 * 2.0f;
            hlslpp_unit_unused(mat_mul_f_4x1);
            float2x2 mat_mul_f_2x2 = mat_foo_2x2 * 2.0f;
            hlslpp_unit_unused(mat_mul_f_2x2);
            float2x3 mat_mul_f_2x3 = mat_foo_2x3 * 2.0f;
            hlslpp_unit_unused(mat_mul_f_2x3);
            float2x4 mat_mul_f_2x4 = mat_foo_2x4 * 2.0f;
            hlslpp_unit_unused(mat_mul_f_2x4);
            float3x2 mat_mul_f_3x2 = mat_foo_3x2 * 2.0f;
            hlslpp_unit_unused(mat_mul_f_3x2);
            float4x2 mat_mul_f_4x2 = mat_foo_4x2 * 2.0f;
            hlslpp_unit_unused(mat_mul_f_4x2);
            float3x3 mat_mul_f_3x3 = mat_foo_3x3 * 2.0f;
            hlslpp_unit_unused(mat_mul_f_3x3);
            float3x4 mat_mul_f_3x4 = mat_foo_3x4 * 2.0f;
            hlslpp_unit_unused(mat_mul_f_3x4);
            float4x3 mat_mul_f_4x3 = mat_foo_4x3 * 2.0f;
            hlslpp_unit_unused(mat_mul_f_4x3);
            float4x4 mat_mul_f_4x4 = mat_foo_4x4 * 2.0f;
            hlslpp_unit_unused(mat_mul_f_4x4);

            // Division

            float1x1 mat_div_1x1 = mat_foo_1x1 / mat_bar_1x1;
            hlslpp_unit_unused(mat_div_1x1);
            float1x2 mat_div_1x2 = mat_foo_1x2 / mat_bar_1x2;
            hlslpp_unit_unused(mat_div_1x2);
            float1x3 mat_div_1x3 = mat_foo_1x3 / mat_bar_1x3;
            hlslpp_unit_unused(mat_div_1x3);
            float1x4 mat_div_1x4 = mat_foo_1x4 / mat_bar_1x4;
            hlslpp_unit_unused(mat_div_1x4);
            float2x1 mat_div_2x1 = mat_foo_2x1 / mat_bar_2x1;
            hlslpp_unit_unused(mat_div_2x1);
            float3x1 mat_div_3x1 = mat_foo_3x1 / mat_bar_3x1;
            hlslpp_unit_unused(mat_div_3x1);
            float4x1 mat_div_4x1 = mat_foo_4x1 / mat_bar_4x1;
            hlslpp_unit_unused(mat_div_4x1);
            float2x2 mat_div_2x2 = mat_foo_2x2 / mat_bar_2x2;
            hlslpp_unit_unused(mat_div_2x2);
            float2x3 mat_div_2x3 = mat_foo_2x3 / mat_bar_2x3;
            hlslpp_unit_unused(mat_div_2x3);
            float2x4 mat_div_2x4 = mat_foo_2x4 / mat_bar_2x4;
            hlslpp_unit_unused(mat_div_2x4);
            float3x2 mat_div_3x2 = mat_foo_3x2 / mat_bar_3x2;
            hlslpp_unit_unused(mat_div_3x2);
            float4x2 mat_div_4x2 = mat_foo_4x2 / mat_bar_4x2;
            hlslpp_unit_unused(mat_div_4x2);
            float3x3 mat_div_3x3 = mat_foo_3x3 / mat_bar_3x3;
            hlslpp_unit_unused(mat_div_3x3);
            float3x4 mat_div_3x4 = mat_foo_3x4 / mat_bar_3x4;
            hlslpp_unit_unused(mat_div_3x4);
            float4x3 mat_div_4x3 = mat_foo_4x3 / mat_bar_4x3;
            hlslpp_unit_unused(mat_div_4x3);
            float4x4 mat_div_4x4 = mat_foo_4x4 / mat_bar_4x4;
            hlslpp_unit_unused(mat_div_4x4);

            float1x1 mat_div_v_1x1 = mat_foo_1x1 / vfoo1;
            hlslpp_unit_unused(mat_div_v_1x1);
            float1x2 mat_div_v_1x2 = mat_foo_1x2 / vfoo1;
            hlslpp_unit_unused(mat_div_v_1x2);
            float1x3 mat_div_v_1x3 = mat_foo_1x3 / vfoo1;
            hlslpp_unit_unused(mat_div_v_1x3);
            float1x4 mat_div_v_1x4 = mat_foo_1x4 / vfoo1;
            hlslpp_unit_unused(mat_div_v_1x4);
            float2x1 mat_div_v_2x1 = mat_foo_2x1 / vfoo1;
            hlslpp_unit_unused(mat_div_v_2x1);
            float3x1 mat_div_v_3x1 = mat_foo_3x1 / vfoo1;
            hlslpp_unit_unused(mat_div_v_3x1);
            float4x1 mat_div_v_4x1 = mat_foo_4x1 / vfoo1;
            hlslpp_unit_unused(mat_div_v_4x1);
            float2x2 mat_div_v_2x2 = mat_foo_2x2 / vfoo1;
            hlslpp_unit_unused(mat_div_v_2x2);
            float2x3 mat_div_v_2x3 = mat_foo_2x3 / vfoo1;
            hlslpp_unit_unused(mat_div_v_2x3);
            float2x4 mat_div_v_2x4 = mat_foo_2x4 / vfoo1;
            hlslpp_unit_unused(mat_div_v_2x4);
            float3x2 mat_div_v_3x2 = mat_foo_3x2 / vfoo1;
            hlslpp_unit_unused(mat_div_v_3x2);
            float4x2 mat_div_v_4x2 = mat_foo_4x2 / vfoo1;
            hlslpp_unit_unused(mat_div_v_4x2);
            float3x3 mat_div_v_3x3 = mat_foo_3x3 / vfoo1;
            hlslpp_unit_unused(mat_div_v_3x3);
            float3x4 mat_div_v_3x4 = mat_foo_3x4 / vfoo1;
            hlslpp_unit_unused(mat_div_v_3x4);
            float4x3 mat_div_v_4x3 = mat_foo_4x3 / vfoo1;
            hlslpp_unit_unused(mat_div_v_4x3);
            float4x4 mat_div_v_4x4 = mat_foo_4x4 / vfoo1;
            hlslpp_unit_unused(mat_div_v_4x4);

            float1x1 mat_div_f_1x1 = mat_foo_1x1 / 2.0f;
            hlslpp_unit_unused(mat_div_f_1x1);
            float1x2 mat_div_f_1x2 = mat_foo_1x2 / 2.0f;
            hlslpp_unit_unused(mat_div_f_1x2);
            float1x3 mat_div_f_1x3 = mat_foo_1x3 / 2.0f;
            hlslpp_unit_unused(mat_div_f_1x3);
            float1x4 mat_div_f_1x4 = mat_foo_1x4 / 2.0f;
            hlslpp_unit_unused(mat_div_f_1x4);
            float2x1 mat_div_f_2x1 = mat_foo_2x1 / 2.0f;
            hlslpp_unit_unused(mat_div_f_2x1);
            float3x1 mat_div_f_3x1 = mat_foo_3x1 / 2.0f;
            hlslpp_unit_unused(mat_div_f_3x1);
            float4x1 mat_div_f_4x1 = mat_foo_4x1 / 2.0f;
            hlslpp_unit_unused(mat_div_f_4x1);
            float2x2 mat_div_f_2x2 = mat_foo_2x2 / 2.0f;
            hlslpp_unit_unused(mat_div_f_2x2);
            float2x3 mat_div_f_2x3 = mat_foo_2x3 / 2.0f;
            hlslpp_unit_unused(mat_div_f_2x3);
            float2x4 mat_div_f_2x4 = mat_foo_2x4 / 2.0f;
            hlslpp_unit_unused(mat_div_f_2x4);
            float3x2 mat_div_f_3x2 = mat_foo_3x2 / 2.0f;
            hlslpp_unit_unused(mat_div_f_3x2);
            float4x2 mat_div_f_4x2 = mat_foo_4x2 / 2.0f;
            hlslpp_unit_unused(mat_div_f_4x2);
            float3x3 mat_div_f_3x3 = mat_foo_3x3 / 2.0f;
            hlslpp_unit_unused(mat_div_f_3x3);
            float3x4 mat_div_f_3x4 = mat_foo_3x4 / 2.0f;
            hlslpp_unit_unused(mat_div_f_3x4);
            float4x3 mat_div_f_4x3 = mat_foo_4x3 / 2.0f;
            hlslpp_unit_unused(mat_div_f_4x3);
            float4x4 mat_div_f_4x4 = mat_foo_4x4 / 2.0f;
            hlslpp_unit_unused(mat_div_f_4x4);

            f1 = f2 = f3 = f4 = f5 = f6 = f7 = f8 = f9 = f10 = f11 = f12 = f13 = f14 = f15 = f16 = 0.0f;

            //            hlslpp_unit::BeginTest("Float Matrix All Any");
            {
                bool mat_all_f_2x2 = all(float2x2(f1, f2, f3, f4));
                hlslpp_check(eq(mat_all_f_2x2, f1 != 0.0f && f2 != 0.0f && f3 != 0.0f && f4 != 0.0f));

                bool mat_all_f_3x3 = all(float3x3(f1, f2, f3, f4, f5, f6, f7, f8, f9));
                hlslpp_check(eq(mat_all_f_3x3, f1 != 0.0f && f2 != 0.0f && f3 != 0.0f && f4 != 0.0f && f5 != 0.0f && f6 != 0.0f && f7 != 0.0f && f8 != 0.0f && f9 != 0.0f));

                bool mat_all_f_4x4 = all(float4x4(f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15, f16));
                eq(mat_all_f_4x4,
                   f1 != 0.0f && f2 != 0.0f && f3 != 0.0f && f4 != 0.0f && f5 != 0.0f && f6 != 0.0f && f7 != 0.0f && f8 != 0.0f && f9 != 0.0f && f10 != 0.0f && f11 != 0.0f && f12 != 0.0f && f13 != 0.0f && f14 != 0.0f && f15 != 0.0f && f16 != 0.0f);

                bool mat_any_f_2x2 = any(float2x2(f1, f2, f3, f4));
                hlslpp_check(eq(mat_any_f_2x2, f1 != 0.0f || f2 != 0.0f || f3 != 0.0f || f4 != 0.0f));

                bool mat_any_f_3x3 = any(float3x3(f1, f2, f3, f4, f5, f6, f7, f8, f9));
                hlslpp_check(eq(mat_any_f_3x3, f1 != 0.0f || f2 != 0.0f || f3 != 0.0f || f4 != 0.0f || f5 != 0.0f || f6 != 0.0f || f7 != 0.0f || f8 != 0.0f || f9 != 0.0f));

                bool mat_any_f_4x4 = any(float4x4(f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15, f16));
                eq(mat_any_f_4x4,
                   f1 != 0.0f || f2 != 0.0f || f3 != 0.0f || f4 != 0.0f || f5 != 0.0f || f6 != 0.0f || f7 != 0.0f || f8 != 0.0f || f9 != 0.0f || f10 != 0.0f || f11 != 0.0f || f12 != 0.0f || f13 != 0.0f || f14 != 0.0f || f15 != 0.0f || f16 != 0.0f);
            }
            //          hlslpp_unit::EndTest();

            //        hlslpp_unit::BeginTest("Float Matrix Multiplication");
            {
                float1x1 mat_mmul_1x1_1x1 = mul(mat_foo_1x1, mat_bar_1x1);
                hlslpp_check(eq(mat_mmul_1x1_1x1, 16.8000011f));

                float1x2 mat_mmul_1x1_1x2 = mul(mat_foo_1x1, mat_bar_1x2);
                hlslpp_check(eq(mat_mmul_1x1_1x2, 4.20000029f, 8.40000057f));

                float1x3 mat_mmul_1x1_1x3 = mul(mat_foo_1x1, mat_bar_1x3);
                hlslpp_check(eq(mat_mmul_1x1_1x3, 4.20000029f, 8.40000057f, 12.6000004f));

                float1x4 mat_mmul_1x1_1x4 = mul(mat_foo_1x1, mat_bar_1x4);
                hlslpp_check(eq(mat_mmul_1x1_1x4, 4.20000029f, 8.40000057f, 12.6000004f, 16.8000011f));

                float2x1 mat_mmul_2x1_1x1 = mul(mat_bar_2x1, mat_foo_1x1);
                hlslpp_check(eq(mat_mmul_2x1_1x1, 4.20000029f, 8.40000057f));

                float2x2 mat_mmul_2x1_1x2 = mul(mat_bar_2x1, mat_foo_1x2);
                hlslpp_check(eq(mat_mmul_2x1_1x2, 3.25999999f, 1.21000004f, 6.5199998f, 2.42000008f));

                float2x3 mat_mmul_2x1_1x3 = mul(mat_bar_2x1, mat_foo_1x3);
                hlslpp_check(eq(mat_mmul_2x1_1x3, 1.11000001f, 2.15000010f, 1.43000007f, 2.22000003f, 4.30000019f, 2.86000013f));

                float2x4 mat_mmul_2x1_1x4 = mul(mat_bar_2x1, mat_foo_1x4);
                eq(mat_mmul_2x1_1x4, 7.40999985f, 0.325000018f, 0.075000003f, 0.188000008f, 14.8199997f, 0.650000036f, 0.150000006f, 0.376000017f);

                float3x1 mat_mmul_3x1_1x1 = mul(mat_bar_3x1, mat_foo_1x1);
                hlslpp_check(eq(mat_mmul_3x1_1x1, 4.20000029f, 8.40000057f, 12.6000004f));

                float3x2 mat_mmul_3x1_1x2 = mul(mat_bar_3x1, mat_foo_1x2);
                eq(mat_mmul_3x1_1x2, 3.25999999f, 1.21000004f, 6.51999998f, 2.42000008f, 9.77999973f, 3.63000035f);

                float3x3 mat_mmul_3x1_1x3 = mul(mat_bar_3x1, mat_foo_1x3);
                eq(mat_mmul_3x1_1x3, 1.11000004f, 2.22000003f, 3.33000016f, 2.15000010f, 4.30000019f, 6.45000029f, 1.43000007f, 2.86000013f, 4.29000044f);

                float3x4 mat_mmul_3x1_1x4 = mul(mat_bar_3x1, mat_foo_1x4);
                eq(mat_mmul_3x1_1x4, 7.40999985f, 0.325000018f, 0.075000003f, 0.188000008f, 14.8199997f, 0.650000036f, 0.150000006f, 0.376000017f, 22.2299995f, 0.975000024f, 0.225000009f, 0.564000010f);

                float4x1 mat_mmul_4x1_1x1 = mul(mat_bar_4x1, mat_foo_1x1);
                hlslpp_check(eq(mat_mmul_4x1_1x1, 4.20000029f, 8.40000057f, 12.6000004f, 16.8000011f));

                float4x2 mat_mmul_4x1_1x2 = mul(mat_bar_4x1, mat_foo_1x2);
                eq(mat_mmul_4x1_1x2, 3.25999999f, 1.21000004f, 6.51999998f, 2.42000008f, 9.77999973f, 3.63000035f, 13.0400000f, 4.84000015f);

                float4x3 mat_mmul_4x1_1x3 = mul(mat_bar_4x1, mat_foo_1x3);
                eq(mat_mmul_4x1_1x3, 1.11000001f, 2.15000010f, 1.43000007f, 2.22000003f, 4.30000019f, 2.86000013f, 3.33000016f, 6.45000029f, 4.29000044f, 4.44000006f, 8.60000038f, 5.72000027f);

                float4x4 mat_mmul_4x1_1x4 = mul(mat_bar_4x1, mat_foo_1x4);
                eq(mat_mmul_4x1_1x4, 7.40999985f, 0.325000018f, 0.075000003f, 0.188000008f, 14.8199997f, 0.650000036f, 0.150000006f, 0.376000017f, 22.2299995f, 0.975000024f, 0.225000009f, 0.564000010f, 29.6399994f, 1.300000070f, 0.300000012f,
                   0.752000034f);

                float1x1 mat_mmul_1x2_2x1 = mul(mat_bar_1x2, mat_foo_2x1);
                hlslpp_check(eq(mat_mmul_1x2_2x1, 0.5f));

                float1x2 mat_mmul_1x2_2x2 = mul(mat_bar_1x2, mat_foo_2x2);
                hlslpp_check(eq(mat_mmul_1x2_2x2, 0.700000048f, 1.00000000f));

                float1x3 mat_mmul_1x2_2x3 = mul(mat_bar_1x2, mat_foo_2x3);
                hlslpp_check(eq(mat_mmul_1x2_2x3, 0.900000036f, 1.20000005f, 1.50000000f));

                float1x4 mat_mmul_1x2_2x4 = mul(mat_bar_1x2, mat_foo_2x4);
                hlslpp_check(eq(mat_mmul_1x2_2x4, 1.10000002f, 1.40000010f, 1.70000005f, 2.0f));

                float1x1 mat_mmul_1x3_3x1 = mul(mat_bar_1x3, mat_foo_3x1);
                hlslpp_check(eq(mat_mmul_1x3_3x1, 1.40000010f));

                float1x2 mat_mmul_1x3_3x2 = mul(mat_bar_1x3, mat_foo_3x2);
                hlslpp_check(eq(mat_mmul_1x3_3x2, 2.20000005f, 2.80000019f));

                // float1x3 mat_mmul_1x3_3x3 = mul(mat_bar_1x3, mat_foo_3x3);
                // hlslpp_check(eq(mat_mmul_1x3_3x3, 3.00000024f, 3.60000014f, 4.19999981f));

                float1x4 mat_mmul_1x3_3x4 = mul(mat_bar_1x3, mat_foo_3x4);
                hlslpp_check(eq(mat_mmul_1x3_3x4, 3.80000019f, 4.40000010f, 5.0f, 5.60000038f));

                float1x1 mat_mmul_1x4_4x1 = mul(mat_bar_1x4, mat_foo_4x1);
                hlslpp_check(eq(mat_mmul_1x4_4x1, 3.0f));

                float1x2 mat_mmul_1x4_4x2 = mul(mat_bar_1x4, mat_foo_4x2);
                hlslpp_check(eq(mat_mmul_1x4_4x2, 5.0f, 6.0f));

                float1x3 mat_mmul_1x4_4x3 = mul(mat_bar_1x4, mat_foo_4x3);
                hlslpp_check(eq(mat_mmul_1x4_4x3, 7.00000048f, 8.00000000f, 9.00000000f));

                float1x4 mat_mmul_1x4_4x4 = mul(mat_bar_1x4, mat_foo_4x4);
                hlslpp_check(eq(mat_mmul_1x4_4x4, 9.00000000f, 10.0000000f, 11.0000000f, 12.0000000f));

                float2x1 mat_mmul_2x2_2x1 = mul(mat_bar_2x2, mat_foo_2x1);
                hlslpp_check(eq(mat_mmul_2x2_2x1, 0.5f, 1.10000002f));

                float2x2 mat_nsym_1_2x2 = float2x2(69.0f, 420.0f, 17.0f, -2.5f);

                float2x2 mat_nsym_2_2x2 = float2x2(33.33f, 6.66f, 3.33f, 5.55f);

                float2x2 mat_mmul_2x2_2x2 = mul(mat_nsym_1_2x2, mat_nsym_2_2x2);
                hlslpp_check(eq(mat_mmul_2x2_2x2, 3698.37f, 2790.54f, 558.285034f, 99.345f));

                float2x3 mat_mmul_2x2_2x3 = mul(mat_bar_2x2, mat_foo_2x3);
                eq(mat_mmul_2x2_2x3, 0.900000036f, 1.20000005f, 1.50000000f, 1.90000010f, 2.59999990f, 3.30000019f);

                float2x4 mat_mmul_2x2_2x4 = mul(mat_bar_2x2, mat_foo_2x4);
                eq(mat_mmul_2x2_2x4, 1.10000002f, 1.40000010f, 1.70000005f, 2.00000000f, 2.29999995f, 3.00000000f, 3.70000005f, 4.40000010f);

                float3x1 mat_mmul_3x2_2x1 = mul(mat_bar_3x2, mat_foo_2x1);
                hlslpp_check(eq(mat_mmul_3x2_2x1, 0.5f, 1.10000002f, 1.70000005f));

                float3x2 mat_mmul_3x2_2x2 = mul(mat_bar_3x2, mat_foo_2x2);
                eq(mat_mmul_3x2_2x2, 0.700000048f, 1.00000000f, 1.50000000f, 2.20000005f, 2.30000019f, 3.40000010f);

                float3x3 mat_mmul_3x2_2x3 = mul(mat_bar_3x2, mat_foo_2x3);
                eq(mat_mmul_3x2_2x3, 0.900000036f, 1.20000005f, 1.50000000f, 1.90000010f, 2.59999990f, 3.30000019f, 2.90000010f, 4.00000000f, 5.10000038f);

                float3x4 mat_mmul_3x2_2x4 = mul(mat_bar_3x2, mat_foo_2x4);
                eq(mat_mmul_3x2_2x4, 1.10000002f, 1.40000010f, 1.70000005f, 2.00000000f, 2.29999995f, 3.00000000f, 3.70000005f, 4.40000010f, 3.50000000f, 4.60000038f, 5.70000029f, 6.80000019f);

                float4x1 mat_mmul_4x2_2x1 = mul(mat_bar_4x2, mat_foo_2x1);
                hlslpp_check(eq(mat_mmul_4x2_2x1, 0.500000000f, 1.10000002f, 1.70000005f, 2.29999995f));

                float4x2 mat_mmul_4x2_2x2 = mul(mat_bar_4x2, mat_foo_2x2);
                eq(mat_mmul_4x2_2x2, 0.700000048f, 1.00000000f, 1.50000000f, 2.20000005f, 2.30000019f, 3.40000010f, 3.10000014f, 4.59999990f);

                float4x3 mat_mmul_4x2_2x3 = mul(mat_bar_4x2, mat_foo_2x3);
                eq(mat_mmul_4x2_2x3, 0.900000036f, 1.20000005f, 1.50000000f, 1.90000010f, 2.59999990f, 3.30000019f, 2.90000010f, 4.00000000f, 5.10000038f, 3.90000010f, 5.40000010f, 6.90000010f);

                float4x4 mat_mmul_4x2_2x4 = mul(mat_bar_4x2, mat_foo_2x4);
                eq(mat_mmul_4x2_2x4, 1.10000002f, 1.40000010f, 1.70000005f, 2.00000000f, 2.29999995f, 3.00000000f, 3.70000005f, 4.40000010f, 3.50000000f, 4.60000038f, 5.70000029f, 6.80000019f, 4.69999981f, 6.20000029f, 7.69999981f, 9.19999981f);

                float2x1 mat_mmul_2x3_3x1 = mul(mat_bar_2x3, mat_foo_3x1);
                hlslpp_check(eq(mat_mmul_2x3_3x1, 1.40000010f, 3.20000005f));

                float2x2 mat_mmul_2x3_3x2 = mul(mat_bar_2x3, mat_foo_3x2);
                hlslpp_check(eq(mat_mmul_2x3_3x2, 2.20000005f, 2.80000019f, 4.90000010f, 6.40000010f));

                float2x3 mat_mmul_2x3_3x3 = mul(mat_bar_2x3, mat_foo_3x3);
                eq(mat_mmul_2x3_3x3, 3.00000024f, 3.60000014f, 4.19999981f, 6.60000038f, 8.10000038f, 9.60000038f);

                float2x4 mat_mmul_2x3_3x4 = mul(mat_bar_2x3, mat_foo_3x4);
                eq(mat_mmul_2x3_3x4, 3.80000019f, 4.40000010f, 5.00000000f, 5.60000038f, 8.30000019f, 9.80000019f, 11.3000002f, 12.8000002f);

                float2x1 mat_mmul_2x4_4x1 = mul(mat_bar_2x4, mat_foo_4x1);
                hlslpp_check(eq(mat_mmul_2x4_4x1, 3.00000000f, 7.00000000f));

                float2x2 mat_mmul_2x4_4x2 = mul(mat_bar_2x4, mat_foo_4x2);
                hlslpp_check(eq(mat_mmul_2x4_4x2, 5.00000000f, 6.00000000f, 11.4000006f, 14.0000000f));

                float2x3 mat_mmul_2x4_4x3 = mul(mat_bar_2x4, mat_foo_4x3);
                eq(mat_mmul_2x4_4x3, 7.00000048f, 8.00000000f, 9.00000000f, 15.7999992f, 18.3999996f, 21.0000000f);

                // TODO Revisit this unit test. Using AVX vs SSE gives very slightly different results.
                // We would like them to be identical if possible
                float2x4 mat_mmul_2x4_4x4 = mul(mat_bar_2x4, mat_foo_4x4);
                eq(mat_mmul_2x4_4x4, 9.00000000f, 10.0000000f, 11.0000000f, 12.0000000f, 20.2000008f, 22.7999992f, 25.3999996f, 28.0000000f, 0.00001f);

                float3x1 mat_mmul_3x3_3x1 = mul(mat_bar_3x3, mat_foo_3x1);
                hlslpp_check(eq(mat_mmul_3x3_3x1, 1.40000010f, 3.20000005f, 5.00000000f));

                float3x2 mat_mmul_3x3_3x2 = mul(mat_bar_3x3, mat_foo_3x2);
                hlslpp_check(eq(mat_mmul_3x3_3x2, 2.20000005f, 2.80000019f, 4.90000010f, 6.40000010f, 7.60000038f, 10.0000000f));

                float3x3 mat_nsym_1_3x3 = float3x3(69.0f, 420.0f, 33.0f, 17.0f, -2.5f, 3.14f, 0.2777f, -5.9f, 123.321f);

                float3x3 mat_nsym_2_3x3 = float3x3(33.33f, 6.66f, -6.66f, 3.33f, 5.55f, 321.0f, 976.7f, 50.0f, -9.0f);

                float3x3 mat_mmul_3x3_3x3 = mul(mat_nsym_1_3x3, mat_nsym_2_3x3);
                hlslpp_check(eq(mat_mmul_3x3_3x3, 35929.47f, 4440.54f, 134063.46f, 3625.123f, 256.345f, -943.98f, 120437.234f, 6135.154482f, -3005.63867f, 0.01f));

                float3x4 mat_mmul_3x3_3x4 = mul(mat_bar_3x3, mat_foo_3x4);
                hlslpp_check(eq(mat_mmul_3x3_3x4, 3.80000019f, 4.40000010f, 5.00000000f, 5.60000038f, 8.30000019f, 9.80000019f, 11.3000002f, 12.8000002f, 12.7999992f, 15.2000008f, 17.5999985f, 20.0000000f));

                float3x1 mat_mmul_3x4_4x1 = mul(mat_bar_3x4, mat_foo_4x1);
                hlslpp_check(eq(mat_mmul_3x4_4x1, 3.00000000f, 7.00000000f, 11.0000000f));

                float3x2 mat_mmul_3x4_4x2 = mul(mat_bar_3x4, mat_foo_4x2);
                hlslpp_check(eq(mat_mmul_3x4_4x2, 5.00000000f, 6.00000000f, 11.4000006f, 14.0000000f, 17.8000011f, 22.0000000f));

                float3x3 mat_mmul_3x4_4x3 = mul(mat_bar_3x4, mat_foo_4x3);
                hlslpp_check(eq(mat_mmul_3x4_4x3, 7.00000048f, 8.00000000f, 9.00000000f, 15.7999992f, 18.3999996f, 21.0000000f, 24.6000004f, 28.7999992f, 33.0000000f));

                float3x4 mat_mmul_3x4_4x4 = mul(mat_bar_3x4, mat_foo_4x4);
                eq(mat_mmul_3x4_4x4, 9.00000000f, 10.0000000f, 11.0000000f, 12.0000000f, 20.2000008f, 22.7999992f, 25.3999996f, 28.0000000f, 31.4000015f, 35.5999985f, 39.7999992f, 44.0000000f);

                float4x1 mat_mmul_4x3_3x1 = mul(mat_bar_4x3, mat_foo_3x1);
                hlslpp_check(eq(mat_mmul_4x3_3x1, 1.40000010f, 3.20000005f, 5.00000000f, 6.80000019f));

                float4x2 mat_mmul_4x3_3x2 = mul(mat_bar_4x3, mat_foo_3x2);
                hlslpp_check(eq(mat_mmul_4x3_3x2, 2.20000005f, 2.80000019f, 4.90000010f, 6.40000010f, 7.60000038f, 10.0000000f, 10.3000002f, 13.6000004f));

                float4x3 mat_mmul_4x3_3x3 = mul(mat_bar_4x3, mat_foo_3x3);
                hlslpp_check(eq(mat_mmul_4x3_3x3, 3.00000024f, 3.60000014f, 4.19999981f, 6.60000038f, 8.10000038f, 9.60000038f, 10.1999998f, 12.6000004f, 15.0000000f, 13.8000011f, 17.1000004f, 20.4000015f));

                float4x4 mat_mmul_4x3_3x4 = mul(mat_bar_4x3, mat_foo_3x4);
                hlslpp_check(
                    eq(mat_mmul_4x3_3x4, 3.80000019f, 4.40000010f, 5.00000000f, 5.60000038f, 8.30000019f, 9.80000019f, 11.3000002f, 12.8000002f, 12.7999992f, 15.2000008f, 17.5999985f, 20.0000000f, 17.2999992f, 20.6000004f, 23.9000015f, 27.2000008f));

                float4x1 mat_mmul_4x4_4x1 = mul(mat_bar_4x4, mat_foo_4x1);
                hlslpp_check(eq(mat_mmul_4x4_4x1, 3.00000000f, 7.00000000f, 11.0000000f, 15.0000000f));

                float4x2 mat_mmul_4x4_4x2 = mul(mat_bar_4x4, mat_foo_4x2);
                hlslpp_check(eq(mat_mmul_4x4_4x2, 5.00000000f, 6.00000000f, 11.4000006f, 14.0000000f, 17.8000011f, 22.0000000f, 24.2000008f, 30.0000000f));

                float4x3 mat_mmul_4x4_4x3 = mul(mat_bar_4x4, mat_foo_4x3);
                hlslpp_check(eq(mat_mmul_4x4_4x3, 7.00000048f, 8.00000000f, 9.00000000f, 15.7999992f, 18.3999996f, 21.0000000f, 24.6000004f, 28.7999992f, 33.0000000f, 33.4000015f, 39.2000008f, 45.0000000f));

                float4x4 mat_nsym_1_4x4 = float4x4(69.0f, 420.0f, 33.0f, 2.6f, 17.0f, -2.5f, 3.14f, 1.5f, 0.2777f, -5.9f, 123.321f, -0.325f, 1.6f, 9.996f, 2.0f, 5.0f);

                float4x4 mat_nsym_2_4x4 = float4x4(33.33f, 6.66f, -6.66f, 1.0f, 3.33f, 5.55f, 321.0f, 7.2f, 976.7f, 50.0f, -9.0f, 9.63f, -9.67f, 0.132f, 1.0f, 2.0f);

                // TODO Revisit this unit test. Using AVX vs SSE gives very slightly different results.
                // We would like them to be identical if possible
                float4x4 mat_mmul_4x4_4x4 = mul(mat_nsym_1_4x4, mat_nsym_2_4x4);
                hlslpp_check(eq(mat_mmul_4x4_4x4, 35904.328f, 4440.8832f, 134066.047f, 3415.99f, 3610.61816f, 256.543f, -942.48f, 32.2382f, 120440.372191f, 6135.111582f, -3005.963482f, 1144.72893f, 1991.66468f, 166.7938f, 3185.06f, 102.8312f, 0.01f));

                // Matrix-vector multiplication

                // float1 vec_vmul_1x1_v1 = mul(mat_foo_1x1, vfoo1);
                // float1 vec_vmul_1x2_v2 = mul(mat_foo_1x2, vfoo2);
                // float1 vec_vmul_1x3_v3 = mul(mat_foo_1x3, vfoo3);
                // float1 vec_vmul_1x4_v4 = mul(mat_foo_1x4, vfoo4);
                //
                // float2 vec_vmul_2x1_v1 = mul(mat_foo_2x1, vfoo1);
                // float2 vec_vmul_2x2_v2 = mul(mat_foo_2x2, vfoo2);
                // float2 vec_vmul_2x3_v3 = mul(mat_foo_2x3, vfoo3);
                // float2 vec_vmul_2x4_v4 = mul(mat_foo_2x4, vfoo4);
                //
                // float3 vec_vmul_3x1_v1 = mul(mat_foo_3x1, vfoo1);
                // float3 vec_vmul_3x2_v2 = mul(mat_foo_3x2, vfoo2);
                // float3 vec_vmul_3x3_v3 = mul(mat_foo_3x3, vfoo3);
                // float3 vec_vmul_3x4_v4 = mul(mat_foo_3x4, vfoo4);
                //
                // float4 vec_vmul_4x1_v1 = mul(mat_foo_4x1, vfoo1);
                // float4 vec_vmul_4x2_v2 = mul(mat_foo_4x2, vfoo2);
                // float4 vec_vmul_4x3_v3 = mul(mat_foo_4x3, vfoo3);
                // float4 vec_vmul_4x4_v4 = mul(mat_foo_4x4, vfoo4);
            }
        }
    }
}
UNITTEST_SUITE_END
