/* Author : Suhail Ahmad 
   Date   : 19 / 02 / 2022 */


#include<bits/stdc++.h>
using namespace std;

int main(){
    int i = 5;
    //Creating a refrence variable.
    int& j = i;
    cout << i << endl;      // Output will be 5
    i++;                    // j will be poninting to the same block i.e i. (same memory diff name).
    cout << i << endl;      // Output will be 6
    j++;
    cout << j << endl;      // Output will be 7
}

/* In Pass By Value a copy is created while in Pass By Refrence the same block is pointed */
/* When a variable is declared as a reference, it becomes an alternative name for an existing variable. */

/*Pass By Value */
void update(int n){
    n++;
}
int main(){
    int n = 5;
    cout << "Before " << n << endl;    // Output will be 5.
    update(n);
    cout << "After " << n << endl;    // Output will be 5.
}

/* Pass By Reference */
void update(int& n){
    n++;
}
int main(){
    int n = 5;
    cout << "Before " << n << endl;    // Output will be 5.
    update(n);
    cout << "After " << n << endl;    // Output will be 6.
}
 
/* Bad Practice to avoid*/

int& func(int a){
    int num = a;
    int& ans = num;
    return ans;       
}
int main(){
    int n = 5;
    int af = func(n);
    cout << af;    // Output will be 5.
}

/* ARRAY'S */

int n;
cin >> n;
int arr[n]; 
/* This is a bad practice because we get to know the size of the array at the run time
    we should be knowing the size of the array at the time of compiling. */

/* If we use the memory of the stack we say static memory allocation but if we use the memory of the heap we say dynamic 
   memory allocation.(We can access the memory of the heap by using new keyword). In heap only address is returned hence
   we use pointer to access the value at that address.  ex:- int* p = new i. Here in the example int* p is stored in the 
   stack and take 8 byte of memory while  new i is stored in the heap and take 4 byte of memory hence this whole statement 
   is taking around 12 byte of memory.

   To create a array in heap memory : int* arr = new int[5]; (A array of size 5 is created). Total 28 byte memory is used.
   (8 static , 20 heap)*/

int getSum(int *arr,int n){

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
    
}

int main(){
    int n;
    cin >> n;

    int* arr = new int[n];

    for(int i=0;i<n;i++)
    cin >> arr[i];
   
    int ans = getSum(arr,n);
    cout << ans << endl;
}
  /* In static the memory is relased automatically but in the heap the memory is not removed automatically.
     (java nh hai yeh c++ hai LOL). To free the memory in heap use delete keyword ex: "delete i (for single)"
     and "delete []arr (for array)" */


// Dynamic memory allocation of 2D Array


// 2D Array for same row and col

int main(){
    int n = 5;
    int** arr = new int*[n];
    
    for(int i = 0;i<n;i++){
        arr[i] = new int[n];
    }
    // Creation done.

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n ;j++){
            cin >> arr[i][j];        
        }
    }
    cout << endl;
     for(int i = 0;i<n;i++){
        for(int j = 0;j<n ;j++){
           cout << arr[i][j];
        }
        cout << endl;
    }
}

// 2D Array for diff row and col
int main(){
    int row;
    cin >> row;

    int col;
    cin >> col;
    
    int** arr = new int*[row];
    
    for(int i = 0;i<row;i++){
        arr[i] = new int[col];
    }
    // Creation done.

    for(int i = 0;i<row;i++){
        for(int j = 0;j<col ;j++){
            cin >> arr[i][j];        
        }
    }
    cout << endl;
     for(int i = 0;i<row;i++){
        for(int j = 0;j<col ;j++){
           cout << arr[i][j];
        }
        cout << endl;
    }
     for(int i = 0;i<row;i++){
         delete []arr[i];       // Releasing the memory in heap. 
     }
     delete []arr;            // Releasing the memory in heap.
}
