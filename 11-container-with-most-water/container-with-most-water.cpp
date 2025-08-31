class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;

        int maxArea =0;
        int curArea = 0;

        while(left<=right){
            curArea = min(height[left], height[right]) * (right-left);
            std::cout << "area: " << curArea << std::endl;
            maxArea = max(maxArea, curArea);
            if(height[left] < height[right]) left++;
            else right--;
        }
        return maxArea;
    }
};