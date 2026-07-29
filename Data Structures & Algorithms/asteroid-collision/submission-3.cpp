class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;

        for(int a:asteroids)
        {
            bool flag=true;
            while(!s.empty() && flag && s.top()>0 && a<0)
            {
                if(abs(s.top())<abs(a))
                {
                    s.pop();
                }
                else if(abs(s.top())==abs(a))
                {
                    s.pop();
                    flag=false;
                }
                else
                {
                    flag=false;
                }
            }
            if(flag)
            {
                s.push(a);
            }
        }

        vector<int> ans;

        while(!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        }

        reverse(ans.begin(),ans.end());

        return ans;
        
    }
};