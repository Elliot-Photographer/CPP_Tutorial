// When we want to import libraries, we use "#include <library_name>"
#include <iostream>
#include <string>

// We can use namespaces to avoid naming conflicts
// Namespaces help organize code and prevent similar function/class names from clashing
// Sometimes we use "using namespace" to avoid repeating the namespace prefix
// Note: It's discouraged to use "using namespace std" in large projects
// using namespace std;

// The main function - program execution starts here
int main() {
    // Output "Hello World" to the console
    std::cout << "Hello World!" << std::endl;
    // Explanation: 
    // std::cout = standard output stream
    // << = insertion operator (sends data to output)
    // std::endl = end line (similar to '\n' but also flushes the buffer)

    // Both '\n' and std::endl are used for new lines, but '\n' is more commonly used
    // The newline character (\n) is an escape sequence that moves the cursor to the next line
    //
    // Common escape sequences:
    // \t    Creates a horizontal tab
    // \\    Inserts a backslash character
    // \"    Inserts a double quote character
    // \'    Inserts a single quote character
    // Source: https://www.w3schools.com/cpp/cpp_new_lines.asp

    /* 
     * Multi-line comments are written like this.
     * They are useful for longer explanations.
     */

    // Variable declarations and data types
    int num = 42;                    // Integer (whole number)
    double price = 4.98;             // Double-precision floating point
    char grade = 'D';                // Single character - FIXED: use single quotes
    std::string letter = "Hello to an Old Friend";  // String of characters
    bool am_i_human = true;          // Boolean (true/false)

    // Display variables with different formatting
    std::cout << num << "\t";                            // Tab after number
    std::cout << "The price is $" << price << "\n";      // New line after price
    std::cout << "Your grade is: " << grade << "\\";     // Backslash after grade
    std::cout << letter << "\"";                         // Quote after string
    std::cout << am_i_human << std::endl;                // Boolean value
    
    // Multiple declarations on one line (less readable)
    int x = 2; 
    int y = 23; 
    std::cout << "Sum: " << (x + y) << std::endl;

    // Always use meaningful variable names for better code readability
    // Use 'const' to create read-only variables
    const double PI = 3.14159;

    // User input example
    int userInput;
    std::cout << "Type a number: ";      // Prompt user
    std::cin >> userInput;               // Get user input - FIXED: use userInput instead of x
    std::cout << "Your number is: " << userInput << std::endl;

    // Explanation:
    // std::cout (see-out) - used for output with insertion operator (<<)
    // std::cin (see-in) - used for input with extraction operator (>>)

    // Arithmetic Operators
    int a = 34;
    int b = 23;
    
    std::cout << "Arithmetic Operations:" << std::endl;
    std::cout << a << " + " << b << " = " << (a + b) << std::endl;  // Addition
    std::cout << a << " - " << b << " = " << (a - b) << std::endl;  // Subtraction
    std::cout << a << " * " << b << " = " << (a * b) << std::endl;  // Multiplication
    std::cout << a << " / " << b << " = " << (a / b) << std::endl;  // Integer division
    std::cout << a << " % " << b << " = " << (a % b) << std::endl;  // Modulus (remainder)

    // Note: Integer division truncates decimal part
    // For precise division, use floating-point numbers

    // Increment/Decrement Operators
    int counter = 4;
    std::cout << "Original value: " << counter << std::endl;
    ++counter;  // Pre-increment
    std::cout << "After ++counter: " << counter << std::endl;
    --counter;  // Pre-decrement
    std::cout << "After --counter: " << counter << std::endl;
    
    // Compound Assignment Operators
    counter += 5;  // Equivalent to: counter = counter + 5
    std::cout << "After counter += 5: " << counter << std::endl;

    // Bitwise Operators - work on binary representations
    std::cout << "\nBitwise Operations:" << std::endl;
    
    // FIXED: Removed assignment from bitwise examples
    std::cout << "7 & 4 = " << (7 & 4) << std::endl;   // AND: 111 & 100 = 100 (4)
    std::cout << "7 | 4 = " << (7 | 4) << std::endl;   // OR:  111 | 100 = 111 (7)
    std::cout << "7 ^ 4 = " << (7 ^ 4) << std::endl;   // XOR: 111 ^ 100 = 011 (3)
    std::cout << "~4 = " << (~4) << std::endl;         // NOT: ~00000100 = 11111011 (-5 in two's complement)
    std::cout << "5 << 2 = " << (5 << 2) << std::endl; // Left shift: 00000101 << 2 = 00010100 (20)
    std::cout << "16 >> 2 = " << (16 >> 2) << std::endl; // Right shift: 00010000 >> 2 = 00000100 (4)

    /* Bitwise Explanation:
     * AND (&): 1 if both bits are 1
     * OR  (|): 1 if at least one bit is 1
     * XOR (^): 1 if bits are different
     * NOT (~): Flips all bits
     * Left Shift (<<): Shifts bits left, fills with 0 (multiplies by 2^n)
     * Right Shift (>>): Shifts bits right, fills with 0 (divides by 2^n)
     */

    // Comparison Operators (return bool: true=1, false=0)
    std::cout << "\nComparison Operations:" << std::endl;
    std::cout << "7 == 4: " << (7 == 4) << std::endl;  // Equal to
    std::cout << "7 != 4: " << (7 != 4) << std::endl;  // Not equal to
    std::cout << "7 > 4: " << (7 > 4) << std::endl;    // Greater than
    std::cout << "7 < 4: " << (7 < 4) << std::endl;    // Less than
    std::cout << "7 >= 4: " << (7 >= 4) << std::endl;  // Greater than or equal to
    std::cout << "7 <= 4: " << (7 <= 4) << std::endl;  // Less than or equal to

    // Logical Operators (work with boolean values)
    std::cout << "\nLogical Operations:" << std::endl;
    std::cout << "(7 > 4) && (5 < 8): " << ((7 > 4) && (5 < 8)) << std::endl;  // AND
    std::cout << "(7 > 4) || (5 > 8): " << ((7 > 4) || (5 > 8)) << std::endl;  // OR
    std::cout << "!(7 > 4): " << (!(7 > 4)) << std::endl;                      // NOT

    /* Logical vs Bitwise:
     * Logical operators (&&, ||, !) work with boolean values
     * Bitwise operators (&, |, ~) work with individual bits
     * Example: 
     *   Logical: (true && false) = false
     *   Bitwise: (5 & 3) = 1 (binary: 101 & 011 = 001)
     */

    // Operator Precedence: Same as mathematics
    // Use parentheses to ensure correct order of operations
    int result = 5 + 3 * 2;    // Multiplication first: 3*2=6, then 5+6=11
    std::cout << "\n5 + 3 * 2 = " << result << std::endl;
    
    result = (5 + 3) * 2;      // Parentheses first: 5+3=8, then 8*2=16
    std::cout << "(5 + 3) * 2 = " << result << std::endl;

    return 0;  // Indicates successful program termination
}
