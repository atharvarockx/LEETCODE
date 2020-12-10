class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int,int>m,m1,m2;
        int mxn=0,mx=0;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            if( m[nums[i]]>mx){
                mx=m[nums[i]];
                mxn=nums[i];
            }
            m1[nums[i]]=-1;
            m2[nums[i]]=-1;
        }
        for(int i=0;i<nums.size();i++){
            if(m1[nums[i]]==-1)
                m1[nums[i]]=i;
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(m2[nums[i]]==-1)
                m2[nums[i]]=i;
        }
        map<int,int>::iterator it;
        int mn=INT_MAX;
        for(it=m.begin();it!=m.end();it++){
            // cout<<it->first<<" ";
            if(it->second==mx){
                if(m2[it->first]-m1[it->first]+1<mn){
                    mn=m2[it->first]-m1[it->first]+1;
                    // cout<<it->first<<" "<<m2[it->first]<<" "<<m1[it->first]<<endl;
                }
                    
            }
        }
        return mn;
    }
};
