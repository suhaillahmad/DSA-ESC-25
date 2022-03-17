/* Author : Suhail Ahmad
   Date   : 17 / 03 /2022 */


/* RECURSION: 03 
   Recursion with binary search*/


// Q. 1) An array having element {2,4,6,9,11,13} find if the array is 
//       sorted or not?


// code:

#include<bits/stdc++.h>
using namespace std;

bool isSorted(int *arr,int size){
    
    //base case
    if(size == 0 || size == 1 ) {
      return true;
    }
    
    if(arr[0]>arr[1]){
     return false;
    }
    else{
    bool remainingPart = isSorted(arr+1,size-1);
    return remainingPart;
    }
}


int main(){
    int arr[6] = {2,4,6,9,11,13};

    if(isSorted(arr,6))
    cout << "The array is sorted" ;
    else 
    cout << "The array is not sorted" ;
}


// // Homework Question 2 ) Find the sum of array by recursion.

  #include<bits/stdc++.h>
  using namespace std;

  int getSum(int *arr,int size){
       
       //base case
       if(size == 0)
       return 0;
       if(size == 1){
           return arr[0];
       }

       int remainingPart = getSum(arr+1,size-1);
       int sum = arr[0] + remainingPart;
       return sum;
  }
  
  int main(){
      int arr[5] = {2,4,7,8,8};

      int sum = getSum(arr,5);
      cout << "Sum is " << sum << endl;
  }


//  // Q 3) Linear Search using recursion.

 #include<bits/stdc++.h>
 using namespace std;
 
 bool isFound(int *arr,int key, int size){

     if(size == 0){
         return false;
     }
     if(arr[0] == key){
      return true;
     }
     else {
       bool remainingPart = isFound(arr+1,key,size-1);
       return remainingPart;
     }
 }

 int main(){
     int arr[5] = {2,4,5,6,8};
     int key = 6;

     if(isFound(arr,6,key))
       cout << "The number is present";
    else 
       cout << "The number is not present";
 }

 // Q. 4) Binary Search with recursion.

 #include<bits/stdc++.h>
 using namespace std;

 bool isFound(int *arr,int start,int end , int key){
     
     //element not found
     if(start>end)
      return false;

      int mid = start + (end - start)/2;

     //element found
     if(arr[mid] == key)
      return true;


     if(arr[mid]<key){
         return isFound(arr,mid+1,end,key);
     }
     else{
         return isFound(arr,start,mid-1,key);
     }      
 }
 
 
 int main(){
     int arr[6] = {2,4,6,8,9,10};
     int key = 9;
     int start = 0;
     int end = 5;
      if(isFound(arr,start,end,key))
       cout << "The number is present";
    else 
       cout << "The number is not present";
 }

For Better understanding -->
   [Video Lecture Codehelp](https://www.youtube.com/watch?v=UntSI7G5h20)
                            
                            
                            
