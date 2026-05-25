#pragma once
#ifndef POINT_H
#define POINT_H

# include "Fixed.hpp"

class Point {
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point() : x(0), y(0) {};
        Point(const float fx, const float fy) : x(fx), y(fy) {};
        Point(const Point& original) : x(original.x), y(original.y) {};
        Point& operator=(const Point& original);
        ~Point() {};
        const Fixed getPx(void) const;
        const Fixed getPy(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif