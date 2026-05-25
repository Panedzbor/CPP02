#include "Point.hpp"
#include <cstdlib>

static float convertToFl(std::string arg);

int main(int argc, char *argv[])
{
    if (argc != 9)
    {
        std::cout << "Run the program with 8 arguments: ./bsp <Ax> <Ay> <Bx> <By> <Cx> <Cy> <testPtX> <testPtY>\n";
        return 1;
    }
    
    float P1x = convertToFl(argv[1]);
    float P1y = convertToFl(argv[2]);
    Point p1(P1x, P1y);
    float P2x = convertToFl(argv[3]);
    float P2y = convertToFl(argv[4]);
    Point p2(P2x, P2y);
    float P3x = convertToFl(argv[5]);
    float P3y = convertToFl(argv[6]);
    Point p3(P3x, P3y);
    float PTx = convertToFl(argv[7]);
    float PTy = convertToFl(argv[8]);
    Point pT(PTx, PTy);
    
    std::cout << std::boolalpha;
    std::cout << "Triangle: A(" << p1.getPx() << "," << p1.getPy() << ") ";
    std::cout << "B(" << p2.getPx() << "," << p2.getPy() << ") ";
    std::cout << "C(" << p3.getPx() << "," << p3.getPy() << ")\n";
    std::cout << "Test Point: " << pT.getPx() << "," << pT.getPy() << "\n";
    std::cout << "Result: " << bsp(p1, p2, p3, pT) << "\n";
    return 0;
}

static float convertToFl(std::string arg)
{
    float result;

    result = static_cast<float>(std::atof(arg.c_str()));
    return (result);
}