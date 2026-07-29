class Solution {
public:
    bool isPalindrome(string s) {
        
        string filtered = "";
        for( char c: s){
            if(isalnum(c)) filtered += tolower(c);

        }
        string copy = filtered;
        reverse(copy.begin(), copy.end());
        if(filtered == copy) return true;
        else return false;

    }
};
