class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> store;

        for(int i=0; i<nums.size(); i++){
            int complement = target - nums[i];

            if(store.count(complement)){
                return {store[complement], i};
            }

            store[nums[i]] = i;
        }
        return {};
    }
};