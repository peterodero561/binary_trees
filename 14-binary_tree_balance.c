#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root of the tree to count the number of leaves
 * Return: 0 is tree is NULL else No of leaves
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int lr = 0, ll = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->left != NULL)
	{
		lr = binary_tree_balance(tree->right);
		ll = binary_tree_balance(tree->left);
		return (ll - lr);
	}
	else
	{
		return (binary_tree_balance(tree->left) - binary_tree_balance(tree->right));
        }
}
