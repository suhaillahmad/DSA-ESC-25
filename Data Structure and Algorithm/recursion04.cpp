/* Author: Suhail Ahmad
   Date  : 18 / 03 / 2022  */


/* Recurion 04 */

// Q 1 ) Reversing a String using Recursion 
        // i/p --> "abcde"   o/p ---> "cdcba"

//code:

#include<bits/stdc++.h>
using namespace std;

void revString(string& s , int i , int j ){

    //base case
    if(i>j)
    return;

     swap(s[i++],s[j--]);
     revString(s,i,j);
}


int main(){
    string s = "abcde";
    int i = 0;
    int j = s.size()-1;

    revString(s,i,j);
    cout << s ;
}

// First Question by using only one pointer

#include<bits/stdc++.h>
using namespace std;

void revString(string& s, int i){

    //base case
    if(i > s.size()-i-1){
        return;
    }

    swap(s[i],s[s.size()-i-1]);
    i++;

    revString(s,i);
}

int main(){
  string s = "abcde";
  
  revString(s,0);
  cout << s ;
}


// Q. 2) Check Pallindrome.

#include<bits/stdc++.h>
using namespace std;

bool checkPalli(string s,int i, int j ){
    
    if(i>j){
        return true;
    }

    if(s[i++]==s[j--]){
        checkPalli(s,i,j);
    }
    else{
        return false;
    }
}



int main(){
    string s = "BookkooB";

    if(checkPalli(s,0,s.size()-1)){
        cout << "TRUE" << endl;
    }
    else{
        cout << "FAlSE" << endl;
    }

}

// Using only one pointer

 #include<bits/stdc++.h>
 using namespace std;

 bool checkPalli(string s,int i ){
    
    if(i>s.size()-1-i){
        return true;
    }

    if(s[i]==s[s.size()-1-i]){
        i++;
        checkPalli(s,i);
    }
    else{
        return false;
    }
}



int main(){
    string s = "BookkooB";

    if(checkPalli(s,0)){
        cout << "TRUE" << endl;
    }
    else{
        cout << "FAlSE" << endl;
    }

}


// Q. 3) Calculating Power with Recursion.


#include<bits/stdc++.h>
using namespace std;

int power(int a ,int b){

    //base case
    if( b == 0 ){
        return 1;
    }
    if( b == 1 ){
        return a;
    }

        int ans = power(a, b/2);

        if(){
            return ans * ans;
        }
        else{
            return a * ans * ans;
        }
         
    
}


int main(){
    int a,b;
    cin >> a >> b;

    int ans = power(a,b);

    cout << "Answer is " << ans << endl;
}


// Q. 4) Bubble Sort Using Recursion


#include<bits/stdc++.h>
using namespace std;

void sortArray(int *arr, int n){

    if(n == 0 || n == 1)
    return;

    for(int i = 0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sortArray(arr,n-1);
}




int main(){
  int arr[6] = {2,7,4,3,5,9}; 

  sortArray(arr,6);

  for(int i = 0;i<6;i++){
      cout << arr[i] << " ";
  }
}