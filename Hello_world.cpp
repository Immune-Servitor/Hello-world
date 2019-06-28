#include <iostream>
// Always start with header. Why?
// The #include is a directive, its a standard C++ library.
// How does this work?
// The compiler produces the source code to object code (output). The header includes preset functions and replaces them in the code
// Once it pass down to the main() it will substitute the corresponding declarations.
// iostream provides the input and outputs.

using namespace std;
// std is short for standard, it is a namespace which is basically a specification to which an item belongs in.
// we are pulling functions from the standard library, for example cout and endl are part of the standard library
// Instead of using std::cout or std::endl for every line, the preprocessor will notice that cout and endl are from the standard library.
int main() {
    cout << "Hello world!" << endl;
    // cout is what the output product will be, in this case it is a string.
    // A string are printable characters, anything in between quotation marks.
    // << is the output operator after that it ends the line with endl and semicolon ;
    // The endl ends the statement and continues on the next line.
    // All lines must end with a semicolon or else the program wont compile and it will give you an error.
    // There is a difference between single and double quotation marks.
    // "" are for strings, and '' are for single characters.
    /* Moving on to basic mathematical expressions */

    // We can do simple algebraic expressions
    cout << endl;
    // The line above is for the program to skip a line

    cout << "Here are some simple algebraic arithmetic:" << endl;
    cout << "7+3 = " << 7+3 << endl;
    cout << "7-3 = " << 7-3 << endl;
    cout << "7*3 = " << 7*3 << endl;
    cout << "7/3 = " << 7/3 << endl;
    // Hold up! Isn't 7/3 = 2.333?
    // Yes, but in programing it is a bit different.
    // Since, 7 and 3 are both integers, whole numbers, the program produces a whole number.
    // How do we specify it to produce a non-whole number?
    // We use floats, which includes the fractional part.
    // However, there is another function called double.
    // Double has 2x the precision than the float. Double has 15 decimal digits of precision, while float has 7.
    cout << "7.0/3.0 = " << 7.0/3.0 << endl;
    cout << "7%3 = " << 7%3 << endl;
    // What the heck is this?
    // The % is the Modulus Operator. It gives the remainder.

    // Some more complicated expressions
    cout << "7+3*2 = " << 7+3*5 << endl;
    cout << "(7+3)*2 = " << (7+3)*5 << endl;

    //Variables
    int x = 50, y = 2 , z = 0;
    cout << "If x = 50 and y = 2 then: x+y = " << x+y << endl;

    /***/

    int a = 2, b;
    b = a; // we can also use b{} or b()
    a = 5;

    cout << a+b << endl;
    // First we declared that a and b are integers.
    // However, b is = a, but then we declared a new value for a. So which value does b take?
    // Think of it as if there is no turning back. Once we declare an original value to the variable the program stores it.
    // Once it hits b = a, b will store the original number of a.
    // Afterwards, we change the value of a, so a does not = 2 anymore.
    // if we put b = a again after a = 5 then b = 5 and a = 5.

    // An identifier are a series of letters, or underscores that are specific compiler keywords.

    //Strings and Characters

    cout << endl;
    string hello("Hello I am a string!");
    cout << hello << endl;

    cout << endl;
    string sentance;
    sentance = "This is my sentence, which is a string";
    cout << sentance << endl;

    //printing out ASCII
    char character = 41;
    cout << "The ASCII value for my character is: " << character << endl;

    //Have a user input
    cout << endl;
    cout << "Please enter your first name" << endl;
    string name;
    cin >> name;
    cout << "Hello, " << name << endl;
    cout << endl;

    //Constants

    //Finding the area of a circle
    //Area = 2 * PI * Radius

    double radius;
    const double pi = 3.14159;
    double circle;

    cout << "Please enter you radius in meters" <<endl;
    cin >> radius;

    circle = 2*pi*radius;
    cout << "The area of your circle in meters is: " << circle << endl;


    //Increment and decrement

    cout << endl;
    a = 24;
    a += 4;
    //You can use the same thing for other arithmetic (-=, *=, /=, %=)

    cout << "If you have 24 apples and your friend gives you 4 now you have " << a << " apples!" << endl;

}

