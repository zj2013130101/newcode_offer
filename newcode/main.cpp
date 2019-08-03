#include <iostream>
#include <string>
#include <regex>
#include <iomanip>
#include <assert.h>
#include <cstring>
#include <map>
#include <unordered_map>


#include "reconstruct_binary_tree_007.h"

using namespace std;


/**
 *
 * 中序遍历打印二叉树
 * @param rootNode
 */
void printTreeNode(TreeNode* rootNode)
{
    if(rootNode == nullptr)
        return;
    printTreeNode(rootNode->left);
    cout << rootNode->val << ", ";
    printTreeNode(rootNode->right);

}


int main() {

    vector<int> preArr = {1, 2, 4, 7, 3, 5, 6, 8};
    vector<int> InArr = { 4, 7, 2, 1,  5, 3, 8, 6};


//    TreeNode * tmp = Solution().reConstructBinaryTree(preArr, InArr);

    TreeNode *tmp2 = Solution().reConstructBinaryTree2(preArr, InArr);
    printTreeNode(tmp2);
}