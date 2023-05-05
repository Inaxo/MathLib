#pragma once
#include <initializer_list>
#include <list>
#include <map>
#include <string>
#include <vector>
//Operators overloading f. definitions [Supported operations: add,substract,divide,multiply]
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
    class QuadraticEquation;

    class SearchingAlgorithms
    {
    public:
        template <typename T>
        static std::map<int, int> find_duplicates(const T& pairs_);

    };
}
