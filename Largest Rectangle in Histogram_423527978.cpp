class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        if(heights.size()==0)
            return 0;
        if(heights.size()==1)
            return heights[0];
        int area=0;
        stack<int> st;
        st.push(0);
        int i;
        for(i=1;i<heights.size();i++){
            int curr=heights[i];
            if(curr>=heights[st.top()]){
                st.push(i);
            }else{
                while(!st.empty() && curr<heights[st.top()]){
                    int temp = heights[st.top()];
                    st.pop();
                    if(st.empty()){
                        area=max(area,temp*i);
                        cout<<temp*i<<endl;
                    }
                    else{
                        area=max(area,temp*(i-st.top()-1));
                        cout<<temp*(i-st.top()-1)<<endl;
                    }
                }
                st.push(i);
                
            }
            
        }
        cout<<area<<" ";
        while(!st.empty()){
            int temp = heights[st.top()];
            st.pop();
            if(st.empty())
                area=max(area,temp*i);
            else{
                area=max(area,temp*(i-st.top()-1));
            }
        }
        cout<<area<<" ";
        return area;
    }
};
