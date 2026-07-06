class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        sort(strs.begin(),strs.end());

        string hi=strs[0];
        string bye=strs[n-1];
        string res="";
        for(int i=0;i<min(hi.size(),bye.size());i++)
        {
            if(hi[i]==bye[i])
            {
                res=res+hi[i];
            }
            else{
                break;
            }
        }
        return res;
    }
};