class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int current_streak = 1;
        int best_streak = 1;

        if (nums.size() == 0) return 0;
        for(int i =1; i< nums.size(); i++){
            if(nums[i] == nums[i-1]) continue;

            if(nums[i] == nums[i-1]+ 1){
                current_streak++;
            }
            else{
                current_streak = 1;
            }
            best_streak = max(best_streak, current_streak);
        }
        return best_streak;
    }
};
