
#include "../MathLib.h"
namespace MathStuff
{
    class SearchAlgorithms
    {
    public:
        template <typename T>
        static std::map<int, int> find_duplicates(const T& pairs_);
        template <typename T, typename E>
        bool SearchAlgorithms::contains(const T& container_, const E& element_);

    };
}
