class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        int K=0;
        int n=arr.size();
        vector<vector<int>> result;
     sort(arr.begin(),arr.end());

    for (size_t i= 0;i<arr.size()-2;i++){
        if (i > 0 && arr[i] == arr[i - 1])
        continue;
        int s=i+1;
        int e=n-1;
        while(s<e){
        if (arr[i]+arr[s]+arr[e]==K){
            
            result.push_back({arr[i], arr[s], arr[e]});

    while (s < e && arr[s] == arr[s + 1]) s++;
    while (s < e && arr[e] == arr[e - 1]) e--;

    s++;
    e--;
        }
        else if (arr[i]+arr[s]+arr[e]<K){
           
            s++;
        }
        else{
            
            e--;
        }
    }
    }
    return result;
    }
};