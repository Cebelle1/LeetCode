class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index =0;
        for(int x=0; x< nums.size(); x++){
            if(nums[x] != val){
                nums[index] = nums[x];
                index++;
            }
        }

        return index;
    }
};