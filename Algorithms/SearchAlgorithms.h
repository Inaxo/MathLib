
#include "../MathLib.h"
namespace MathStuff
{
    class SearchAlgorithms
    {
    public:
        template <typename T>
        static std::map<int, int> find_duplicates(const T& pairs_);
        template<typename Container, typename Element>
        static bool contains_linear(const Container& container_, const Element& element_);
        template<typename Container, typename Element>
        static bool contains_binary(const Container& container_, const Element& element_);
        template<typename Container, typename Element>
        static bool contains_interpolation(const Container& container_, const Element& element_);
        template<typename Container, typename Element>
        static bool contains_jump(const Container& container_, const Element& element_);

    };
}
