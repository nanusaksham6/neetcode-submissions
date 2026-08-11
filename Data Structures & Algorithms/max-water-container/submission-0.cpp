class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int maxwater=INT_MIN;
        int i=0;
        int j=n-1;
        while(i<j){
        int width=j-i;
         int height=min(heights[i],heights[j]);
        int currwater=width*height;
        maxwater=max(maxwater,currwater);
        
        if(heights[i]<heights[j]){
            i++;
        }
        else {
            j--;
        }
        }
        return maxwater;
    }
};
