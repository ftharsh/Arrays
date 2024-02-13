#include<iostream>
using namespace std;

void display(int *arr){
   cout << " The array is : " << " " << endl;
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        cout << arr[i] << " ";
    }   
}
void insert(int a[], int size , int n , int index){
    if (index < 0 || index > size)
    {
        cout << "invalid index" << endl;
        return;
    }
    
    size++;
  for (int i = size-1; i >= index; i--)
  {
     a[i] = a[i-1];

  }
    a[index] = n;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    
}
int main()
{
    int arr[] = {2 ,3,4,5,6,7,10};
    int size = sizeof(arr)/sizeof(int);
    cout << "Enter your desired number and index : " << " " ;
    int num , index ;
    cin >> num >> index ;
    insert(arr,size , num , index);
   
    return 0;
}