class Solution {
public:
    int singleNumber(vector<int>& nums) {
       unordered_map<int, int> a;
       for(int n:nums){
        a[n]++;
       }
        for(pair<const int, int> z:a){
            if(z.second == 1)
            return z.first;
        }
       return -1;
    }
};