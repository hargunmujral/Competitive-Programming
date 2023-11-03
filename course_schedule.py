class Solution(object):

    def cycle(self, num, seen, path, adj):
        if seen[num]:
            return False
        seen[num] = True
        path[num] = True
        for link in adj[num]:
            if path[link] or self.cycle(link, seen, path, adj):
                return True
        path[num] = False
        return False



    def canFinish(self, numCourses, prerequisites):
        """
        :type numCourses: int
        :type prerequisites: List[List[int]]
        :rtype: bool
        """
        adj = [[] for i in range(numCourses)]
        for pair in prerequisites:
            adj[pair[0]].append(pair[1])
        path = [False] * numCourses
        seen = [False] * numCourses
        for i in range(numCourses):
            if self.cycle(i, seen, path, adj):
                return False
        return True

        

        

        