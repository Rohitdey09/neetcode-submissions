class Solution {
public:
    int maxArea(vector<int>& heights) {
      int left=0,right=heights.size()-1,max_area=0,area;
      while(left<=right){
        area=(min(heights[left],heights[right]))*(right-left);
        max_area=max(max_area,area);
        if(heights[left]<heights[right])left++;
        else right--;
      }
      return max_area;  
    }
};
