/* A binary tree node
struct Node
{
	int data;
	Node* left, * right;
}; */

class Solution {
	public:
	vector<int> diagonal(Node *root) {
		// code here
		// right ko print karna hai magar left ko push into queue
		queue<Node*> q;
		q.push(root);
		vector<int> ans;
		while (q.size())
			{
			auto node = q.front();
			q.pop();
			
			while (node)
				{
				ans.push_back(node -> data);
				if (node -> left)
					q.push(node -> left);
				node = node -> right;
			}
		}
		return ans;
		
	}
};
