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
