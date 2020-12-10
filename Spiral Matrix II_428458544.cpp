class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>v(n,vector<int>(n));
        if(n==1){
            v[0][0]=1;
            return v;
        }
        int c=1;
        int x=0,y=0,k;
        for(k=n-1;k>0;k=k-2){
            for(int j=0;j<k;++j){
                v[x][y++]=c++;
            }
            for(int j=0;j<k;++j){
                v[x++][y]=c++;
            }
            for(int j=0;j<k;++j){
                v[x][y--]=c++;
            }
            for(int j=0;j<k;++j){
                v[x--][y]=c++;
            }
            x++;
            y++;
        }
        if(k == 0) 
            v[x][y] = c;
        return v;
    }
};
