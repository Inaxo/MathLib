#pragma once
#include <initializer_list>
#include <map>
#include <string>
#include <vector>

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
        static std::map<int, int> find_duplicates(const T& pairs_)
        {
                auto pairs = std::vector<int>(std::begin(pairs_), std::end(pairs_));
                int min;
                for (int i = 0; i < pairs.size(); i++)
                {
                    min = i;
                    for (int j = i + 1; j < pairs.size(); j++)
                    {
                        if (pairs[j] < pairs[min])
                        {
                            min = j;
                        }
                    }
                    std::swap(pairs[min], pairs[i]);
                }
                std::map <int, int> duplicates;
                for (int i = 0; i < pairs.size(); i++)
                {
                    if (duplicates[pairs[i]])
                    {
                        duplicates[pairs[i]]++;
                    }
                    else
                    {
                        duplicates[pairs[i]] = 1;
                    }
                }
                for (auto iter = duplicates.begin(); iter != duplicates.end(); )
                {
                    if (iter->second < 2)
                    {
                        iter = duplicates.erase(iter);
                    }
                    else
                    {
                        ++iter;
                    }
                }
                return duplicates;

            }

    };
}
