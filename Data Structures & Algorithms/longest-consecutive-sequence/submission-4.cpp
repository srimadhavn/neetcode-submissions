class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int current_streak = 1;
        int longest_streak = 1;
        if(nums.empty()) return 0;
        for(int i = 0; i< nums.size()-1; i++){
            if(nums[i] == nums[i+1]) continue;
            if(nums[i + 1] - nums[i] == 1 ){
                current_streak++;
            }
            else{
                current_streak = 1;
            }
            longest_streak = max(longest_streak, current_streak);
        }
        return longest_streak;
    }
};
