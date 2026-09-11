class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        freq = {}
        n = len(nums)

        for i in nums:
            if i not in freq:
                freq[i] = 1
            else:
                freq[i] += 1
            if freq[i] > n // 2:
                return i

        