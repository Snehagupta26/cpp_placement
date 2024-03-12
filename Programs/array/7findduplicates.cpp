#include<iostream>
using namespace std;
void findunique(int arr[],int size){
    //int count = 0;
    //int arr[0];
    int count;
    int i;
    for( i = 0 ; i < size ; i++){
        count = 0;
       
            for(int j = 0 ; j < size ; j++){
                
                if(arr[i] == arr[j] && i != j){
                    count++;
                    break;
                }
            }
        if(count > 0){
        cout<<arr[i]<<" ";
        //cout<<arr[i]<<endl;
       
   }
}
}
int main(){
    int arr[5] = {1,1,5,2,2};
    findunique(arr,5);
    return 0;
}

