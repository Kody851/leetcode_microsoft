/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res;
        if(nums.empty()){
            return res;
        }
        int n = nums.size();
        unordered_map<int,int>hash;
        for(int i=0;i<n;i++){
            if(hash.find(target-nums[i])!=hash.end()){
                res.push_back(i);
                res.push_back(hash[target-nums[i]]);
            }
            hash[nums[i]] = i;
        }
        return res;
    }
};
// @lc code=end

