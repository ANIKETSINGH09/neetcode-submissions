class Solution {
    public:
        bool hasDuplicate(vector<int>& nums) {
                unordered_set<int> cry;

                        for(int x:nums)
                                {
                                            if(cry.count(x))
                                                        {
                                                                        return true;
                                                                                    }
                                                                                                cry.insert(x);
                                                                                                        }

                                                                                                                return false;
                                                                                                                    }
                                                                                                                    };
