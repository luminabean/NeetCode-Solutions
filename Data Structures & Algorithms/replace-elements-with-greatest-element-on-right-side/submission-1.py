class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        ans = [0] * len(arr)
        rightMax = -1

        # 마지막 인덱스부터 거꾸로 순회
        for i in range(len(arr)-1, -1, -1):
            ans[i] = rightMax
            rightMax = max(rightMax, arr[i])
        
        return ans