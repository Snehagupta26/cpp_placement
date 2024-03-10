#include<iostream>
using namespace std;
void reversearray(int arr[] , int size){

   int temp[size];
   for(int i = 0 ; i < size ; i++){
       temp[i] = arr[(size-1) - i];
    }
   for(int i = 0; i<size ; i++){
    arr[i] = temp[i];
   }
   for(int i = 0; i<size ; i++){
    cout<<arr[i]<<" ";
   }
   cout<<"done";
   cout<<endl;
  // return 0;

}
int main(){
    int arr[5] = {1,2,3,4,5};
    for(int i = 0; i< 5; i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
    reversearray(arr,5);
}