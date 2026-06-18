class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> sett;
        for (int num: nums){
            if(sett.count(num)) return true;        
            

            sett.insert(num);
        }
     return false;
        }
    
};
    