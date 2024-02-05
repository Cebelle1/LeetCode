void merge(int* nums1, int nums1Size, int* nums2, int nums2Size, int *mergeAr){
    int i =0;
    int j=0;
    int k=0;

    while(i<nums1Size && j<nums2Size){
        if (nums1[i] < nums2[j]){
            mergeAr[k] = nums1[i];
            i++;
        } else {
            mergeAr[k] = nums2[j];
            j++;
        }
        k++;
        
    }
    while(i<nums1Size){
        mergeAr[k] = nums1[i];
        i++;
        k++;
        
    }
    while(j<nums2Size){
        mergeAr[k] = nums2[j];
        k++;
        j++;
       
    }
    
}


double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int mergeAr[nums1Size+nums2Size];
    int i=0, j=0;
    int totalSize = nums1Size + nums2Size;
    double sum =0;
    
    merge(nums1, nums1Size, nums2, nums2Size, mergeAr); //merge from mergesort's algo
    
    if((totalSize)%2) return mergeAr[(totalSize)/2];
    else {
        double lower = mergeAr[((totalSize/2)-1)];
        double upper = mergeAr[(totalSize)/2];
        return (lower+upper)/2;
    }
}