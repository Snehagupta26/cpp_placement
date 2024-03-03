#include<iostream>
using namespace std;
int getMax(int arr[], int n){
  int max = arr[0];
    for(int i = 0; i < n ; i++){
        if(max <= arr[i]){
            max = arr[i];
        }
        }
        return max;
}
int getMin(int arr[],int n){
    int min = arr[0];
    for(int i = 0; i < n ; i++){
        if(min >= arr[i]){
            min = arr[i];
        }
       
    }
    return min;
}
int main(){
    int arr[4] = {300,41,6,300};
    getMax(arr,4);
    getMin(arr,4);
    cout<<max<<min<<endl;
        
    }
    