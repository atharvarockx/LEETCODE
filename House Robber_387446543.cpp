class Solution {
public:
    int rob(vector<int>& nums) {
        int sum1=0,sum2=0;
        if(nums.size()==0)
            return 0;
        vector<int> v;
        v.push_back(0);
        v.push_back(nums[0]);
        
        for(int i=1;i<nums.size();i++){
            v.push_back(max(v[i],v[i-1]+nums[i]));
        }
        return v[v.size()-1];
    }
};
