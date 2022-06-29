#include <iostream>
#include <cmath>

using namespace std;

int main() {
    /*
        Math
        C++ has many functions that allows you to perform mathematical tasks on numbers.
        - the max() function: can be used to find the highest value of x and y.
        - the min() function: can be used to find the lowest value of x and y.
        - other functions , such as sqrt (square root), round (rounds a number) and log 
        (natural logarithm), can be found in the <cmath> header file.
        - other math functions: A list of other popular Math functions (from the <cmath> library) 
        can be found in the table below:
        function        description
        abs(x)	        Returns the absolute value of x
        acos(x)	        Returns the arccosine of x
        asin(x)	        Returns the arcsine of x
        atan(x)	        Returns the arctangent of x
        cbrt(x)	        Returns the cube root of x
        ceil(x)	        Returns the value of x rounded up to its nearest integer
        cos(x)	        Returns the cosine of x
        cosh(x)	        Returns the hyperbolic cosine of x
        exp(x)	        Returns the value of Ex
        expm1(x)	    Returns ex -1
        fabs(x)	        Returns the absolute value of a floating x
        fdim(x, y)	    Returns the positive difference between x and y
        floor(x)	    Returns the value of x rounded down to its nearest integer
        hypot(x, y)	    Returns sqrt(x2 +y2) without intermediate overflow or underflow
        fma(x, y, z)	Returns x*y+z without losing precision
        fmax(x, y)	    Returns the highest value of a floating x and y
        fmin(x, y)	    Returns the lowest value of a floating x and y
        fmod(x, y)	    Returns the floating point remainder of x/y
        pow(x, y)	    Returns the value of x to the power of y
        sin(x)	        Returns the sine of x (x is in radians)
        sinh(x)	        Returns the hyperbolic sine of a double value
        tan(x)	        Returns the tangent of an angle
        tanh(x)	        Returns the hyperbolic tangent of a double value
    */
    cout << "max function(3, 5): " << max(3, 5) << endl;
    cout << "min function(3, 5): " << min(3, 5) << endl;
    cout << "raiz cuadrada(16): " << sqrt(16) << endl;
    cout << "redondeo(2.6): " << round(2.6) << endl;
    cout << "logaritmo natural(100): " << log(100) << endl;
    return 0;
}