class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        //vector<int> ans = new int[size(nums)*2];
        int sz = size(nums);

        for(int i = 0; i < sz; i++)
            nums.push_back(nums[i]);
    
        return nums;
    }
};