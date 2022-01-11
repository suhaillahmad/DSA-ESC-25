class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        int n = arr.size();
        long int i = 0, j = n-1;
        sort(arr.begin(),arr.end());
        int mid = arr[((n-1)/2)];
        vector<long int> ans;
        while(i < j)
        {
            if(abs(arr[i]-mid) > abs(arr[j]-mid))
            {
                ans.push_back(arr[i++]);
            }
            else if(abs(arr[i]-mid) == abs(arr[j]-mid) && arr[i] > arr[j])
            {
                ans.push_back(arr[i++]);
            }
            else if(abs(arr[i]-mid) == abs(arr[j]-mid) && arr[i] < arr[j])
            {
                ans.push_back(arr[j--]);
            }
            else if(abs(arr[i]-mid) == abs(arr[j]-mid))
            {
                ans.push_back(arr[j--]);
            }
            else if(abs(arr[i]-mid) < abs(arr[j]-mid))
            {
                ans.push_back(arr[j--]);
            }
        }
        ans.push_back(mid);
        i = 0;
        vector<int> fin;
        while(k--)
        {
            fin.push_back(ans[i++]);
        }
        return fin;
        
    }
};