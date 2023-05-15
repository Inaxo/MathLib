#include "../MathLib.h"
namespace MathStuff
{
    class QuadraticEquation
    {
    public:
        //Functions returning information about the quadratic equation
        static bool hasRealRoots(double a, double b, double c);
        static int numberOfRoots(double a, double b, double c);
        static std::pair<double,double> roots(double a, double b, double c);
        static std::pair<double, double> getVertex(double a, double b, double c);
        static double getAxisOfSymmetry(double a, double b);
        static double getDiscriminant(double a, double b, double c);
        static bool isConcaveUp(double a);
        static bool isConcaveDown(double a);
        static double getLatusRectum(double a);
        static std::pair<double, double> getFocus(double a, double b, double c);
        static double getDirectrix(double a, double b, double c);
        static std::string getEquation(double a, double b, double c);

    };
}
