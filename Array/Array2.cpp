#include<iostream>
using namespace std;
void printarray(int arr[], int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr1[5]={1,2,3,4,5};
    printarray(arr1,5);

    int arr1size = sizeof(arr1)/sizeof(int);
    cout<<arr1size<<endl;

    char ch[5] = {'a' , 'b' , 'c' , 'd' , 'e'};
    cout<<ch[1];
}