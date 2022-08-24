class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0 , j = nums.size();
        while(j>i){
            int mid = (i+j)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid] > target){
                j = mid;
            }
            else{
                i = mid+1;
            }
            
        }
        return i++;
    }
};