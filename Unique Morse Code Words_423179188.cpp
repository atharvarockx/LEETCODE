class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> st;
        string morse[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---"
            ,".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        for(int i=0;i<words.size();i++){
            string s="";
            for(int j=0;j<words[i].size();j++){
                s=s+morse[(words[i][j]-'a')];
                
            }
            // cout<<morse[(words[0][0]-'a')];
            // cout<<s<<endl;
            st.insert(s);
        }
        return st.size();
    }
};
