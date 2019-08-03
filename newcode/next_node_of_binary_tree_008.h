//
// Created by joan on 19-7-19.
//

#ifndef OFFER_EXERCISE_NEXT_NODE_OF_BINARY_TREE_008_H
#define OFFER_EXERCISE_NEXT_NODE_OF_BINARY_TREE_008_H


/**
 * 给定一颗二叉树和一个节点，找到该节点在中序遍历下的下一个节点
 * 三种情况：
 *         (1). 该节点有右子节点，则下一个节点为右子节点的最左节点
 *         (2). 该节点没有右子节点且该节点为其父节点的左子节点，则下一个节点为其父节点
 *         (3). 该节点没有右子节点且该节点为其父节点的右子节点，则依次向上递归找到一个该节点属于左节点的父节点
 *
 */

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode *father;
    TreeNode(int x) :val(x), left(NULL), right(NULL){}
};







#endif //OFFER_EXERCISE_NEXT_NODE_OF_BINARY_TREE_008_H
