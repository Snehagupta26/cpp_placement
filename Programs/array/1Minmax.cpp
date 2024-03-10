#include<iostream>
#include<limits.h>
using namespace std;
int findmax(int arr[],int size){
    int max = INT_MIN;//arr[0]
    for(int i = 0; i < size ; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}
int findmin(int arr[],int size){
    int min = INT_MAX;//arr[0]
    for(int i = 0; i < size ; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    return min;
}
int main(){
    int arr[5] = {15,2,-38,4,5};
    cout<<findmax(arr,5)<<" "<<findmin(arr,5);
}