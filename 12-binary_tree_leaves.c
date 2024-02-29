#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root of the tree to count the number of leaves
 * Return: 0 is tree is NULL else No of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t ll, lr;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL || tree->left == NULL)
		return (1);

	lr = binary_tree_leaves(tree->right);
	ll = binary_tree_leaves(tree->left);

	return (ll + lr);
}
