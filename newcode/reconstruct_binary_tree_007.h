//
// Created by joan on 19-7-19.
//

#ifndef OFFER_EXERCISE_RECONSTRUCT_BINARY_TREE_H
#define OFFER_EXERCISE_RECONSTRUCT_BINARY_TREE_H

#include <vector>
using namespace std;

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) :val(x), left(NULL), right(NULL){}
};



class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) {
        if(pre.empty() or vin.empty())
            return nullptr;
        int rootVal = pre[0];
        vector<int> leftVin;
        auto pos = vin.cbegin();
        for(; pos!= vin.cend() && *pos != rootVal; ++pos)
        {
            leftVin.push_back(*pos);
        }
        vector<int> rightVin(++pos, vin.cend());

        vector<int> leftPre;
        vector<int> rightPre;
        for(int i=1; i <= leftVin.size(); i++)
        {
            leftPre.push_back(pre[i]);
        }
        for(int i=leftPre.size()+1; i < pre.size(); i++)
        {
            rightPre.push_back(pre[i]);
        }

        TreeNode* rootNode = new TreeNode(rootVal);
        rootNode->left = reConstructBinaryTree(leftPre, leftVin);
        rootNode->right = reConstructBinaryTree(rightPre, rightVin);
        return rootNode;
    }


    /*second way*/
    TreeNode* reConstructBinaryTree2(vector<int> pre, vector<int> vin) {
        return reConstructBinaryTree2Core(pre, 0, pre.size()-1, vin, 0, vin.size()-1);
    }

    TreeNode* reConstructBinaryTree2Core(vector<int>& pre, int preStart, int preEnd,
            vector<int>& vin, int vinStart, int vinEnd){
        if(preStart > preEnd || vinStart > vinEnd)
            return nullptr;

        int rootVal = pre[preStart];
        cout << "current RootVal: " << rootVal << endl;
        TreeNode* rootNode = new TreeNode(rootVal);
        rootNode->left = rootNode->right = nullptr;

        int pos=vinStart;
        for(; pos <= vinEnd && vin[pos] != rootVal; pos++);

        rootNode->left = reConstructBinaryTree2Core(pre, preStart+1, preStart + pos-vinStart, vin, vinStart, pos-1);    //注意递归子问题的划分（界限的设定）
        rootNode->right = reConstructBinaryTree2Core(pre, preStart + pos-vinStart+1, preEnd, vin, pos+1, vinEnd);
        return rootNode;
    }
};


#endif //OFFER_EXERCISE_RECONSTRUCT_BINARY_TREE_H
