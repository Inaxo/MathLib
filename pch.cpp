
#include "pch.h"
#include "MathLib.h"
#include "cmath"
#include <sstream>
#include "vector"
#include "Arithmetic/Arithmetic.h"
#include "Equations/QuadraticEquation.h"
#include <numeric>
#include "Algorithms/SearchAlgorithms.h"
#include "Algorithms/DynamicAlgorithms.h"
#include "Algorithms/SortingAlgorithms.h"
#include "NumbersLogic/Primes.h"
#include <iostream>
using namespace MathStuff;


template std::vector<int> operator-(const std::vector<int>& c1, const std::vector<int>& c2);
template std::list<int> operator-(const std::list<int>& c1, const std::list<int>& c2);
template std::vector<int> operator+(const std::vector<int>& c1, const std::vector<int>& c2);
template std::list<int> operator+(const std::list<int>& c1, const std::list<int>& c2);
template std::vector<int> operator*(const std::vector<int>& c1, const std::vector<int>& c2);
template std::list<int> operator/(const std::list<int>& c1, const std::list<int>& c2);
template <typename T, template <typename, typename> class Container>
Container<T, std::allocator<T>> operator-(const Container<T, std::allocator<T>>& c1, const Container<T, std::allocator<T>>& c2)
{
    Container<T, std::allocator<T>> result;
    auto it1 = c1.begin();
    auto it2 = c2.begin();
    while (it1 != c1.end() && it2 != c2.end()) {
        result.push_back(*it1 - *it2);
        ++it1;
        ++it2;
    }
    return result;
}
template <typename T, template <typename, typename> class Container>
Container<T, std::allocator<T>> operator+(const Container<T, std::allocator<T>>& c1, const Container<T, std::allocator<T>>& c2)
{
    Container<T, std::allocator<T>> result;
    auto it1 = c1.begin();
    auto it2 = c2.begin();
    while (it1 != c1.end() && it2 != c2.end()) {
        result.push_back(*it1 + *it2);
        ++it1;
        ++it2;
    }
    return result;
}
template <typename T, template <typename, typename> class Container>
Container<T, std::allocator<T>> operator*(const Container<T, std::allocator<T>>& c1, const Container<T, std::allocator<T>>& c2)
{
    Container<T, std::allocator<T>> result;
    auto it1 = c1.begin();
    auto it2 = c2.begin();
    while (it1 != c1.end() && it2 != c2.end()) {
        result.push_back(*it1 * *it2);
        ++it1;
        ++it2;
    }
    return result;
}
template <typename T, template <typename, typename> class Container>
Container<T, std::allocator<T>> operator/(const Container<T, std::allocator<T>>& c1, const Container<T, std::allocator<T>>& c2)
{
    Container<T, std::allocator<T>> result;
    auto it1 = c1.begin();
    auto it2 = c2.begin();
    while (it1 != c1.end() && it2 != c2.end()) {
        result.push_back(*it1 / *it2);
        ++it1;
        ++it2;
    }
    return result;
}
/*================================================================================*/
template<typename Container>
double Arithmetic::average(const Container& c) {
    auto sum = std::accumulate(std::begin(c), std::end(c), 0.0);
    return sum / std::size(c);
}

template<typename T>
double Arithmetic::average(const T* arr, std::size_t size) {
    double sum = 0.0;
    for (std::size_t i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / size;
}

template double Arithmetic::average(const std::vector<int>& c);
template double Arithmetic::average(const std::list<int>& c);
template double Arithmetic::average(const int* arr, std::size_t size);
double Arithmetic::add(std::initializer_list<double> args)
{
    double result = 0;
    for (auto arg : args) { result += arg; }
    return result;
}
double Arithmetic::substract(std::initializer_list<double> args)
{
    double result = 1;
    for (auto arg : args) { result -= arg; }
    return result;
}

double Arithmetic::multiply(std::initializer_list<double> args)
{
    double result = 1;
    for (auto arg : args) { result *= arg; }
    return result;
}
double Arithmetic::divide(std::initializer_list<double> args)
{
    double result = 1;
    for (auto arg : args) { result /= arg; }
    return result;
}

int Arithmetic::modulo(int a, int b) {
    return ((a % b) + b) % b;
}
double Arithmetic::power(double base, int exponent) {
    if (exponent == 0) {
        return 1.0;
    }
    else if (exponent == 1) {
        return base;
    }
    else if (exponent < 0) {
        return 1.0 / power(base, -exponent);
    }
    else {
        double result = power(base, exponent / 2);
        if (exponent % 2 == 0) {
            return result * result;
        }
        else {
            return result * result * base;
        }
    }
}
int Arithmetic::factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}
int Arithmetic::absolute(int x) {
    if (x < 0) {
        return -x;
    }
    return x;
}

