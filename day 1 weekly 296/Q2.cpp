class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int cnt=1,mn=INT_MAX,mx=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            mn=min(mn,nums[i]);
            mx=max(mx,nums[i]);
            if(mx-mn>k)
            {
                cnt++;
                mn=INT_MAX;
                mx=INT_MIN;
                i--;
            }
        }
        return cnt;
    }
};
