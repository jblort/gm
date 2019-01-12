#include "gm/vec.h"

#include <cmath>

gm::Vec2 gm::Vec2::operator+=(const Vec2& other) {
    return *this + other;
}

gm::Vec2 gm::Vec2::operator*=(const Vec2& other) {
    return *this * other;
}

gm::Vec2 gm::Vec2::operator-=(const Vec2& other) {
    return *this - other;
}

gm::Vec2 gm::Vec2::operator*=(const float& c) {
    return *this * c;
}

gm::Vec2 gm::Vec2::operator/=(const float& c) {
    return *this / c;
}

gm::Vec3 gm::Vec3::operator+=(const Vec3& other) {
    return *this + other;
}

gm::Vec3 gm::Vec3::operator*=(const Vec3& other) {
    return *this * other;
}

gm::Vec3 gm::Vec3::operator-=(const Vec3& other) {
    return *this - other;
}

gm::Vec3 gm::Vec3::operator*=(const float& c) {
    return *this * c;
}

gm::Vec3 gm::Vec3::operator/=(const float& c) {
    return *this / c;
}

gm::Vec4 gm::Vec4::operator+=(const Vec4& other) {
    return *this + other;
}

gm::Vec4 gm::Vec4::operator*=(const Vec4& other) {
    return *this * other;
}

gm::Vec4 gm::Vec4::operator-=(const Vec4& other) {
    return *this - other;
}

gm::Vec4 gm::Vec4::operator*=(const float& c) {
    return *this * c;
}

gm::Vec4 gm::Vec4::operator/=(const float& c) {
    return *this / c;
}

gm::Vec2 gm::operator+(const Vec2& lhs, const Vec2& rhs) {
    return {lhs.x + rhs.x, lhs.y + rhs.y};
}

gm::Vec2 gm::operator*(const Vec2& lhs, const Vec2& rhs) {
    return {lhs.x * rhs.x, lhs.y * rhs.y};
}

gm::Vec2 gm::operator-(const Vec2& lhs, const Vec2& rhs) {
    return {lhs.x - rhs.x, lhs.y - rhs.y};
}

gm::Vec3 gm::operator+(const Vec3& lhs, const Vec3& rhs) {
    return {lhs.x + rhs.x, lhs.y + rhs.y, lhs.z + rhs.z};
}

gm::Vec3 gm::operator*(const Vec3& lhs, const Vec3& rhs) {
    return {lhs.x * rhs.x, lhs.y * rhs.y, lhs.z * rhs.z};
}

gm::Vec3 gm::operator-(const Vec3& lhs, const Vec3& rhs) {
    return {lhs.x - rhs.x, lhs.y - rhs.y, lhs.z - rhs.z};
}

gm::Vec4 gm::operator+(const Vec4& lhs, const Vec4& rhs) {
    return {lhs.x + rhs.x, lhs.y + rhs.y, lhs.z + rhs.z, lhs.w + rhs.w};
}

gm::Vec4 gm::operator*(const Vec4& lhs, const Vec4& rhs) {
    return {lhs.x * rhs.x, lhs.y * rhs.y, lhs.z * rhs.z, lhs.w * rhs.w};
}

gm::Vec4 gm::operator-(const Vec4& lhs, const Vec4& rhs) {
    return {lhs.x - rhs.x, lhs.y - rhs.y, lhs.z - rhs.z, lhs.w - rhs.w};
}

gm::Vec2 gm::operator*(const Vec2& v, const float& c) {
    return {v.x * c, v.y * c};
}

gm::Vec3 gm::operator*(const Vec3& v, const float& c) {
    return {v.x * c, v.y * c, v.z * c};
}

gm::Vec4 gm::operator*(const Vec4& v, const float& c) {
    return {v.x * c, v.y * c, v.z * c, v.w * c};
}

gm::Vec2 gm::operator*(const float& c, const Vec2& v) {
    return v * c;
}

gm::Vec3 gm::operator*(const float& c, const Vec3& v) {
    return v * c;
}

gm::Vec4 gm::operator*(const float& c, const Vec4& v) {
    return v * c;
}

gm::Vec2 gm::operator/(const Vec2& v, const float& c) {
    return v * 1 / c;
}

gm::Vec3 gm::operator/(const Vec3& v, const float& c) {
    return v * 1 / c;
}

gm::Vec4 gm::operator/(const Vec4& v, const float& c) {
    return v * 1 / c;
}

float gm::length(const Vec2& v) {
    auto l2 = v.x * v.x + v.y * v.y;
    return std::sqrt(l2);
}

float gm::length(const Vec3& v) {
    auto l2 = v.x * v.x + v.y * v.y + v.z * v.z;
    return std::sqrt(l2);
}

float gm::length(const Vec4& v) {
    auto l2 = v.x * v.x + v.y * v.y + v.z * v.z + v.w * v.w;
    return std::sqrt(l2);
}

gm::Vec2 gm::normalize(const Vec2& v) {
    auto length = gm::length(v);
    return {v / length};
}

gm::Vec3 gm::normalize(const Vec3& v) {
    auto length = gm::length(v);
    return {v / length};
}

gm::Vec4 gm::normalize(const Vec4& v) {
    auto length = gm::length(v);
    return {v / length};
}

float gm::dot(const Vec2& lhs, const Vec2& rhs) {
    return lhs.x * rhs.x + lhs.y * rhs.y;
}

float gm::dot(const Vec3& lhs, const Vec3& rhs) {
    return lhs.x * rhs.x + lhs.y * rhs.y + lhs.z * rhs.z;
}

float gm::dot(const Vec4& lhs, const Vec4& rhs) {
    return lhs.x * rhs.x + lhs.y * rhs.y + lhs.z * rhs.z + lhs.w * rhs.w;
}

gm::Vec3 gm::cross(const Vec3& lhs, const Vec3& rhs) {
    return {lhs.y * rhs.z - lhs.z * rhs.y,
            lhs.x * rhs.z - lhs.z * rhs.x,
            lhs.x * rhs.y - lhs.y * rhs.x};
}
