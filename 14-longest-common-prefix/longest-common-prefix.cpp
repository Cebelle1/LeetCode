class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";

        string prefix = strs[0]; //get the base comparison
        for(int i=1; i<strs.size(); i++){
            //checks if prefix appears the beginning. 
            // using strs[i].npos checks if prefix appears anywhere in the string
            while(strs[i].find(prefix) != 0){ 
                prefix = prefix.substr(0, prefix.length()-1);
            }   
        }
        return prefix;
    }
};