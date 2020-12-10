class Solution {
public:
    int maxProfit(vector<int>& a) {
        if(a.size()==0) 
            return 0;
        int mn=a[0],j=0,s=0;
        for(int i=1;i<a.size();i++){
            if(j!=a.size())
                s=max(s,a[i]-mn);
            j++;
            if(a[j]<mn)
                mn=a[j];
        }
        return s;
    }
};
