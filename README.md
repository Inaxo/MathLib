# MathLib

MathLib is a versatile C++ library that provides a wide range of mathematical algorithms and functions, including but not limited to transformations of containers using overloaded operators, quadratic functions, and various mathematical functions.

## Features

MathLib provides a comprehensive list of features that includes:

### Container Transformations

MathLib supports transformations of containers using overloaded operators, allowing element-wise operations such as addition, subtraction, multiplication, division, and modulo between two containers, as well as element-wise power and comparison.

### Quadratic Functions

MathLib offers a wide range of functions, such as determining real roots, finding the number of roots, getting the axis of symmetry, and more.

### Mathematical Functions

MathLib provides various mathematical functions, such as absolute value, square root, exponential function, natural logarithm, base-10 logarithm, trigonometric functions, and more.

### Search and Dynamic Algorithms

MathLib offers a range of search algorithms, including binary search and linear search, and dynamic algorithms such as the dynamic programming algorithm for solving optimization problems.

### Prime Numbers and Number Theory

MathLib includes various functions related to prime numbers and number theory, including checking whether a number is prime, generating primes, computing prime factorization, and more.

## Usage

To start using MathLib, you need to add the MathLib .lib file to your project and include the main header file "MathLib.h" in your C++ project:

```CPP
#include "MathLib/MathLib.h" 
```

## Example

Here's an example that demonstrates how to use MathLib to transform containers and compute the roots of a quadratic function:


```CPP
#include <iostream>
#include <vector>
#include "MathLib.h"

using namespace MathStuff;
using namespace std;

int main() {
    // Transform two vectors using the element-wise addition operator
    std::vector<int> v1 = { 1,2,3 };
    std::vector<int> v2 = { 4,5,6 };
    std::vector<int> v3 = v1 + v2;

    // Compute the roots of a quadratic function
    double a = 2.0;
    double b = 5.0;
    double c = -3.0;
    auto roots = QuadraticEquation::roots(a, b, c);

    // Print the results
    for (const auto& x : v3) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    std::cout << "Roots: " << roots.first << ", " << roots.second << std::endl;

    return 0;
}
```

This program should output:

`5 7 9 Roots: 0.5, -3`

## License

MathLib is distributed under the MIT License.
