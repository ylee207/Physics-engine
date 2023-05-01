#ifndef _H_2D_GEOMTRY_
#define _H_2D_GEOMETRY_
#include "vectors.h"

typedef vec2 Point2D;

Point2D point1(1.0f, 3.0f);
Point2D point2(7.0f, -3.0f);
float distance = Magnitude(point1 - point2);
typedef struct Line2D {
    Point2D start;
    Point2D end;
    inline Line2D() { }
    inline Line2D(const Point2D& s, const Point2D& e)
        :start(s), end(e) {}
} Line2D;
float Length(const Line2D& line);
float LengthSq(const Line2D& line);

typedef struct Circle {
 Point2D position;
 float radius;
 inline Circle() : radius(1.0f) {}
 inline Circle(const Point2D& p, float r):
 position(p), radius(r) {}
} Circle;

typedef struct Rectangle2D {
 Point2D origin;
 vec2 size;
 inline Rectangle2D() : size(1, 1) { }
 inline Rectangle2D(const Point2D& o, const vec2& s) :
 origin(o), size(s) { }
} Rectangle2D;

vec2 GetMin(const Rectangle2D& rect);
vec2 GetMax(const Rectangle2D& rect);
Rectangle2D FromMinMax(const vec2& min, const vec2& max);
Rectangle2D FromMinMax(const vec2& min, const vec2& max) {
 return Rectangle2D(min, max - min);
}

typedef struct OrientedRectangle {
 Point2D position;
 vec2 halfExtents;
 float rotation;

  inline OrientedRectangle() :
 halfExtents(1.0f, 1.0f), rotation(0.0f) { }
 inline OrientedRectangle(const Point2D& p, const vec2& e):
 position(p), halfExtents(e), rotation(0.0f) { }

 inline OrientedRectangle(const Point2D& pos,
 const vec2& ext, float rot) :
 position(pos), halfExtents(ext), rotation(rot) { }
} OrientedRectangle;
#endif