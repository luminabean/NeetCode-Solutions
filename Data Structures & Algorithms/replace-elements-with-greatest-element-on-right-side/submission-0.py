class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        # 마지막 바로 전 인덱스까지 순회
        for i in range(len(arr)-1):
            arr[i] = max(arr[i+1:])
        
        # 마지막 원소는 -1로
        arr[-1] = -1
        
        return arr