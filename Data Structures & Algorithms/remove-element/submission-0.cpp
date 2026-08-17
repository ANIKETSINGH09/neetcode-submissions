class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        vector<int> hello;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=val)
            {
                hello.push_back(nums[i]);
                count++;
            }
        }

        for(int i=0;i<count;i++)
        {

            nums[i]=hello[i];

        }

        return count;


    }
};