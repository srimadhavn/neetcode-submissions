class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> freqs;
        unordered_map<char , int> freqt;
        if(s.size() != t.size()) return false;
        
        for(char c: s){
            freqs[c]++;
        }

        for(char v : t){
            freqt[v]++;
        }

        return freqs == freqt;
     }
};
