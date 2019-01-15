#ifndef GM_MAT_H_INCLUDED
#define GM_MAT_H_INCLUDED

#include "gm/gm_api.h"

#include "gm/vec.h"

namespace gm {

struct GM_API Mat2 {

    float m00;float m01;
    float m10;float m11;

    Mat2 operator*=(const Mat2& other);
};

struct GM_API Mat3 {

    float m00;float m01;float m02;
    float m10;float m11;float m12;
    float m20;float m21;float m22;

    Mat3 operator*=(const Mat3& other);
};

struct GM_API Mat4 {

    float m00;float m01;float m02;float m03;
    float m10;float m11;float m12;float m13;
    float m20;float m21;float m22;float m23;
    float m30;float m31;float m32;float m33;

    Mat4 operator*=(const Mat4& other);
};

Mat2 GM_API operator*(const Mat2& lhs, const Mat2& rhs);
Mat3 GM_API operator*(const Mat3& lhs, const Mat3& rhs);
Mat4 GM_API operator*(const Mat4& lhs, const Mat4& rhs);

Vec2 GM_API operator*(const Mat2& lhs, const Vec2& rhs);
Vec3 GM_API operator*(const Mat3& lhs, const Vec3& rhs);
Vec4 GM_API operator*(const Mat4& lhs, const Vec4& rhs);

Mat2 GM_API mat2WithCols(const Vec2& col1, const Vec2& col2);
Mat3 GM_API mat3WithCols(const Vec3& col1, const Vec3& col2, const Vec3& col3);
Mat4 GM_API mat4WithCols(const Vec4& col1, const Vec4& col2, const Vec4& col3, const Vec4& col4);

Mat2 GM_API mat2WithRows(const Vec2& row1, const Vec2& row2);
Mat3 GM_API mat3WithRows(const Vec3& row1, const Vec3& row2, const Vec3& row3);
Mat4 GM_API mat4WithRows(const Vec4& row1, const Vec4& row2, const Vec4& row3, const Vec4& row4);

Mat4 GM_API lookAt(const Vec3& eye, const Vec3& up, const Vec3& target);
};

#endif // GM_MAT_H_INCLUDED
