class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int c=1;
        int j=1;
        if(nums.size()<=1)
            return nums.size();
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]!=nums[i]){
                nums[j]=nums[i+1];
                c++;
                j++;
            }
        }
        return c;
    }
};
