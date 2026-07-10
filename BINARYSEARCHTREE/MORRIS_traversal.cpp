#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val) {
        this ->val = val;
        left = right = NULL;
    }
};

Node* createTree(vector<int> &arr) {
    Node* root = new Node(arr[0]);
    int i = 1;
    int j = 2;
    queue <Node*> q;
    q.push(root);
    int n = arr.size();
    while (!q.empty() && i < n) {
        Node* temp = q.front();
        q.pop();
        if(arr[i]) temp -> left = new Node(arr[i]);
        else temp->left = NULL;
        if(j < n && arr[j]) temp -> right = new Node(arr[j]);
        else temp -> right = NULL;
        if(temp->left) q.push(temp->left);
        if(temp -> right) q.push(temp -> right);
        i += 2;
        j += 2;
    }
    return root;
}
 void inorder (Node* root) {
        if (root == NULL) return;
        inorder (root -> left);
        cout << root -> val << " ";
        inorder (root -> right);
    }
int main() {
    vector <int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Node* root = createTree (arr);
    Node* curr = root;
    while (curr) {
        // steps to follow are : we know inorder traversal includes Left Root Right
        // 1) if case aisa rha there's no left so we just print the root and move towards the right of root
        if (!curr ->left) {
            cout << curr -> val <<" ";
            curr = curr -> right;
        }
        else {
            // find the predecessor of the curr root
            Node* pred = curr -> left;
            while (pred -> right && pred ->right != curr) {
                pred = pred -> right;
            }
            // linking 
            if (pred -> right== NULL) {
            pred -> right = curr;
            curr = curr -> left;
            }
            //delinking
            else {
                pred -> right = NULL;
                cout << curr -> val <<" ";
                curr = curr -> right;
            }
        }
    }
    cout << endl;
    inorder (root);
   
}