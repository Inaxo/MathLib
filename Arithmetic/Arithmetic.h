#include "../MathLib.h"

namespace MathStuff {
    class Arithmetic {
    public:
        static double add(std::initializer_list<double> args);
        static double substract(std::initializer_list<double> args);
        static double multiply(std::initializer_list<double> args);
        static double divide(std::initializer_list<double> args);
        static int modulo(int a, int b);
        static int factorial (int n);
        static int absolute(int x);
        static int maximum(int a, int b);
        static double ceil(double x);
        static double floor(double x);
        static int minimum(int a, int b);
        static double round(double x);
        static double power(double base, int exponent);
    };
}
