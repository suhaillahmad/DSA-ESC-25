  
/* Author : Suhail Ahmad.
   Date   :  10 / 05 / 2022 */

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#include<algorithm>

using namespace std;
using namespace chrono;
using namespace __gnu_pbds;

#define read(n)  cin>>n
#define f(i,a,b) for(long long i = a;i<=b;i++)
#define r(i,a,b) for(long long i = a;i>=b;i--)
#define ll       long long
#define pb       push_back
#define PI       3.141592653589793238462

template<class T> using oset = tree<T, null_type, greater_equal<T>, rb_tree_tag,tree_order_statistics_node_update>;
// declaration : oset<data_type> s;


 const unsigned int M = 1000000007;



void solve(){
  int n;
   read(n);
  vector<int> a(n);
  f(i,0,n-1)
   read(a[i]);

   int ans = INT_MIN;
   int sum = 0;
   f(i,0,n-1){
   	 sum += a[i];

   	 ans = max(ans,sum);
   	 if(sum < 0)
   	 	sum = 0;
   }
   cout << ans << endl;
 } 

int main(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while(t--)
  solve(); 
}