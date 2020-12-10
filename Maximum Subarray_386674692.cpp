class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int mx=a[0],mgx=a[0];
        for(int i=1;i<a.size();i++){
            mx=max(a[i],mx+a[i]);
            if(mx>mgx){
                mgx=mx;
            }
        }
     return mgx;   
    }
};
