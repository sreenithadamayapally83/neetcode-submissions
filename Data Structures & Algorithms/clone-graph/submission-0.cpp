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
// if input is null, return nullptr
//create a map to store original nodes -> cloned nodes
//start DFS from given node:
    //if node is already in map return its clone
    // create new node and store in map
    //recursively clone all neighbors and add them to clone's neighbor list.
// return cloned node corresponding to the starting node

class Solution{
public:
    Node* cloneGraph(Node* node){
        map<Node*, Node*> oldToNew;
        return dfs(node,oldToNew);
    }
    Node* dfs(Node* node, map<Node*,Node*>& oldToNew){
        if(node == nullptr){
            return nullptr;
        }
        if(oldToNew.count(node)){
            return oldToNew[node];
        }
        Node* copy = new Node(node->val);
        oldToNew[node] = copy;

        for(Node* n: node->neighbors){
            copy->neighbors.push_back(dfs(n,oldToNew));
        }
        return copy;
    }
};
