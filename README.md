# MathLib

MathLib is a C++ library that provides various mathematical algorithms and functions. It supports transformations of containers using overloaded operators, quadratic functions, and various mathematical functions.

## Features

MathLib currently provides the following features:

### Container Transformations

MathLib supports transformations of containers through overloaded operators. Some examples of supported operations include:

-   `+`, `-`, `*`, `/`: element-wise addition, subtraction, multiplication, and division between two containers
-   `%`: element-wise modulo between two containers
-   `^`: element-wise power between two containers
-   `==`, `!=`, `<`, `>`, `<=`, `>=`: element-wise comparison between two containers

### Quadratic Functions

MathLib includes functions to compute the roots and vertex of a quadratic function in the form `f(x) = ax^2 + bx + c`.

### Mathematical Functions

MathLib provides various mathematical functions, such as:

-   `abs`: absolute value
-   `sqrt`: square root
-   `exp`: exponential function
-   `log`: natural logarithm
-   `log10`: base-10 logarithm
-   `sin`, `cos`, `tan`, `asin`, `acos`, `atan`: trigonometric functions

## Usage

To start using MathLib, you need to add the MathLib .lib file to your project and include the main header file "MathLib.h" in your C++ project:
```CPP
#include "MathLib/MathLib.h"
```
For example, to use the quadratic functions, include the following header:

```CPP
#include "MathLib/QuadraticFunctions.h"
```
Next example, to use the search algorithms, include the following header:

```CPP
#include "MathLib/Algorithms/SearchAlgorithms.h" 
```
## Example

Here's an example that demonstrates how to use MathLib to transform containers and compute the roots of a quadratic function:

```CPP
#include <iostream>
#include <list>
#include <vector>
#include "../MathLib/MathLib.h"
#include "../MathLib/Equations/QuadraticEquation.h"
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

`5 7 9
Roots: 0.5, -3` 

## License

MathLib is distributed under the MIT License.
