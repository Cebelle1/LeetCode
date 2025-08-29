class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Two-pass hash table
        // Convert vector into hash map
        unordered_map<int, int> hash;
        //While iterating, lets compute also
        for(int i=0; i< nums.size(); i++){
            int complement = target - nums[i];
            if(hash.find(complement) != hash.end()){
                return {hash[complement], i};
            }
            hash[nums[i]] = i;
            //std::cout << nums[i]<< ":" << hash[nums[i]] << std::endl;
        }

        return {};
    }
};