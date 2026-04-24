class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        hash = [] # 원소값만 확인해도 되므로 List로 선언

        for i in nums:
            # 원소값이 hash에 있으면 True 리턴
            if i in hash:
                return True
            # 없으면 hash에 저장
            else:
                hash.append(i)
        return False
