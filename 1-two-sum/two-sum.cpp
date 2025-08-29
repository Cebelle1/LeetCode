class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Two-pass hash table
        // Convert vector into hash map
        unordered_map<int, int> hash;
        for(int i=0; i< nums.size(); i++){
            // Since later .find(complement), should store nums[i] so .find() finds nums[i]
            hash[nums[i]] = i;
            //std::cout << nums[i]<< ":" << hash[nums[i]] << std::endl;
        }

        //Find the complement and check hash map in O(1)
        // This makes it O(n)
        for(int i=0; i< nums.size(); i++){
            int complement = target - nums[i];
            // Check if complement exists
            if(hash.find(complement) != hash.end() && hash[complement] != i){
                return {hash[complement], i};
            }
        }
        return {};
    }
};