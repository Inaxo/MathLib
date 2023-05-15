
#include "../MathLib.h"
namespace MathStuff
{
    class SearchAlgorithms
    {
    public:
        template <typename T>
        static std::map<int, int> find_duplicates(const T& pairs_);
        template<typename Container, typename Element>
        static bool contains(const Container& container_, const Element& element_);

    };
}
