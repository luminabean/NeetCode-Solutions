class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int tmp = 0, ans = 0;

        for(int i = 0; i < nums.size(); i++) {
            /* nums[1]가 1이면 tmp를 1만큼 증가 */
            if(nums[i] == 1)
                tmp++;
            /* 아니라면 ans와 값을 비교하고, tmp를 0으로 초기화 */
            else {
                ans = max(tmp, ans);
                tmp = 0;
            }
        }
        /* */
        return max(tmp, ans);
    }
};