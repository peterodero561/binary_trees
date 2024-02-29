#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root of the tree to count the number of leaves
 * Return: 0 is tree is NULL else No of leaves
 */

int binary_tree_balnace(const binary_tree_t *tree)
{
	int lr = 0, ll = 0;
	binary_tree_t *new;

	if (tree == NULL)
		return (0);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (0);
	new = tree;
	while (tree)
	{
		tree = tree->left;
		ll += 1;
	}
	while (new)
	{
		new = new->right;
		lr += 1;
	}
	return (ll - lr);
}
