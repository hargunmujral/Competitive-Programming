class Solution(object):
    maxVal = -1001

    def partialSum(self, node):
        if not node: 
            return 0
        left = max(0, self.partialSum(node.left))
        right = max(0, self.partialSum(node.right))
        self.maxVal = max(self.maxVal, node.val, node.val + left, node.val + right, node.val + left + right)
        return max(node.val, node.val + max(left, right))

    def maxPathSum(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        self.maxVal = -1001
        self.partialSum(root)
        return self.maxVal
        