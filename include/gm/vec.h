#ifndef GM_VEC_H_INCLUDED
#define GM_VEC_H_INCLUDED

#include "gm/gm_api.h"

namespace gm {

struct GM_API Vec2 {
    float x;
    float y;

    Vec2 operator+=(const Vec2& other);
    Vec2 operator*=(const Vec2& other);
    Vec2 operator-=(const Vec2& other);
    Vec2 operator*=(const float& c);
    Vec2 operator/=(const float& c);
};

struct GM_API Vec3 {
    float x;
    float y;
    float z;

    Vec3 operator+=(const Vec3& other);
    Vec3 operator*=(const Vec3& other);
    Vec3 operator-=(const Vec3& other);
    Vec3 operator*=(const float& c);
    Vec3 operator/=(const float& c);

};

struct GM_API Vec4 {
    float x;
    float y;
    float z;
    float w;

    Vec4 operator+=(const Vec4& other);
    Vec4 operator*=(const Vec4& other);
    Vec4 operator-=(const Vec4& other);
    Vec4 operator*=(const float& c);
    Vec4 operator/=(const float& c);

    Vec4(float x, float y, float z, float w);
    Vec4(const Vec3& other, float w);
};

Vec2 GM_API operator+(const Vec2& lhs, const Vec2& rhs);
Vec3 GM_API operator+(const Vec3& lhs, const Vec3& rhs);
Vec4 GM_API operator+(const Vec4& lhs, const Vec4& rhs);

Vec2 GM_API operator*(const Vec2& lhs, const Vec2& rhs);
Vec3 GM_API operator*(const Vec3& lhs, const Vec3& rhs);
Vec4 GM_API operator*(const Vec4& lhs, const Vec4& rhs);

Vec2 GM_API operator-(const Vec2& lhs, const Vec2& rhs);
Vec3 GM_API operator-(const Vec3& lhs, const Vec3& rhs);
Vec4 GM_API operator-(const Vec4& lhs, const Vec4& rhs);

Vec2 GM_API operator*(const Vec2& v, const float& c);
Vec3 GM_API operator*(const Vec3& v, const float& c);
Vec4 GM_API operator*(const Vec4& v, const float& c);

Vec2 GM_API operator*(const float& c, const Vec2& v);
Vec3 GM_API operator*(const float& c, const Vec3& v);
Vec4 GM_API operator*(const float& c, const Vec4& v);

Vec2 GM_API operator/(const Vec2& v, const float& c);
Vec3 GM_API operator/(const Vec3& v, const float& c);
Vec4 GM_API operator/(const Vec4& v, const float& c);

Vec2 GM_API normalize(const Vec2& v);
Vec3 GM_API normalize(const Vec3& v);
Vec4 GM_API normalize(const Vec4& v);

float GM_API length(const Vec2& v);
float GM_API length(const Vec3& v);
float GM_API length(const Vec4& v);

float GM_API dot(const Vec2& lhs, const Vec2& rhs);
float GM_API dot(const Vec3& lhs, const Vec3& rhs);
float GM_API dot(const Vec4& lhs, const Vec4& rhs);

Vec3 GM_API cross(const Vec3& lhs, const Vec3& rhs);

}

#endif // GM_VEC_H_HINCLUDED
