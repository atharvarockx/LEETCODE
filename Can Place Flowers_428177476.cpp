class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int n1=flowerbed.size();
        for(int i=0;i<n1;i++){
            if(flowerbed[i]==0){
                if(i==0){
                    if(i+1<n1 && flowerbed[i+1]==0){
                        flowerbed[i]=1;
                        n--;
                    }
                    else if(i+1>=n1){
                        flowerbed[i]=1;
                        n--;
                    }
                        
                        
                }
                else if(i==n1-1 && flowerbed[i-1]==0){
                    flowerbed[i]=1;
                    n--;
                }else{
                    if(flowerbed[i-1]==0 && flowerbed[i+1]==0){
                        flowerbed[i]=1;
                        n--;
                    }
                }
                    
                    
            }
            // if(n==0)
            //     return true;
        }
         for(int i=0;i<n1;i++){
            cout<<flowerbed[i]<<" ";
         }
        if(n>0)
            return false;
        return true;
    }
};
