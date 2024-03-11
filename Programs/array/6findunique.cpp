// You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].

// Now, in the given array/list, 'M' numbers are present twice and one number is present only once.

// You need to find and return that number which is unique in the array/list.

//  Note:
// Unique element is always present in the array/list according to the given condition.
// Sample Input 1:
// 1
// 7
// 2 3 1 6 3 6 2
// Sample Output 1:
// 1
// Explanation: The array is [2, 3, 1, 6, 3, 6, 2]. Here, the numbers 2, 3, and 6 are present twice, and the number 1 is present only once. So, the unique number in this array is 1.
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
        if(count == 0){
        cout<<arr[i]<<endl;
        break;
   }
}
}
int main(){
    int arr[4] = {1,1,5,1};
    findunique(arr,4);
    return 0;
}

    // int i = 0;
    // int j = 1;
    // while(i < size){
    //     while( j < size){
    //         if(i==j){
    //             continue;
    //         }
    //         if(arr[i] == arr[j]){
    //             count++;
    //         }
    //         j++;

    //     }
    //     i++;
    // }

    // if(count == 1){
    //     cout<<"element is unique "<<arr[i];
    // }
////////////////////////