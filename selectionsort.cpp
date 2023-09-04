/* * Selection sort algorithm to sort the elments of the array
   *  complexity O(n^2)
 */
 
 #include<iostream>
 using namespace std;
 
 //function for swapping the elments of the array
 void swapping( int *x, int *y) {
     int temp = *x;
           *x = *y;
           *y = temp;
 }
 
 //function to print the array
 void print(int arr[], int size){
     for(int i = 0; i < size; i++)
        cout<<arr[i]<< ' ' ;
        cout<<endl;
 }
 
 //function for sorting the array
 void ssort(int arr[], int size) {
     for ( int i = 0; i < size ; i++){
           int min = i;
           for ( int j = i + 1; j < size; j++){
               if(arr[j] < arr[min])
                 min = j;
           }
           swapping(&arr[min], &arr[i]);
     }
 }
 
 //main function
 int main() {
     int arr[] = { 20 , 12, 5, 10, 2};
     int size = sizeof(arr)/sizeof(arr[0]);
     ssort(arr, size);
     print(arr,size);
     
     return 0;
 }
