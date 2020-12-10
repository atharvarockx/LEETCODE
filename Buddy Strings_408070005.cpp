class Solution {
public:
    bool buddyStrings(string A, string B) {
        if(A.size()!=B.size())
                return false;
        else{
            map<int,int> m,m1,m2;
            map<int,int>::iterator it;
            int c=0;
            int tmp=0,tmp1=0;
            for(int i=0;i<A.size();i++){
                m[A[i]]++;
                if(m[A[i]]==2)
                    tmp=1;
                if(A[i]!=B[i]){
                    c++;
                    m1[A[i]]++;
                    m2[B[i]]++;
                    if(m1[A[i]]==2 || m2[B[i]]==2)
                        tmp1=1;
                }
                    
                if(c>2)
                    break;
                
                
            }
            cout<<c;
            if(c==2 && tmp1==0){
                for(it=m1.begin();it!=m1.end();it++){
                    if(m1[it->first]!=m2[it->first])
                        return false;
                }
                return true;
            }
                
            else if(c==0){
                if(tmp==1)
                    return true;
                else
                    return false;
            }
            else
                return false;
        }
    }
};
