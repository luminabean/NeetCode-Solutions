class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freqMap;  // <숫자, 등장 횟수>

        /* 배열을 순회하면서 해시맵 채우기 */
        for(int i=0; i<size(nums); i++)
           freqMap[nums[i]]++;

        int result = 0;
        int maxCount = 0;
        for(auto const& [val, count] : freqMap) {
            if(count > maxCount) {
                maxCount = count;
                result = val;
            }
        }
        return result;
    }
};