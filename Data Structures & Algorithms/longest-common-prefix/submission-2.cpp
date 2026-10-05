class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        sort(strs.begin(),strs.end());
        string hi=strs[0];
        string hello=strs[n-1];

        string ans="";

        for(int i=0;i<min(hi.size(),hello.size());i++)
        {
            if(hi[i]==hello[i])
            {
                ans=ans+hello[i];
            }
            else
            {
                break;
            }
        }

        return ans;
    }
};