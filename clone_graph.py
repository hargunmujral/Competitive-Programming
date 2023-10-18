"""
# Definition for a Node.
class Node(object):
    def __init__(self, val = 0, neighbors = None):
        self.val = val
        self.neighbors = neighbors if neighbors is not None else []
"""

class Solution(object):
    def cloneGraphMem(self, node, visited):
        if node is None:
            return None
        graph = Node(node.val)
        visited[node.val] = graph
        for n in node.neighbors:
            if n.val in visited:
                graph.neighbors.append(visited[n.val])
            else:
                g = self.cloneGraphMem(n, visited)
                graph.neighbors.append(g)
        return graph
        
    def cloneGraph(self, node):
        """
        :type node: Node
        :rtype: Node
        """
        visited = {}
        return self.cloneGraphMem(node, visited)
        


        