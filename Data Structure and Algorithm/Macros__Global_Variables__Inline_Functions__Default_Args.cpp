/* Author : Suhail Ahmad
   Date   : 20 / 02 / 2022. */


/* We can create a macro by #define ex:- #define pi 3.14.  
   macro : A piece of code in a program that is replaced by value of macro.*/

#include<bits/stdc++.h>
using namespace std;
 
#define PI 3.14      // By using macro we have not used any extra storage and the value PI cannot be changed in the main.

int main(){
    int r = 5;
     double area = PI * r * r;
     cout << area << endl;        // 78.5 will be printed
     return 0;
}


/* Global Variable */
/* The variable can be shared in the function by using refrence variable but we can also do the same by using Global 
   variable.
   Local Variable: If you declare Variables inside a function or block then they are called local variables.
   They can be used only by statements that are inside that function or block of code. You cannot use local 
   variables outside the function in which you have declared.
   
   
   Global Variable: If You declare Global variables outside a function, usually on top of the program. 
   Global variables will hold their values throughout the lifetime of your program and they can be 
   accessed inside any of the functions defined for the program. */

   #include<bits/stdc++.h>
   using namespace std;
  
   int c = 5;         //Global Variable.

   void solve(){
       int n = 10;   //Local Variable.
   }
   
   int main(){
       void solve();   
   }
  
/* Caution : Global Variable is not a good practice because any function can change the value of Global
             Variable and it will be reflected in the other functions.It is advised to use the refrence 
             variable concept. */




/* Inline Function */

/* They are used to reduce the function call overhead */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int a = 1, b = 2;
    int ans = 0;

    if(a>b){
        ans = a;
    }
    else{
        ans = b;
    }

    return 0;
}

/* The whole thing that i have written above can be also written as */

#include<bits/stdc++.h>
using namespace std;

inline int getMax(int& a, int& b){
    return (a>b) ? a:b;    // If the body of the function is inline than we can make the function inlinw.
}

int main(){

    int a = 1, b = 2;
    int ans = 0;

    ans = getMax(a,b);

    return 0;
}
/* The benefit of an inline function is that whenever the fuction is called the value is replaced by the
   body of the function.In the above example "getMax(a,b)" is replaced by the body of the getMax funct
   i.e "(a>b) ? a:b;". 

   1) No extra memory usage.
   2) No function call overhead.




/* Default Arguments */

/* A Default Argument is an argument to a function that a programmer is not required to specify */

#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n  , int start = 0) {     // we have always begin from the right most variable.

    for(int i = start; i<n; i++) {
        cout << arr[i] << endl;                    // In first function call it will print the entire array
                                                   // In second function call it will print the 7,8,9.
    }

}

int main() {

    int arr[5] = {1,4,7,8,9};
    int size = 5;

    print(arr, size);       
    cout << endl;
    print(arr, size, 2);


    return 0;
}