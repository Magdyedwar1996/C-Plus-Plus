#include  <iostream>

using namespace std;
/**
 * @
 * Move all zeros to end of array
 Given an array of random numbers, Push all the zero’s of a given array to the end of the array. For example, if the given arrays is {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0}, it should be changed to {1, 9, 8, 4, 2, 7, 6, 0, 0, 0, 0}. The order of all other elements should be same.
 
Input :  arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
Output : arr[] = {1, 2, 4, 3, 5, 0, 0};
 
Input : arr[]  = {1, 2, 0, 0, 0, 3, 6};
Output : arr[] = {1, 2, 3, 6, 0, 0, 0};
 * 
 */


void MoveAllZeros(int arr[],int size){
// Input : arr[]  = {1, 2, 0, 0, 0, 3, 6};

for( int i = 0 ; i < size ; i++){
    int j = 0 , m = 1 ;

    if(arr[j] == 0 && j != size){
        j++; 
        continue;
    }
    else if (arr[j] != 0 && arr[i]==0  ){
        arr[i] = arr[j];


    }

}




}

