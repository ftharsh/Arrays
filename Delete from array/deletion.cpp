#include<iostream>
using namespace std;

void deletion(int *arr,int size , int index){ 
  for (int i = index;i<size-1; ++i)
  {
    arr[i] = arr[i+1];
  }
  size--;
  cout << "The final array after deletion" << " " ;
  for (int i = 0; i < size; i++)
  {
        cout << arr[i] <<" ";

  }
  
}
 int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(int);
    deletion(arr,size,5);
    return 0;
 }