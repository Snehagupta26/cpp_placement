#include<iostream>
using namespace std;
// void reversearray(int arr[] , int size){

//    int temp[size];
//    for(int i = 0 ; i < size ; i++){
//        temp[i] = arr[(size-1) - i];
//     }
//    for(int i = 0; i<size ; i++){
//     arr[i] = temp[i];
//    }
//    for(int i = 0; i<size ; i++){
//     cout<<arr[i]<<" ";
//    }
//    cout<<"done";
//    cout<<endl;
//   // return 0;

// }
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     for(int i = 0; i< 5; i++){
//     cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     reversearray(arr,5);
// }
void reversearray(int arr[] , int size){
     int start = 0;
     int end = size - 1;
     while(start <= end){
        swap(arr[start],arr[end]);
        start++;
        end--;
     }

}
void printarray(int arr[],int size){
    for(int i = 0 ; i < 5 ; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    printarray(arr,5);
    cout<<endl;
    reversearray(arr,5);
    cout<<"after reversing : "<<endl;
    printarray(arr,5);
}