int Arithmetic::maximum(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}
int Arithmetic::minimum(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}
double Arithmetic::round(double x) {
    int integerPart = static_cast<int>(x);
    double fractionalPart = x - integerPart;
    if (x >= 0) {
        if (fractionalPart >= 0.5) {
            return integerPart + 1;
        }
        return integerPart;
    }
    else {
        if (fractionalPart <= -0.5) {
            return integerPart - 1;
        }
        return integerPart;
    }
}
double Arithmetic::ceil(double x) {
    int integerPart = static_cast<int>(x);
    double fractionalPart = x - integerPart;
    if (x >= 0) {
        if (fractionalPart > 0) {
            return integerPart + 1;
        }
        return integerPart;
    }
    else {
        return integerPart;
    }
}
double Arithmetic::floor(double x) {
    int integerPart = static_cast<int>(x);
    double fractionalPart = x - integerPart;
    if (x >= 0) {
        return integerPart;
    }
    else {
        if (fractionalPart < 0) {
            return integerPart - 1;
        }
        return integerPart;
    }
}

/*================================================================================*/

bool QuadraticEquation::hasRealRoots(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    return discriminant >= 0;
}
int QuadraticEquation::numberOfRoots(double a, double b, double c)
{
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        return 2;
    }
    else if (discriminant == 0) {
        return 1;
    }
    else {
        return 0;
    }
}
std::pair<double, double> QuadraticEquation::getVertex(double a, double b, double c) {
    double x = -b / (2 * a);
    double y = a * x * x + b * x + c;
    return std::make_pair(x, y);
}
double QuadraticEquation::getAxisOfSymmetry(double a, double b)
{
    return -b / (2 * a);
}
double QuadraticEquation::getDiscriminant(double a, double b, double c)
{
    double const discriminant = b * b - 4 * a * c;
    return discriminant;
}
bool QuadraticEquation::isConcaveUp(double a)
{
    if (a > 0) {
        return true;
    }
    else {
        return false;
    }
}
bool QuadraticEquation::isConcaveDown(double a)
{
    if (a < 0) {
        return true;
    }
    else {
        return false;
    }
}
 double QuadraticEquation::getLatusRectum(double a) {
    return 4 * a;
}
 double QuadraticEquation::getDirectrix(double a, double b, double c) {
     return -b / (2 * a);
 }
std::pair<double, double> QuadraticEquation::getFocus(double a, double b, double c) {
    double x = -b / (2 * a);
    double y = c - (b * b) / (4 * a);
    return std::make_pair(x, y);
}
std::string QuadraticEquation::getEquation(double a, double b, double c) {
    std::stringstream ss;
    double x = -b / (2 * a);
    double y = c - (b * b) / (4 * a);
    ss << a << "(x";
    if (x < 0) {
        ss << " + " << -x;
    }
    else if (x > 0) {
        ss << " - " << x;
    }
    ss << ")^2";
    if (y < 0) {
        ss << " - " << -y;
    }
    else if (y > 0) {
        ss << " + " << y;
    }
    return ss.str();
}
std::pair<double, double> QuadraticEquation::roots(double a, double b, double c) {
    double const discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        double x1 = (-b + std::sqrt(discriminant)) / (2 * a);
        double x2 = (-b - std::sqrt(discriminant)) / (2 * a);
        return std::make_pair(x1, x2); 
    }
    else if (discriminant == 0) {
        double x = -b / (2 * a);
        return std::make_pair(x, x); 
    }
    else {
        return std::make_pair(std::numeric_limits<double>::quiet_NaN(), std::numeric_limits<double>::quiet_NaN());

    }
}
/*================================================================================*/
bool NumbersLogic::isPrime(int n)
{
    if (n < 2) return false;
    for(int i =2; i * i <=  n; i++)
    {
        if (n % i == 0) return false;
    }
    return true;
}
bool NumbersLogic::isEven(int n)
{
    bool isEven = (n % 2 == 0) ? true : false;
    return isEven;
}
bool NumbersLogic::isOdd(int n)
{
    bool isOdd = (n % 2 != 0) ? true : false;
    return isOdd;
}
bool NumbersLogic::isPerfectSquare(int n) {
    int sqrtN = sqrt(n);
    return (sqrtN * sqrtN == n);
}
int NumbersLogic::nthPrime(int n) {
    if (n <= 0) {
        return -1; 
    }
    if (n == 1) {
        return 2; 
    }
    int count = 1; 
    int candidate = 1;
    while (count < n) {
        candidate += 2; 
        if (isPrime(candidate)) {
            count++;
        }
    }
    return candidate;
}
bool NumbersLogic::isMersennePrime(int n) {
    if (!isPrime(n)) return false;
    unsigned long long m = pow(2, n) - 1;
    if (!isPrime(m)) return false;
    return true;
}
int NumbersLogic::countPrimes(int n) {
    if (n < 2) return 0;
    bool* isComposite = new bool[n + 1];
    std::fill_n(isComposite, n + 1, false);
    for (int i = 2; i * i <= n; i++) {
        if (!isComposite[i]) {
            for (int j = i * i; j <= n; j += i) {
                isComposite[j] = true;
            }
        }
    }
    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (!isComposite[i]) {
            count++;
        }
    }
    delete[] isComposite;
    return count;
}
bool NumbersLogic::isTwinPrime(int n) {
    return (isPrime(n) && (isPrime(n - 2) || isPrime(n + 2)));
}
int NumbersLogic::nextPrime(int n) {
    int i = n + 1;
    while (!isPrime(i)) {
        i++;
    }
    return i;
}

