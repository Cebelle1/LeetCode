class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        //sort array
        sort(nums.begin(), nums.end());
        //=========
        for(int n: nums){
            std::cout<< n << " " ;
        }
        std::cout << std::endl;
        //
        //find index of the number that is >k
        auto it = find(nums.begin(), nums.end(), k);
        
        //size of array-index
        if(it != nums.end()){
            std::cout << "index" << distance(nums.begin(), it) << std::endl;
            return distance(nums.begin(), it);
        }

        //if cant find
        //lets try O(n)
        int i=0;
        for(i=0; nums[i] < k; i++);
        return i;
        
    }
};