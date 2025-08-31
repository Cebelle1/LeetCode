class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //O(logn) binary search
        int leftPtr = 0; //index 0
        int rightPtr = nums.size();
        int mid;

        if(target> nums[rightPtr-1]){
            return rightPtr;
        } else if (target < nums[0]){
            return 0;
        }

        while(leftPtr<=rightPtr){
            mid=(leftPtr+rightPtr)/2;
            if(nums[mid] == target) return mid;

            if(target<nums[mid]){
                rightPtr = mid-1;
            }else{
                leftPtr = mid+1;
            }
        }
        return leftPtr;
        
    }
};