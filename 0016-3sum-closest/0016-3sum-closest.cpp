class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int res,sum;
        int diff=INT_MAX;
        int s,e;
        sort(nums.begin(),nums.end());
        for (int i=0;i<nums.size()-2;i++){
            s=i+1;
            e=nums.size()-1;
            while(s<e){
            sum=nums[i]+nums[s]+nums[e];
            if(sum == target){
                res = sum;
                s++;
                e--;
            }
            else if(sum<target){
                s++;
                if(abs(sum-target)<diff){
                    diff=abs(sum-target);
                    res=sum;
                }
            }
            else if(sum>target){
                  e--;
                if(abs(sum-target)<diff){
                    diff=abs(sum-target);
                    res=sum;
                }
            }
            }
        }
        return res;
    }
};