 #include<iostream>
 using namespace std;
 
 int add(int index , int val , int lenght , int a[]){
     for(int i = lenght ; i > index ; i--){
         a[i] = a[i-1];
     }
     a[index] = val;
     lenght++;
     cout << " the new array is : " <<endl;
     for(int i=0 ; i < lenght ; i++){
         cout << " " << a[i] ;
     }
 }
 int main(){
     int arr[] = {2 , 3 , 6 , 7 , 5 , 4 , 1 };
     int lenght = sizeof(arr)/sizeof(int);
     
     add(3,11,lenght,arr);
     return 0;
 }