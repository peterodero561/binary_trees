#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: The height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	return ((height_left > height_right ? height_left : height_right) + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root of the tree to count the number of leaves
 * Return: 0 is tree is NULL else No of leaves
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t lr, ll;

	if (tree == NULL)
		return (0);
	lr = binary_tree_height(tree->right);
	ll = binary_tree_height(tree->left);
	return ((int)(ll - lr));
}
