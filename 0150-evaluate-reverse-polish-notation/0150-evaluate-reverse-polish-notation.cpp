class Solution {
public:
    int evalRPN(vector<string>& s) {
        
        stack<int> st;
        
        for(int i =0; i<s.size(); i++)
        {
            
            if(s[i].size()==1 &&( s[i][0]=='/' || s[i][0]=='*' || s[i][0]=='+' || s[i][0]=='-'))
            {
                 int x;
                 int y;
                 
                       x = st.top();
                       st.pop();
                  
             
                    y = st.top();
                    st.pop();
                
                
                
                if(s[i][0]=='/')
                {
                    st.push(y/x);
                }
                else if(s[i][0]=='*')
                {
                    st.push(y*x);
                }
                 else if(s[i][0]=='+')
                {
                    st.push(y+x);
                }
                 else 
                {
                    st.push(y-x);
                }
            }
            else
            {
                
                int x = stoi(s[i]);
              
                st.push(x);
            }
        }
        
        return st.top();
        
    }
};