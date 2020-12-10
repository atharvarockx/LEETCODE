class Solution {
public:
    static bool cmp(const vector<int> &a,const vector<int>&b){
        if(a[0]<b[0]){
            return a[0]<b[0];
        }
        if(a[0]==b[0]){
            if(a[1]<b[1])
                return a[1]<b[1];
            return a[1]>b[1];
        }
        return a[0]<b[0];
        // return a[1]<b[1];
    }
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int len = intervals.size();
        if(len == 0 || len == 1)
            return 0;
        sort(intervals.begin(),intervals.end(),cmp);
        // queue<vector<int>>q,q1;
        // q.push(intervals[0]);
        int c=1,j=0;
        for(int i=1;i<intervals.size();i++){
            if(intervals[j][0]<=intervals[i][0] &&intervals[j][1]>=intervals[i][1]){
                continue;
            }
            else{
                c++;
                j=i;
            }
            
        }
        // for(int i=0;i<intervals.size();i++){
        //     cout<<intervals[i][0]<<" "<<intervals[i][1]<<endl;
        // }
        return c;
    }
};
