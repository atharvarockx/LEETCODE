class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int j;
        int tot=0;
        if(timeSeries.size()==0)
            return 0;
        timeSeries.push_back(timeSeries[timeSeries.size()-1]+duration);
        for(int i=0;i<timeSeries.size()-1;i++){
            
            if(timeSeries[i]+duration<=timeSeries[i+1]){
                tot+=duration;
            }
            else{
                j=i;
                while(timeSeries[i]+duration>timeSeries[i+1]){
                    i++;
                    
                }
                tot+=timeSeries[i]+duration-timeSeries[j];
            }
        }
        return tot;
    }
};
