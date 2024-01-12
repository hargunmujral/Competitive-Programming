class Solution(object):
    def canCompleteCircuit(self, gas, cost):
        """
        :type gas: List[int]
        :type cost: List[int]
        :rtype: int
        """
        n = len(gas)
        diffs = [gas[i] - cost[i] for i in range(n)]
        if sum(diffs) < 0: 
            return -1
        start = 0 
        numsum = 0
        i = 0
        while start < n:
            # print(start, numsum, i)
            if i==n-1:
                return start
            numsum += diffs[(start + i) % n]
            i += 1
            if numsum <= 0:
                start = start + i
                numsum = 0
                i = 0

        return -1

    #    Gas: 2 4 3 1 2 8
    #   cost: 1 4 1 2 4 2

    #     2 -> 
    #     2 + 4-4 = 2 ->
    #     2 + 3-1 = 4 ->
    #     4 - 2 = 2 

    #     1 ->


#     G 1 8 2 
#     C 4 3 3
#     D -3 5 -1

# ->  5 - 1 - 3 = 1 
#     -1 -3 + 5 