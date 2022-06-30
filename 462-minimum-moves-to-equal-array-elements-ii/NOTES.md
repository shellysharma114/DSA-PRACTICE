brute force approach
time complexity: n logn + n : nlogn
```
int minMoves2(vector<int>& nums) {
int len = nums.size();
sort(nums.begin(),nums.end());
int mid = nums[len /2];
int t=0;
for(int i=0;i<len;i++){
​
int moves = nums[i] - mid;
if(moves<0){
moves = moves * (-1);
}
t += moves;
​
}
return t;
```