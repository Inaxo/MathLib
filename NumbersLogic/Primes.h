#include "../MathLib.h"

namespace MathStuff {
    class NumbersLogic {
    public:
            static bool isPrime(int n);
            static bool isOdd(int n);
            static bool isEven(int n);
            static bool isPerfectSquare(int n);
            static int nthPrime(int n);
            static int countPrimes(int n);
            static bool isMersennePrime(int n);
            static bool isTwinPrime(int n);
            static int nextPrime(int n);
            static int prevPrime(int n);
            static int largestTwinPrime(int n);
            static int sumOfPrimes(int n);
            static int productOfPrimes(int n);
            static bool isCircular(int n);
            static bool isCircularPrime(int n);
            static int kthPrimeFactor(int n, int k);
            static bool isEmirp(int n);
            static int sumOfNPrimes(int n);
            static int productOfNPrimes(int n);
            static std::vector<int> primeFactorization(int n);
        
    };
}
