/* Author : Suhail Ahmad
   Date   : 15 / 03 /2022 */


/* RECURSION: 02 */

// Reversion

// Quest) Reach home 👀

#include<bits/stdc++.h>
using namespace std;

void reachHome(src,dest){

    //base case
    if(src == dest) {
    cout << "Reached home";
    return;
    }

    //processing
    src++;

    //recursive call
    reachHome(src,dest)
}

int main(){
    int destination = 10;
    int source = 1;

    reachHome(source,destination);
}


/* Fibonacci series question
   Fibonacci series = 0 1 1 2 3 5 ...... (the next number is the sum of the previous two numbers) 
   base case : if(n==0) return 0; if(n==1) return 1;
   */
// Leetcode question no 509. Fibonacci Number
//code :

      class Solution{
          public:
          int fib(int n){
              //base case
              if(n==0)
              return 0;
              if(n==1)
              return 1;

              int ans = fib(n-1) + fib(n-2);

              return ans;
          }
      }

// CodeStudio quest --> Count Ways To Reach The N-th Stairs 
// code :
       
int countDistinctWayToClimbStair(long long n)
{
    //base case.
    if(n<0) return 0;
         if(n==0) return 1;
    
    int ans = countDistinctWayToClimbStair(n-1) + 
        countDistinctWayToClimbStair(n-2);
}



// Say Digits

/* Sample input = 413        Output = four one three */

// code :

 #include<bits/stdc++.h>
 using namespace std;

 void sayDigits(int n , string arr[]){

     if(n==0)
     return;

     int digit = n%10;
     n = n/10;
    
     sayDigits(n, arr);
    
     cout << arr[digit] << " ";

 }
 
 
 
 int main(){
     int n;
     cin >> n;

     string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"}
     
     cout << endl;
     sayDigits(n,arr);
     cout << endl;
 }







