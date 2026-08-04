class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> freq; 
        for(const auto& s : strs){
            string sortedS = s;
            sort(sortedS.begin(), sortedS.end());
            freq[sortedS].push_back(s);
        }
        vector<vector<string>> res;
        for(auto& x: freq){
            res.push_back(x.second);
        }
        return res;
    }               
};
