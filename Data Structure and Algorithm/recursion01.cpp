/* Author : Suhail Ahmad
   Date   : 20 / 02 /2022 */


/* RECURSION */

/* When a function calls itself directly or indirectly is called recursion */
// ex:
int solve(int n){
    solve(n);
}

/* Recursion is used when a sol to a big prob depends upon the sol of a small prob 
   ex: find 2^n ---> this is a big problem but the sol to this prob depends on the
   sol to a small prob i.e 2^4 -----> this is a small problem. 2^4 = 2^1 * 2^3 
   hence 2^n = 2 * 2^(n-1) hence f(n) = f(1) + f(n-1).

   Factorial = 5! = 5*4*3*2*1 
               5! = 5*4!
               n! = n*n-1!
               f(n) = n*f(n-1).

   Recursion we need --> 1) Base case (where the program should stop).
                         2) Recusive relation. 
   

   code for factorial --> */

   #include<bits/stdc++.h>
   using namespace std;

   int fact(int n){
      if(n==0) return 1;  //Base case. (If base case is not written the program will return segmentation fault(becoz of stack overflow)).

     
      return n*fact(n-1);
   }
   
   
   int main(){
         int n = 5;

         int ans = fact(n);

         cout << ans << endl;
   }

   /* Tail Recursion : Recusive Relation comes at end */

   int funct(int n){
      
      //base case

      //Processing

      //Recursive Relation
   }

   /* Head Recursion : Recusive Relation comes at mid */

    int funct(int n){
      
      //base case.

      //Recursive Relation.

      //Processing.
   }


   // code for 2^n ------>

 #include<bits/stdc++.h>
 using namespace std;
  
int twoPower(int n){
   if(n==0) return 1;

   return 2*twoPower(n-1);
}

int main();

int n;
cin >> n;

int ans = twoPower(n);

cout << ans << endl;


// Print Counting ------>

#include<bits/stdc++.h>
using namespace std;

void print(int n){
   if(n==0) return;

   cout << n << " " ;
   print(n-1);       // for n = 5 output---> 5 4 3 2 1 
}

int main(){
   int n;
   cin >> n;

   print(n);
}

#include<bits/stdc++.h>
using namespace std;

void print(int n){
   if(n==0) return;
   
   print(n-1);       

   cout << n << " " ;  // for n = 5 output---> 1 2 3 4 5 
}

int main(){
   int n;
   cin >> n;

   print(n);
}

 For Better understanding -->
   [Video Lecture Codehelp](https://www.youtube.com/watch?v=_-2u4EPHD88&t=31s)
   [Documentation](https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118522/offering/1380913)
