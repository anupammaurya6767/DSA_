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

class Solution {
public:
    Node* dfs(Node* cur,unordered_map<Node*,Node*>& mp)
    {
        vector<Node*>neighbour;
        Node* copy = new Node(cur->val);
        mp[cur]=copy;
        
        for(auto i:cur->neighbors)
        {
            if(mp.find(i)!=mp.end())
            {
                neighbour.push_back(mp[i]);
            }else{
                neighbour.push_back(dfs(i,mp));
            }
        }
        
        copy->neighbors = neighbour;
        return copy;
    }
    Node* cloneGraph(Node* node) {
        unordered_map<Node*,Node*> mp;
        if(node==NULL)
            return NULL;
        if(node->neighbors.size()==0)   //if only one node present no neighbors
        {
            Node* clone= new Node(node->val);
            return clone; 
        }
        return dfs(node,mp);
    }
};