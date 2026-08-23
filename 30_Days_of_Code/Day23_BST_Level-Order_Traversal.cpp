#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <queue>
#include <string>

using namespace std;

class Node {
public:
  int data;
  Node *left, *right;
  Node(int d) {
    data = d;
    left = right = NULL;
  }
};

class Solution {
public:
  Node *insert(Node *root, int data) {
    if (root == NULL) {
      return new Node(data);
    } else {
      Node *cur;
      if (data <= root->data) {
        cur = insert(root->left, data);
        root->left = cur;
      } else {
        cur = insert(root->right, data);
        root->right = cur;
      }
      return root;
    }
  }

  void levelOrder(Node *root) {
    // Write your code here
    std::queue<Node *> que;
    que.push(root);

    while (!que.empty()) {
      Node *cur = que.front();
      que.pop();
      std::cout << cur->data << " ";
      if (cur->left)
        que.push(cur->left);
      if (cur->right)
        que.push(cur->right);
    }

    std::cout << endl;
  }

}; // End of Solution

// How to build: g++ -std=c++17 -Wall -o Day23_BST_Level-Order_Traversal Day23_BST_Level-Order_Traversal.cpp
// How to run: ./Day23_BST_Level-Order_Traversal
int main() {
  Solution myTree;
  Node *root = NULL;
  int T, data;
  cin >> T;
  while (T-- > 0) {
    cin >> data;
    root = myTree.insert(root, data);
  }
  myTree.levelOrder(root);
  return 0;
}