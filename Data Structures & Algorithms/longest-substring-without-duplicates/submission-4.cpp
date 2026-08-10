class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> sett;
        int l = 0;
        int res = 0;
        

        for(int r = 0; r < s.size(); r++){
            while(sett.find(s[r]) != sett.end()){
                sett.erase(s[l]);
                l++;
            }
            sett.insert(s[r]);
            res = max(res, r - l + 1);
        }
        return res;
    }
};
