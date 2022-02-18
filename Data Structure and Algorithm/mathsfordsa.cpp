/* Author : Suhail Ahmad 
   Date   : 2 / 01 / 2022 */



/* 1) Prime number
leetcode question no 204. Count Prime */

// Broute force approach 
class Solution {
public:
   bool isprime(int i)
    {
       if(i<=1)
           return false;
       
        for(int j = 2;j<i;j++)
        {
            if(i%j==0)
            {
                return false;
            }
        }
        return true;
    }
    
    int countPrimes(int n) {
        int count = 0;
        for(int i = 1;i<n;i++)
        {
            if(isprime(i))
            {
                count++;
            }
        }
        return count;
    }
};
// This sol gives TLE

// sieve of eratosthenes algorithm 
class Solution {
public:
    int countPrimes(int n) {
         int count = 0;
       vector<bool> prime(n+1,true);   //Marking every number as a prime number
       prime[0]=prime[1]= false;       //Marking 0 and 1 as non prime number
       
       for(int i = 2;i<n;i++)
       {
           if(prime[i])
           {
               count++;               //storing the count if a prime number is encountered
           }
           for(int j = 2*i;j<n;j += i) 
           {
               prime[j] = false; //Marking every number as a non prime number which comes in the table of prime number
           }
       }
       return count;
    }
};
// This is correct solution using SIEVE OF ERATHOSTHENES.

/* 2) GCD(HCF)*/


#include<iostream>
using namespace std;

int gcd(int a, int b) {

    if(a==0)
    return b;

    if(b==0)
    return a;

    while(a != b) {

        if(a>b)
        {
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}

int main() {
    
    int a,b;
    cout << "Enter the Values of a and b" << endl;
    cin >> a >> b;

    int ans = gcd(a,b);

    cout << " The GCD of " << a << " & " << b << " is: " << ans << endl;



    return 0;
}
