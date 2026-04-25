class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, bool> hash; // key: 원소값, value: 원소값이 이미 있는가?

        for(int i = 0; i < size(nums); i++) {
            /* 원소값이 이미 있으면 true 리턴 */
            if(hash[nums[i]] == true)
                return true;
            else
                hash[nums[i]] = true;
        }
        return false;
    }
};