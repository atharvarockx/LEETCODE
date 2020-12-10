class Solution {
    stack<char> st;
public:
   bool isValid(string s) {
        stack<char> st;
        static unordered_map<char,char> hash = { {')','('}, {']','['},{'}','{'} };
  
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == ')' || s[i]==']' || s[i] == '}')
            {
                if(st.size() > 0 && st.top() == hash[s[i]])
                    st.pop();
                else
                    return false;
            }
            else 
                st.push(s[i]);
        }
        return st.size() == 0;
    }
};
