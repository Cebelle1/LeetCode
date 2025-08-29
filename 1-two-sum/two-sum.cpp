class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> results;
        for(int x=0; x< nums.size(); x++){
            //cout << vect << std::endl;
            for(int y=x; y<nums.size(); y++){
                if(x!=y && (nums[x] + nums[y] == target)){
                    results.push_back(x);
                    results.push_back(y);
                }
            }
        }
        return results;
    }
};