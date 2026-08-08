class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // use hashmap to count the frequent elements
        // append them in an array and sort it
        // return the kth element

        unordered_map<int, int> freq;
        for(int i = 0; i< nums.size();i++){
            freq[nums[i]]++;
        }
        vector<pair<int,int>> arr;
        for(auto& it: freq){
            arr.push_back({it.second, it.first});
        }
        sort(arr.rbegin(),arr.rend());
        vector<int> ans;
        for(int i = 0; i< k; i++){
            ans.push_back(arr[i].second);

        }
        return ans;
    }
};
