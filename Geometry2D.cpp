#include "Geometry2D.h"
#include "matrices.h"
#include <cmath>
#include <cfloat>
#define CMP(x, y) \
 (fabsf((x)–(y)) <= FLT_EPSILON * \
 fmaxf(1.0f, fmaxf(fabsf(x), fabsf(y))))

 float Length(const Line2D& line) {
 return Magnitude(line.end - line.start);
}
float LengthSq(const Line2D& line) {
 return MagnitudeSq(line.end - line.start);
}
vec2 GetMin(const Rectangle2D& rect) {
 vec2 p1 = rect.origin;
 vec2 p2 = rect.origin + rect.size;
 return vec2(fminf(p1.x, p2.x), fminf(p1.y, p2.y));
}

vec2 GetMax(const Rectangle2D& rect) {
 vec2 p1 = rect.origin;
 vec2 p2 = rect.origin + rect.size;
 return vec2(fmaxf(p1.x, p2.x), fmaxf(p1.y, p2.y));
}