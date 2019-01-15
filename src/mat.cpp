#include "gm/mat.h"


gm::Mat2 gm::Mat2::operator*=(const Mat2& other) {
    return *this * other;
}

gm::Mat3 gm::Mat3::operator*=(const Mat3& other) {
    return *this * other;
}

gm::Mat4 gm::Mat4::operator*=(const Mat4& other) {
    return *this * other;
}

gm::Mat2 gm::operator*(const Mat2& lhs, const Mat2& rhs) {
    auto m00 = lhs.m00 * rhs.m00 + lhs.m01 * rhs.m10;
    auto m01 = lhs.m00 * rhs.m01 + lhs.m01 * rhs.m11;
    auto m10 = lhs.m10 * rhs.m00 + lhs.m11 * rhs.m10;
    auto m11 = lhs.m10 * rhs.m01 + lhs.m11 * rhs.m11;
    return Mat2{
        m00, m01,
        m10, m11
    };
}

gm::Mat3 gm::operator*(const Mat3& lhs, const Mat3& rhs) {
    auto m00 = lhs.m00 * rhs.m00 + lhs.m01 * rhs.m10 + lhs.m02 * rhs.m20;
    auto m01 = lhs.m00 * rhs.m01 + lhs.m01 * rhs.m11 + lhs.m02 * rhs.m21;
    auto m02 = lhs.m00 * rhs.m02 + lhs.m01 * rhs.m12 + lhs.m02 * rhs.m22;
    auto m10 = lhs.m10 * rhs.m00 + lhs.m11 * rhs.m10 + lhs.m12 * rhs.m20;
    auto m11 = lhs.m10 * rhs.m01 + lhs.m11 * rhs.m11 + lhs.m12 * rhs.m21;
    auto m12 = lhs.m10 * rhs.m02 + lhs.m11 * rhs.m12 + lhs.m12 * rhs.m22;
    auto m20 = lhs.m20 * rhs.m00 + lhs.m21 * rhs.m10 + lhs.m22 * rhs.m20;
    auto m21 = lhs.m20 * rhs.m01 + lhs.m21 * rhs.m11 + lhs.m22 * rhs.m21;
    auto m22 = lhs.m20 * rhs.m02 + lhs.m21 * rhs.m12 + lhs.m22 * rhs.m22;
    return Mat3 {
        m00, m01, m02,
        m10, m11, m12,
        m20, m21, m22
    };
}

gm::Mat4 gm::operator*(const Mat4& lhs, const Mat4& rhs) {
    auto m00 = lhs.m00 * rhs.m00 + lhs.m01 * rhs.m10 + lhs.m02 * rhs.m20 + lhs.m03 * rhs.m30;
    auto m01 = lhs.m00 * rhs.m01 + lhs.m01 * rhs.m11 + lhs.m02 * rhs.m21 + lhs.m03 * rhs.m31;
    auto m02 = lhs.m00 * rhs.m02 + lhs.m01 * rhs.m12 + lhs.m02 * rhs.m22 + lhs.m03 * rhs.m32;
    auto m03 = lhs.m00 * rhs.m03 + lhs.m01 * rhs.m13 + lhs.m02 * rhs.m23 + lhs.m03 * rhs.m33;
    auto m10 = lhs.m10 * rhs.m00 + lhs.m11 * rhs.m10 + lhs.m12 * rhs.m20 + lhs.m13 * rhs.m30;
    auto m11 = lhs.m10 * rhs.m01 + lhs.m11 * rhs.m11 + lhs.m12 * rhs.m21 + lhs.m13 * rhs.m31;
    auto m12 = lhs.m10 * rhs.m02 + lhs.m11 * rhs.m12 + lhs.m12 * rhs.m22 + lhs.m13 * rhs.m32;
    auto m13 = lhs.m10 * rhs.m03 + lhs.m11 * rhs.m13 + lhs.m12 * rhs.m23 + lhs.m13 * rhs.m33;
    auto m20 = lhs.m20 * rhs.m00 + lhs.m21 * rhs.m10 + lhs.m22 * rhs.m20 + lhs.m23 * rhs.m30;
    auto m21 = lhs.m20 * rhs.m01 + lhs.m21 * rhs.m11 + lhs.m22 * rhs.m21 + lhs.m23 * rhs.m31;
    auto m22 = lhs.m20 * rhs.m02 + lhs.m21 * rhs.m12 + lhs.m22 * rhs.m22 + lhs.m23 * rhs.m32;
    auto m23 = lhs.m20 * rhs.m03 + lhs.m21 * rhs.m13 + lhs.m22 * rhs.m23 + lhs.m23 * rhs.m33;
    auto m30 = lhs.m30 * rhs.m00 + lhs.m31 * rhs.m10 + lhs.m32 * rhs.m20 + lhs.m33 * rhs.m30;
    auto m31 = lhs.m30 * rhs.m01 + lhs.m31 * rhs.m11 + lhs.m32 * rhs.m21 + lhs.m33 * rhs.m31;
    auto m32 = lhs.m30 * rhs.m02 + lhs.m31 * rhs.m12 + lhs.m32 * rhs.m22 + lhs.m33 * rhs.m32;
    auto m33 = lhs.m30 * rhs.m03 + lhs.m31 * rhs.m13 + lhs.m32 * rhs.m23 + lhs.m33 * rhs.m33;
    return Mat4{
        m00, m01, m02, m03,
        m10, m11, m12, m13,
        m20, m21, m22, m23,
        m30, m31, m32, m33
    };
}

