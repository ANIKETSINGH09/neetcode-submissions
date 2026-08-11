class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> hello;

        for(int i=0;i<n;i++)
        {
            if(hello.count(nums[i]))
            {
                return true;
            }
            hello.insert(nums[i]);
        }

        return false;
        
    }
};