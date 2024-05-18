#include<iostream>
using namespace std;

struct Array{
    int lenght; //for the number of elements
    int size; //for trhe capacity of the array
    int *a;
};

void display(struct Array arr){
    cout << "The elements of the Array is : " ;
    for (int i = 0; i < arr.lenght; i++)
    {
        cout << arr.a[i];
    }
    cout << endl;
    
}
int main(){
    struct Array arr;
    cout << "Enter the size of teh array : ";
    cin >> arr.size;
    arr.lenght = 0;

    arr.a = new int[arr.size];
    cout << "Enter the number of elements of the Array : ";
    cin >> arr.lenght;

    cout << "Enter the elements of the array : ";
    for (int i = 0; i < arr.lenght; i++)
    {
        cin >> arr.a[i];
    }

    display(arr);
    return 0;
    
}