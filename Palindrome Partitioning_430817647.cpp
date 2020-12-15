class Solution {
    vector<vector<string>> ans;
public:
    bool isPallindrome(string s,int l,int h){
        while(l<h){
            if(s[l++]!=s[h--])
                return false;
        }
        return true;
    }
    void comb(vector<string>v,string s,int ind){
        if(ind>=s.size()){
            ans.push_back(v);
            return;
        }
        for(int i=ind;i<s.size();i++){
            if(isPallindrome(s,ind,i)){
                v.push_back(s.substr(ind,i-ind+1));
                comb(v,s,i+1);
                v.pop_back();
            }
            
            
            
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<string>v;
        comb(v,s,0);
        return ans;
    }
};
