#include "binary_trees.h"

/**
 * binary_tree_levelorder - goes thru a binary tree using level-order
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function call for each node.
 * The value in the node must be passed as a parameter to this function
 * Return: Nothing if tree or func is NULL
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_levelorder(tree->left, func);
	func(tree->left->n);
	binary_tree_levelorder(tree->right, func);
	func(tree->right->n);
}
