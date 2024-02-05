/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize =2;
    int *returnArray = malloc(sizeof(int)*2);
    for(int i=0; i<numsSize;i++){
        for(int j=i+1; j<numsSize; j++){
        
            if(nums[i]+ nums[j]== target){
                returnArray[0] = i;
                returnArray[1] = j;
                return returnArray;
            }
        }
    }
    return -1;
}
