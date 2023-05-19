/*C++ is a high-level, general-purpose programming language that is widely used for developing applications ranging from operating systems to video games. It is an extension of the C language and adds object-oriented programming features, such as classes and inheritance.

Here's an introduction to programming in C++, along with some example code:

### Basic Syntax

Like C, C++ is a compiled language, which means that you need to write your code in a text editor or an IDE (Integrated Development Environment) and then compile it to generate an executable file.

The basic syntax of C++ is similar to C, with some differences. Here's an example of a simple "Hello, World!" program in C++: */

#include <iostream>

int main() {
    std::cout << "Hello, World!";
    return 0;
}
/*
In this code, we first include the `<iostream>` header file, which provides input and output stream classes in C++. We then define the `main()` function, which is the entry point of the program. Inside the `main()` function, we use the `std::cout` object to output the message "Hello, World!" to the console.

### Variables and Data Types

C++ provides a variety of data types, such as integers, floating-point numbers, characters, and boolean values. You can use these data types to define variables, which are used to store values in memory.

Here's an example of how to define and use variables in C++:

```c++ */
#include <iostream>
int main() {
    int age = 25;
    double salary = 5000.50;
    char grade = 'A';
    bool isEmployed = true;
    
    std::cout << "Age: " << age << std::endl;
    std::cout << "Salary: " << salary << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Is employed? " << isEmployed << std::endl;

    return 0;
}

/*
In this code, we define four variables of different data types: `age` (an integer), `salary` (a double), `grade` (a character), and `isEmployed` (a boolean). We then use the `std::cout` object to output the values of these variables to the console.

### Control Structures

C++ provides several control structures, such as if-else statements, for loops, while loops, and switch statements. These control structures are used to control the flow of execution of the program. */

Here's an example of how to use an if-else statement in C++:

```c++
#include <iostream>

int main() {
    int age = 25;
    
    if (age >= 18) {
        std::cout << "You are eligible to vote." << std::endl;
    }
    else {
        std::cout << "You are not eligible to vote." << std::endl;
    }

    return 0;
}

/*
In this code, we use an if-else statement to check whether a person is eligible to vote. If the person's age is greater than or equal to 18, we output the message "You are eligible to vote." Otherwise, we output the message "You are not eligible to vote."

### Functions

Functions are used to perform specific tasks in a program. In C++, you can define your own functions, or use built-in functions provided by the language. 

Here's an example of how to define and use a function in C++:
*/


#include <iostream>

int square(int num) {
    return num * num;
}

int main() {
    int num = 5;
    int result = square(num);
    std::cout << "The square of " << num << " is " << result << std::endl;
    return 0;
}
/*
In this code, we define a function `square()` that takes an integer parameter `num` and returns the square of `num`. We then use this function inside the `main()` function to calculate the square of the integer `num` and store the result in the variable `result`. Finally, we output the result to the console.

### Classes and Objects

C++ is an object-oriented programming language, which means that it supports the concept of classes and objects. A class is a blueprint for creating objects, and an object is an instance of a class.

Here's an example of how to define a class and create objects from it in C++:

*/
#include <iostream>

class Rectangle {
    private:
        int width;
        int height;
    
    public:
        Rectangle(int w, int h) {
            width = w;
            height = h;
        }
        
        int getArea() {
            return width * height;
        }
};

int main() {
    Rectangle rect1(5, 10);
    Rectangle rect2(3, 8);
    
    std::cout << "Area of rect1: " << rect1.getArea() << std::endl;
    std::cout << "Area of rect2: " << rect2.getArea() << std::endl;

    return 0;
}
/*In this code, we define a class `Rectangle` that has two private member variables `width` and `height`, and two public member functions `Rectangle()` (the constructor) and `getArea()` (a method that calculates the area of the rectangle). We then create two objects `rect1` and `rect2` of type `Rectangle`, and call the `getArea()` method on them to calculate their areas.

### Conclusion

This was just a brief introduction to programming in C++. There are many more concepts and features in the language, such as pointers, templates, and exceptions, that you can explore. C++ is a powerful and flexible language that is widely used in many areas of software development. */