class Solution(object):
    def trap(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        left, right = 0, len(height) - 1
        water = 0 
        curHeight = 0
        while left < right:
            curHeight = max(curHeight, min(height[left], height[right]))
            if height[left] < height[right]:
                water += curHeight - height[left]
                left += 1 
            else: 
                water += curHeight - height[right]
                right -= 1
        return water

        