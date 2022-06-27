// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int s = 0, mid, ans;
        while(s <= n)
        {
            mid = s + (n - s)/2;
            if(isBadVersion(mid) == true)
            {
                ans = mid;
                n = mid-1;
            }
            else
            {
                s = mid+1;
            }
        }
        return ans;
    }
};