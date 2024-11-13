class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        vector<int> v;
        bool isit = false;
        for(int i=0;i<= arr.size() - k;i++){
            isit = false;
            for(int j=i ;j <i + k; j++){
                if(arr[j] < 0){
                    v.push_back(arr[j]), isit = true;
                    break;
                }
            }
            if(!isit) v.push_back(0);
        }
        
        return v;
    }
};