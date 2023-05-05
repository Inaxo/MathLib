#pragma once
#include <initializer_list>
#include <list>
#include <map>
#include <string>
#include <vector>
template <typename T, template <typename, typename> class Container>
Container<T, std::allocator<T>> operator-(const Container<T, std::allocator<T>>& c1, const Container<T, std::allocator<T>>& c2);
template <typename T, template <typename, typename> class Container>
Container<T, std::allocator<T>> operator+(const Container<T, std::allocator<T>>& c1, const Container<T, std::allocator<T>>& c2);
template <typename T, template <typename, typename> class Container>
Container<T, std::allocator<T>> operator*(const Container<T, std::allocator<T>>& c1, const Container<T, std::allocator<T>>& c2);
template <typename T, template <typename, typename> class Container>
Container<T, std::allocator<T>> operator/(const Container<T, std::allocator<T>>& c1, const Container<T, std::allocator<T>>& c2);
namespace MathStuff
{

    class Arithmetic;
    class NumbersLogic;
    class QuadraticEquation
    {
    public:
        //Functions returning information about the quadratic equation
        static bool hasRealRoots(double a, double b, double c);
        static int numberOfRoots(double a, double b, double c);
        static std::vector<double> roots(double a, double b, double c);
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

    class SearchingAlgorithms
    {
    public:
        template <typename T>
        static std::map<int, int> find_duplicates(const T& pairs_);

    };
}
