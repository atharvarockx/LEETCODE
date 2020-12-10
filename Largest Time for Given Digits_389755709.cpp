class Solution {
public:
    string comb(vector<int>& A,int j){
        int n=A.size();
        bool visited[4]={false};
        string s="";
        s+=to_string(A[j]);
        visited[j]=true;
        for(int i=0;i<n;i++){
            if(visited[i]==false && (s[0]-'0')<=1 ){
                visited[i]=true;
                s+=to_string(A[i]);
                break;
            }
            if(visited[i]==false && A[i]<=3){
                visited[i]=true;
                s+=to_string(A[i]);
                break;
            }
        }
        s+=":";
        for(int i=0;i<n;i++){
            if(visited[i]==false && A[i]<=5){
                visited[i]=true;
                s+=to_string(A[i]);
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(visited[i]==false){
                visited[i]=true;
                s+=to_string(A[i]);
                break;
            }
        }
        return s;
    }
    
    string largestTimeFromDigits(vector<int>& A) {
        int n=A.size();
        sort(A.rbegin(),A.rend());
        string s1;
        int f=0;
        for(int i=0;i<n;i++){
            if(A[i]<=2){
                s1=comb(A,i);
                if(s1.size()==5)
                    return s1;
            }
        }
        // cout<<s<<endl;
        // if(s.size()==5)
        //     return s;
        
        return "";
    }
};
