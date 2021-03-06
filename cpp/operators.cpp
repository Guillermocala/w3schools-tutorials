#include <iostream>

using namespace std;

int main() {
    /*
        Operators

        - Arithmetic Operators: are used to perform common mathematical operations.
            +	Addition: Adds together two values	                        x + y	
            -	Subtraction: Subtracts one value from another	            x - y	
            *	Multiplication: Multiplies two values	                    x * y	
            /	Division: Divides one value by another	                    x / y	
            %	Modulus: Returns the division remainder	                    x % y	
            ++	Increment: Increases the value of a variable by 1	        ++x	
            --	Decrement: Decreases the value of a variable by 1	        --x
        - Assignment Operators: Assignment operators are used to assign values to variables.
            operator    example         same as
            =           x = 5           x = 5	
            +=          x += 3          x = x + 3	
            -=          x -= 3          x = x - 3	
            *=          x *= 3          x = x * 3	
            /=          x /= 3          x = x / 3	
            %=          x %= 3          x = x % 3	
            &=          x &= 3          x = x & 3	
            |=          x |= 3          x = x | 3	
            ^=          x ^= 3          x = x ^ 3	
            >>=         x >>= 3         x = x >> 3	
            <<=         x <<= 3         x = x << 3
        - Comparison Operators: are used to compare two values.
        Note: The return value of a comparison is either true (1) or false (0).
            operator    name                            example
            ==	        Equal to                        x == y	
            !=	        Not equal                       x != y	
            >	        Greater than                    x > y	
            <	        Less than                       x < y	
            >=	        Greater than or equal to        x >= y	
            <=	        Less than or equal to           x <= y
        - Logical Operators: are used to determine the logic between variables or values.
        operator    name    description                                                 example
        && 	        and	    Returns true if both statements are true                    x < 5 &&  x < 10	
        || 	        or	    Returns true if one of the statements is true               x < 5 || x < 4	
        !	        not	    Reverse the result, returns false if the result is true     !(x < 5 && x < 10)
    */
    cout << "Comparison operator..." << endl;
    int x = 5;
    int y = 3;
    cout << (x > y); // returns 1 (true) because 5 is greater than 3
    return 0;
}  
