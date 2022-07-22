/*
Question find inversion count of array
Input :
N
N elemnts of array
Example :
5
8 4 9 2 8
Output : 
5
Large input : 
5
100000000 10000 10000000000 10 100000000
Output : 
5
*/




#include<bits/stdc++.h>
using namespace std;

#define int long long

const int N = 1000000 + 1;
int n,bit[N];

void update(int val, int i){
    	for(;i<=n+1;i += (i&(-i))){
			bit[i] += val;
		}
}

int getSum(int r){
		int sum = 0;
		for(;r>=1;r -= (r&(-r))){
      	sum += bit[r];
		}

		return sum;
}

signed main(){
    int tt;
    cin >> tt;
    while(tt--){
  		cin >> n;  
  		int arr[n+1];
  		map<int,int> m;
        memset(bit,0,sizeof(bit));
  		for(int i = 1;i <= n; i++){
  			cin >> arr[i];
  			m[arr[i]];
  		}

 		 int idx = 1;
  		 for(auto &it: m){
  			it.second = idx++;
  		}
  

  		// compression of numbers for the case where a[i] > 10 ^ 6
  		for(int i = 1;i <= n; i++){
  			arr[i] = m[arr[i]];
  		} 


  		// Finding Inversion count

  		int inversionAns = 0;

  		for(int i = 1;i <= n; i++){
  			inversionAns += getSum(n+1) - getSum(arr[i]);
  			update(1,arr[i]);  
  		}
  		cout << inversionAns << endl;
  	}
}