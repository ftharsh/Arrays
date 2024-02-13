#include<iostream>
using namespace std;

void display(int *arr , int s){
    
  for (int i = 0; i < s; i++)
  {
    cout << arr[i] << ' ';
  }
  cout << endl;
}
int main(){
    int arr[] = {2,4,5,6,7};
int size = sizeof(arr)/sizeof(int);
    display(arr,size);
    return 0;
    
}