gm::Vec2 gm::operator*(const Mat2& lhs, const Vec2& rhs) {
    auto x = lhs.m00 * rhs.x + lhs.m01 * rhs.y;
    auto y = lhs.m10 * rhs.x + lhs.m11 * rhs.y;
    return Vec2{x, y};
}

gm::Vec3 gm::operator*(const Mat3& lhs, const Vec3& rhs) {
    auto x = lhs.m00 * rhs.x + lhs.m01 * rhs.y + lhs.m02 * rhs.z;
    auto y = lhs.m10 * rhs.x + lhs.m11 * rhs.y + lhs.m12 * rhs.z;
    auto z = lhs.m20 * rhs.x + lhs.m21 * rhs.y + lhs.m22 * rhs.z;
    return Vec3{x, y, z};
}

gm::Vec4 gm::operator*(const Mat4& lhs, const Vec4& rhs) {
    auto x = lhs.m00 * rhs.x + lhs.m01 * rhs.y + lhs.m02 * rhs.z + lhs.m03 * rhs.w;
    auto y = lhs.m10 * rhs.x + lhs.m11 * rhs.y + lhs.m12 * rhs.z + lhs.m13 * rhs.w;
    auto z = lhs.m20 * rhs.x + lhs.m21 * rhs.y + lhs.m22 * rhs.z + lhs.m23 * rhs.w;
    auto w = lhs.m30 * rhs.x + lhs.m31 * rhs.y + lhs.m32 * rhs.z + lhs.m33 * rhs.w;
    return Vec4{x, y, z, w};
}

gm::Mat2 gm::mat2WithCols(const Vec2& col1, const Vec2& col2) {
    return Mat2{
        col1.x, col2.x,
        col1.y, col2.y
    };
}

gm::Mat3 gm::mat3WithCols(const Vec3& col1, const Vec3& col2, const Vec3& col3) {
    return Mat3{
        col1.x, col2.x, col3.x,
        col1.y, col2.y, col3.y,
        col1.z, col2.z, col3.z
    };
}

gm::Mat4 gm::mat4WithCols(const Vec4& col1, const Vec4& col2, const Vec4& col3, const Vec4& col4) {
    return Mat4{
        col1.x, col2.x, col3.x, col4.x,
        col1.y, col2.y, col3.y, col4.y,
        col1.z, col2.z, col3.z, col4.z,
        col1.w, col2.w, col3.w, col4.w
    };
}

gm::Mat2 gm::mat2WithRows(const Vec2& row1, const Vec2& row2) {
    return Mat2{
        row1.x, row1.y,
        row2.x, row2.y
    };
}

gm::Mat3 gm::mat3WithRows(const Vec3& row1, const Vec3& row2, const Vec3& row3) {
    return Mat3{
        row1.x, row1.y, row1.z,
        row2.x, row2.y, row2.z,
        row3.x, row3.y, row3.z
    };
}

gm::Mat4 gm::mat4WithRows(const Vec4& row1, const Vec4& row2, const Vec4& row3, const Vec4& row4) {
    return Mat4{
        row1.x, row1.y, row1.z, row1.w,
        row2.x, row2.y, row2.z, row2.w,
        row3.x, row3.y, row3.z, row3.w,
        row4.x, row4.y, row4.z, row4.w
    };
}

gm::Mat4 gm::lookAt(const Vec3& eye, const Vec3& up, const Vec3& target) {
    auto front = gm::normalize(eye - target);
    auto right = gm::cross(front, up);
    auto lookAt = mat4WithRows(Vec4{front, 1.0}, Vec4{up, 1.0}, Vec4{right, 1.0}, Vec4{0.0f, 0.0, 0.0, 1.0});
    lookAt.m03 = eye.x;
    lookAt.m13 = eye.y;
    lookAt.m23 = eye.z;
    return lookAt;
}


