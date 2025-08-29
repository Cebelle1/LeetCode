class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        double median =0;
        
        if (nums1.size()%2){    //odd
            median = nums1[int(nums1.size()/2)];
        } else{ //even
            int number1 = nums1[(nums1.size()/2)-1];
            int number2 = nums1[nums1.size()/2];
            std::cout << number1 << "&" << number2 << std::endl;
            median = (number1 + number2)/2.0;
        }
        std::cout << median << std::endl;
        return median;
    }
};