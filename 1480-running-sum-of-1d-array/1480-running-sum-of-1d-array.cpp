class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int len = nums.size();
        vector<int> res;
        res.push_back(nums[0]);
        for(int i=0;i<len-1;i++){
            res.push_back(res[i]+nums[i+1]);
        }
        
        return res;
    }
};