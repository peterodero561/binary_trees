#include "binary_trees.h"

/**
 * binary_tree_is_bst - checks if a binary tree is a valid
 * binary search tree
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is bst else 0, also 0 if tree is NULL
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left->n > tree->n || tree->right->n < tree->n)
		return (1);
	return (binary_tree_is_bst(tree->left) || binary_tree_is_bst(tree->right))
}
