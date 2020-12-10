class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int a[60]={0};
        for(int i=0;i<time.size();i++){
            a[time[i]%60]+=1;
        }
        int c=a[0]*(a[0]-1)/2+a[30]*(a[30]-1)/2;
        for(int i=1,j=59;i<j;i++,j--){
            c+=a[i]*a[j];
        }
        return c;
    }
};
