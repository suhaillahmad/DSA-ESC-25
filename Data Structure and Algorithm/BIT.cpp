#include<bits/stdc++.h>
using namespace std;





int n,bit[100000];


//making binary indexed tree.
void update(int val, int n, int i){
    for(;i<=n;i += (i&(-i))){
		bit[i] += val;
	}
}



// Getting the sum upto rth element;
int getSum(int r){
	int sum = 0;
	for(;r>=1;r -= (r&(-r))){
      sum += bit[r];
	}

	return sum;
}

signed main(){
	 cin >> n;
	int arr[n];
	for(int i = 0;i<n;i++){
		cin >> arr[i];
	}
	memset(bit,0,sizeof(bit));
	for(int i = 0;i<n;i++){
		update(arr[i],n,i+1);
	}

     int r; cin >> r;
     int ans = getSum(r);

     cout << ans << endl;
 }
