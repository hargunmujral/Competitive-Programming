/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution
{
public:
    Node *cloneGraph(Node *node)
    {
        unordered_map<Node *, Node *> nodeMap;
        if (!node)
            return nullptr;
        return deepCopy(node, nodeMap);
    }
    Node *deepCopy(Node *node, unordered_map<Node *, Node *> &nodeMap)
    {
        if (nodeMap.find(node) != nodeMap.end())
            return nodeMap.at(node);
        Node *newNode = new Node(node->val);
        nodeMap.insert({node, newNode});
        for (Node *&i : node->neighbors)
        {
            newNode->neighbors.push_back(deepCopy(i, nodeMap));
        }
        return newNode;
    }
};