int NumbersLogic::prevPrime(int n) {
    int i = n - 1;
    while (i >= 2 && !isPrime(i)) {
        i--;
    }
    return i;
}
int NumbersLogic::largestTwinPrime(int n) {
    int i = n - 1;
    while (i >= 2) {
        if (isTwinPrime(i)) {
            return i;
        }
        i--;
    }
    return -1;
}
int NumbersLogic::sumOfPrimes(int n) {
    int sum = 0;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }
    return sum;
}
int NumbersLogic::productOfPrimes(int n) {
    int product = 1;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            product *= i;
        }
    }
    return product;
}
bool NumbersLogic::isCircular(int n)
  {
    std::string s = std::to_string(n);
    int len = s.length();
    for (int i = 0; i < len; i++) {
        if (!isPrime(stoi(s))) {
            return false;
        }
        char tmp = s[0];
        s.erase(0, 1);
        s += tmp;
    }
    return true;
}
bool NumbersLogic::isCircularPrime(int n) {
    if (!isPrime(n)) {
        return false;
    }
    return isCircular(n);
}
 int NumbersLogic::kthPrimeFactor(int n, int k) {
    int count = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            if (isPrime(i)) {
                count++;
                if (count == k) {
                    return i;
                }
            }
            n /= i;
        }
    }
    if (n > 1 && isPrime(n) && ++count == k) {
        return n;
    }
    return -1;
}
 bool NumbersLogic::isEmirp(int n) {
     int reversed = 0;
     for (int i = n; i > 0; i /= 10) {
         reversed = reversed * 10 + i % 10;
     }
     return n != reversed && isPrime(n) && isPrime(reversed);
 }
 int NumbersLogic::sumOfNPrimes(int n) {
     int sum = 0, count = 0, i = 2;
     while (count < n) {
         if (NumbersLogic::isPrime(i)) {
             sum += i;
             count++;
         }
         i++;
     }
     return sum;
 }

int NumbersLogic::productOfNPrimes(int n) {
     int product = 1, count = 0, i = 2;
     while (count < n) {
         if (NumbersLogic::isPrime(i)) {
             product *= i;
             count++;
         }
         i++;
     }
     return product;
}

std::vector<int> NumbersLogic::primeFactorization(int n)
{
    std::vector <int> factors;
    int k = 2;
    while(n>1)
    {
        while(n%k==0)
        {
            factors.push_back(k);
            n /= k;
        }
        k++;
    }
    return factors;
}

std::vector<int> NumbersLogic::generatePrimes(int n)
{
    bool* tab = new bool[n + 1];
    std::fill(tab, tab + n + 1, true);

    for (int i = 2; i * i <= n; i++)
    {
        if (tab[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                tab[j] = false;
            }
        }
    }
    std::vector<int> primes;
    for (int i = 2; i <= n; i++)
    {
        if (tab[i])
        {
            primes.push_back(i);
        }
    }
    delete[] tab;
    return primes;
}


/*=========================================================================================*/
template<typename T>
std::map<int, int> SearchAlgorithms::find_duplicates(const T& pairs_)
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
template <typename T, typename E>
bool SearchAlgorithms::contains(const T& container_, const E& element_)
{
    for (const auto& item : container_) {
        if (item == element_) {
            return true;
        }
    }
    return false;
}
template std::map<int, int> SearchAlgorithms::find_duplicates(const std::vector<int>& c);
template std::map<int, int> SearchAlgorithms::find_duplicates(const std::list<int>& c);
template std::map<int, int> SearchAlgorithms::find_duplicates(const std::vector<double>& c);
template std::map<int, int> SearchAlgorithms::find_duplicates(const std::list<int>& c);


