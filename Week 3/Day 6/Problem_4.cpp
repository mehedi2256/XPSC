class Solution {
  public:
    long long maximumSumSubarray(vector<int>& arr, int k) {
        long long cnt = 0;
        for(int i=0;i<k;i++)
            cnt += arr[i];
            
        long long cr = cnt;
        for(int i=k;i<arr.size();i++){
            cr += arr[i] - arr[i-k];
            cnt = max(cnt,cr);
        }
        return cnt;
    }
};