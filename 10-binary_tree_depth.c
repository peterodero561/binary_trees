#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: 0 if tree is NULL else hieght
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t dep = 0, i = 0;
	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		dep += 1;
		tree = tree->parent;
		i += 1;
	}
	return (dep);
}
