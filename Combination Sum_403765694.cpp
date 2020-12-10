class Solution {
    vector<vector<int>>ans;
    set<vector<int>>s;
public:
    void comb(vector<int> candidates, int n,int target,vector<int>a,int sum,int j){
        if(a.size()>0 && sum==target){
            sort(a.begin(),a.end());
            // ans.push_back(a);
            s.insert(a);
            return;
        }
        for(int i=j;i<n;i++){
            if(sum+candidates[i]<=target){
                sum+=candidates[i];
                a.push_back(candidates[i]);
                comb(candidates,n,target,a,sum,j);
                a.pop_back();
                sum-=candidates[i];
            }
        }
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>a;
        comb(candidates,candidates.size(),target,a,0,0);
        set<vector<int>>::iterator itr;
        for(itr=s.begin();itr!=s.end();itr++){
            ans.push_back(*itr);
        }
        return ans;
        
    }
};
