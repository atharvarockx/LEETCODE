class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int c=1,c1=1;
        int n=nums.size();
        if(n<=2)
            return n;
        vector<int>::iterator itr;
        itr=nums.begin();
        
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                c1++;
                if(c1<=2)
                    c++;
                else{
                    nums.erase(itr+i-1,itr+i);
                    n--;
                    i--;
                }
                    
            }else{
                c1=1;
                c++;
            }
        }
        return c;
    }
};
