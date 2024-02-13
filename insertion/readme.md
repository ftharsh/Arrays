# Array Display Program

This program demonstrates two methods to display the elements of an array in C++.

## Method 1: Using a Class

In this method, a class named `Array` is defined, which encapsulates an integer array and provides a member function `display` to print its elements.

### Class Definition

```cpp
class Array
{
private:
    int * arr;
    int size;
public:
    Array(int *a, int s): arr(a), size(s) {}
    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

###Usage
User inputs the size of the array.
User inputs the elements of the array.
An instance of the Array class is created with the input array and its size.
The display method of the Array class is called to print the array elements.
# Method 2: Using a Function

In this method, a standalone function named `display` is defined, which takes an integer array and its size as arguments and prints its elements.

## Function Definition

```cpp
void display(int *arr, int s) {
    for (int i = 0; i < s; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}
###Usage
A predefined array is provided in the code.
The size of the array is calculated using the sizeof operator.
The display function is called with the array and its size to print the array elements.

```bash
g++ main.cpp -o array_display
./array_display

