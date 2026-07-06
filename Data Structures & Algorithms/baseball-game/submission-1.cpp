class Solution {
public:
    int calPoints(vector<string>& operations) {
        int ans=0;
        stack<int> st;

        for(string c:operations)
        {
           if(c=="C")
           {
            st.pop();
           }
           else if(c=="D")
           {
            st.push(st.top()*2);
           }
           else if(c=="+")
           {
            int a=st.top();
            st.pop();
            int b=st.top();
            st.push(a);
            st.push(a+b);
           }
           else
           {
            st.push(stoi(c));
           }
        }

        while(!st.empty())
        {
            ans=ans+ st.top();
            st.pop();
        }

        return ans;
    }
};