class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int> m;
        char ch;
        for(int i=0;i<t.size();i++){
            m[t[i]]++;
        }
        for(int i=0;i<s.size();i++){
            m[s[i]]--;
            
        }
        map<char,int>::iterator itr;
        for(itr=m.begin();itr!=m.end();itr++){
           if(itr->second==1){
                ch= itr->first;
                break;
            }
            
        }
        
        return ch;
    }
};
