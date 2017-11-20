/* Basics:
 * How to write output to the monitor.
 * How to read input from user.
 * How to use variables.
 * How to use comments. */

#include <iostream>  // include library

int main(){
    
    std::cout << "Hello user :)" << std::endl;   // 
    int x = 6;
    std::cout << "Variable x = " << x << std::endl;
    int y;
    std::cout << "Enter a number: ";
    std::cin >> y;
    std::cout << "Your variable y = " << y << std::endl;
}

// Rule: Never nest comments inside of other comments.
// Rule: Make sure all of your variables have known values (either through initialization or assignment).
// Rule: Take care to avoid situations that result in undefined behavior.
