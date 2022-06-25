class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
		
		// Sum of natual number from 1-n
        int sum_predicted = len *( len + 1)/2;
        int actual_sum = 0;
        
		// Actual sum of n number from [0 - n]
        for(int i =0; i < len; i++){
            actual_sum += nums[i];
        }
        return (sum_predicted - actual_sum);
    }
};