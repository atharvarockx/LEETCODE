class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int mgx=nums[0],mnx=nums[0],mgpx=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]<0){
                int t=mgx;
                mgx=mnx;
                mnx=t;
            }
            mgx=max(nums[i],mgx*nums[i]);
            mnx=min(nums[i],mnx*nums[i]);
            mgpx=max(mgpx,mgx);
        }
        return mgpx;
    }     
};
