 #include<iostream>
 using namespace std;
 int main(){
     int nums[4]={1,2,2,3};
 int count = 0;
 int n = 4;
        int i = 0;
        while(i<n){
            for(int j = i+1;j<n;j++){
                int element = nums[i];
                i++;
            if(element==nums[j]){
                count = count + 1;
             
                
            }
            }
            }
            if(count == 1){
            cout<<count;
            }
        }
 