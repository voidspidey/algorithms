/* *optimized bubble sort in cpp 
   * in the optimized bubble sort we used the swapped variable to check whether the variable swapped or not
   */ 
#include<iostream>
using namespace std;


// function for swapping
void swapping( int *x, int *y){
    int temp = *x;
       *x = *y;
       *y = temp;
}

//function for sorting the elments 
void bsort( int arr[] , int size) {
    //swap variable to check whther the elment is swapped or not
    int swap = 0;
    for ( int i = 0; i < size -1; i++ ) {
        for ( int j = 0; j < size -1 -i; j++){
            if(arr[j] > arr[i])
           swapping(&arr[i] , &arr[j]);
           // variable will be set to 1 if the swapping occur
           swap =1;
        }
        // if the vairable is zero we wil get out of the loop
        if (swap == 0)
            break;
    }
}

// function to print the array
void print( int arr[], int size) {
    for ( int i = 0; i < size ; i++)
    cout<<arr[i] <<' ';
    cout<<endl;
}

int main () {
    int arr[] = { 7,8,6,5,4,9 };
    int size = sizeof(arr) / sizeof(arr[0]);
    bsort(arr, size);
    print(arr,size);
    return 0;
}