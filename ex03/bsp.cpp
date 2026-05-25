#include "Point.hpp"

static Fixed halfPlane(Point const p1, Point const p2, Point const ptest);

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed results[3];
    
    results[0] = halfPlane(a, b, point);
    results[1] = halfPlane(b, c, point);
    results[2] = halfPlane(c, a, point);

    if (results[0] < 0 && results[1] < 0 && results[2] < 0)
        return (true);
    if (results[0] > 0 && results[1] > 0 && results[2] > 0)
        return (true);
    return (false);
}

static Fixed halfPlane(Point const p1, Point const p2, Point const ptest)
{
    Fixed result;

    result = (p2.getPx() - p1.getPx()) * (ptest.getPy() - p1.getPy()) - (p2.getPy() - p1.getPy()) * (ptest.getPx() - p1.getPx());

    return (result);
}