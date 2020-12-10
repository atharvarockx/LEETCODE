class Solution {
    set<pair<int,int>>s;
public:
    int findPairs(vector<int>& nums, int k) {
        int n=nums.size();
        int c=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[j]-nums[i]>k)
                    break;
                if(nums[j]-nums[i]==k)
                    s.insert(make_pair(nums[i],nums[j]));
            }
//             int beg=i,last=n-1;
//             while(beg<last){
//                 // int mid=(beg+last)/2;
//                 if( nums[last]-nums[beg]==k)
//                     c++;
//                 else if(nums[last]-nums[beg]>k)
//                     last--;
//                 else if(nums[last]-nums[beg]<k)
//                     break;
                    
                    
//             }
        }
        return s.size();
    }
};
