class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> hi;

        for(int x:nums)
        {
            hi[x]++;
        }
        vector<pair<int,int>> freq;

        for(auto y:hi)
        {
            freq.push_back({y.second,y.first});
        }
        sort(freq.rbegin(),freq.rend());
        
        vector<int> ans;

        for(int i=0;i<k;i++)
        {
            ans.push_back(freq[i].second);

        }
        return ans;
    }
};
