class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();

        unordered_map<int,int> m;

        for(int i=0;i<n;i++)
        {
            int ans= target-nums[i];

            if(m.count(ans))
            {
                return {m[ans],i};
            }

            m[nums[i]]=i;
        }
    }
};
