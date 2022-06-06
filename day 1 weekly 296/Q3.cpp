class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& opr) {
        for(int i=0;i<opr.size();i++)
        {
            int tmp=opr.size();
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]==opr[i][0])
                {
                  nums[j]=opr[i][1];
                    break;
                }
                
            }
        }
        return nums;
    }
};
