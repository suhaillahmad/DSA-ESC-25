/* Author: Suhail Ahmad
   Date  : 19 / 03 / 2022 */


// Recursion05


// Merge Sort

/*  Merge Sort is a Divide and Conquer algorithm. It divides the input array into two halves, 
    calls itself for the two halves, and then merges the two sorted halves. The merge() function 
    is used for merging two halves. The merge(arr, l, m, r) is a key process that assumes that 
    arr[l..m] and arr[m+1..r] are sorted and merges the two sorted sub-arrays into one. */

#include<bits/stdc++.h>
using namespace std;


void merge(int *arr,int s ,int e){

    int mid = s + (e - s)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];


    int mainArrayIndex = s;
    for(int i = 0;i<len1;i++){
        first[i] = arr[mainArrayIndex++];
    }
    mainArrayIndex = mid + 1;
    for(int i = 0;i<len2;i++){
        second[i] = arr[mainArrayIndex++];
    }

    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;
       
    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }
    while(index1 < len1){
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2){
        arr[mainArrayIndex++] = second[index2++];
    }
    delete []first;   //Improvement.
    delete []second;
}

void mergeSort(int *arr, int s, int e){

    //base case
    if(s >= e){
        return;
    }
    
    int mid = s + (e - s)/2;
    //left part
    mergeSort(arr,s,mid);

    //right part
    mergeSort(arr,mid+1,e);

 
    merge(arr,s,e);

}


int main(){
    int arr[5] = {2,5,1,6,9};
    int n = 5;
    mergeSort(arr,0,n-1);
   
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}



// Time Complexity : O(nlogn)
// Space Complexity: O(n)