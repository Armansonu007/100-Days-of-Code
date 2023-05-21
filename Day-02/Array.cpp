Beginner's Guide to C++ Arrays:

Arrays are a fundamental data structure in C++ that allow you to store multiple elements of the same data type in a contiguous block of memory. Here's a basic introduction to C++ arrays:

1. Declaration and Initialization:
   - Declare an array by specifying the data type followed by the array name and its size in square brackets. For example: `int myArray[5];`
   - Initialize the array elements by assigning values to each index. For example: `myArray[0] = 10; myArray[1] = 20;`

2. Accessing Array Elements:
   - Array elements are accessed using their index, starting from 0. For example: `int x = myArray[2];` will assign the value at index 2 to the variable `x`.

3. Looping Through an Array:
   - Use a loop (such as a `for` loop) to iterate through the array elements and perform operations on them. For example:
   
   for (int i = 0; i < 5; i++) {
       cout << myArray[i] << " ";
   }
   

4. Array Questions with Code and Answers:

Question 1: Find the sum of all elements in an array.
```cpp
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
```

Question 2: Find the maximum element in an array.
```cpp
int findMax(int arr[], int size) {
    int maxElement = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}
```

Question 3: Count the number of even elements in an array.
```cpp
int countEven(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}
```

I hope this beginner's guide provides you with a solid understanding of C++ arrays and helps you get started with basic array operations and problem-solving. Happy coding!
