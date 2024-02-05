int rob(int* nums, int numsSize) {
    if (numsSize == 0) return 0;
    if (numsSize == 1) return nums[0];  //only 1 house to rob

    int evenSum = 0;
    int oddSum =0;

    //dp

    for (int i=0; i< numsSize; i++){
        if (i % 2 ==0){  //at even index,
            //take max of robcurrent + prev robed until even index
            //or dont rob, hence will be value stored at oddSum
            // we consider oddSum also because we can skip even and take the next odd which would not be adj
            evenSum = fmax(evenSum + nums[i], oddSum);  
        }else {
            oddSum = fmax(oddSum + nums[i], evenSum);
        }
    }
    return fmax(evenSum, oddSum);
}