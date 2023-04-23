#include "vectors.h"
#include <iostream>
#include <cmath>
#include <cfloat>

using namespace std;

#define CMP(x, y) \
 (fabsf((x)–(y)) <= FLT_EPSILON * \
    fmaxf(1.0f, \
    fmaxf(fabsf(x), fabsf(y))) \
 )

 vec2 operator+(const vec2& l, const vec2& r) {
    return { l.x + r.x, l.y + r.y };
}
vec3 operator+(const vec3& l, const vec3& r) {
    return { l.x + r.x, l.y + r.y, l.z + r.z };
}

vec2 operator-(const vec2& l, const vec2& r) {
     return { l.x - r.x, l.y - r.y };
}
vec3 operator-(const vec3& l, const vec3& r) {
    return { l.x - r.x, l.y - r.y, l.z - r.z };
}

vec2 operator*(const vec2& l, const vec2& r) {
    return { l.x * r.x, l.y * r.y };
}
vec3 operator*(const vec3& l, const vec3& r) {
    return { l.x * r.x, l.y * r.y, l.z * r.z };
}

vec2 operator*(const vec2& l, float r) {
    return { l.x * r, l.y * r };
}
vec3 operator*(const vec3& l, float r) {
    return { l.x * r, l.y * r, l.z * r };
}

bool operator==(const vec2& l, const vec2& r) {
    return CMP(l.x, r.x) && CMP(l.y, r.y);
}
bool operator==(const vec3& l, const vec3& r) {
    return CMP(l.x, r.x) && CMP(l.y, r.y) && CMP(l.z, r.z);
}
bool operator!=(const vec2& l, const vec2& r) {
    return !(l == r);
}
bool operator!=(const vec3& l, const vec3& r) {
    return !(l == r);
}

#define ABSOLUTE(x, y) (fabsf((x)–(y)) <= FLT_EPSILON)
#define RELATIVE(x, y) \
    (fabsf((x) – (y)) <= FLT_EPSILON * Max(fabsf(x), fabsf(y)))

vec2() : x(0.0f), y(0.0f) { }
vec2(float _x, float _y) : x(_x), y(_y) { }

vec3() : x(0.0f), y(0.0f), z(0.0f) { }
vec3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) { }

float Dot(const vec2& l, const vec2& r) {
    return l.x * r.x + l.y * r.y;
}
float Dot(const vec3& l, const vec3& r) {
    return l.x * r.x + l.y * r.y + l.z * r.z;
}