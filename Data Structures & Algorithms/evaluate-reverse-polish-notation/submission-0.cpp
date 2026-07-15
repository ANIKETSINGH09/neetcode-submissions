class Solution {
   public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for (string ch : tokens) {
            if (ch=="+" || ch=="-" || ch=="*" || ch=="/") {

                if (ch == "+") {
                    int a=s.top();
                    s.pop();
                    int b=s.top();
                    s.pop();
                    s.push(a+b);
                }
                else if(ch=="-")
                {
                   int a=s.top();
                    s.pop();
                   int b=s.top();
                    s.pop();
                    s.push(b-a);
                }
                else if(ch=="*")
                {
                    int a=s.top();
                    s.pop();
                    int b=s.top();
                    s.pop();
                    s.push(a*b);
                }
                else if(ch=="/")
                {
                    int a=s.top();
                    s.pop();
                    int b=s.top();
                    s.pop();
                    s.push(b/a);
                }
            }
            else 
            {
                s.push(stoi(ch));
            }
        }
        return s.top();
    }
};
