#include<iostream>
using namespace std;

class Array
{
private:
    int * arr;
    int size;
public:
   Array (int *a , int s): arr(a) , size(s){}
   void display(){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
    
   }
};
int main(){
    int size;
    cout << " Enter the size : " ;
    cin >> size;
    int arr[size];
    cout << " Enter the array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    Array array(arr , size);
    array.display();
    return 0;
}
 