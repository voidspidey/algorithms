/* * Insertion sort algorithm to sort the elments of the array
   *  complexity O(n^2)
 */
 
 #include<iostream>
 using namespace std;
 
 //function to print the array
 void print(int arr[], int size){
     for(int i = 0; i < size; i++)
        cout<<arr[i]<< ' ' ;
        cout<<endl;
 }
 
 //function for sorting the array
 void isort(int arr[], int size) {
     for ( int i = 1; i < size ; i++){
         // we just created the key element to store the 1 index value assuming first is already sorted
           int key = arr[i];
           // variable j will point point to the previous value
           int j = i -1;
          while(j >= 0 && key < arr[j]){
              // if the key value is less then arr[j] value
              //we will just copy the value of arr[j] in the arr[j+1] and decrement j
              arr[j + 1] = arr[j];
              j--;
          }
          // and then will copy the key value to previous element
          arr[ j+1] = key;
     }
 }
 
 //main function
 int main() {
     int arr[] = { 20 , 12, 5, 10, 2,1};
     int size = sizeof(arr)/sizeof(arr[0]);
     isort(arr, size);
     print(arr,size);
     
     return 0;
 }
