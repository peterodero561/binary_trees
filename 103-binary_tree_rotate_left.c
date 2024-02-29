#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 * Return: pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new, *temp;

	if (tree == NULL || tree->right == NULL)
		return (NULL);

	new = tree->right;
	temp = new->left;

	if (temp != NULL)
		temp->parent = tree;
	new->parent = tree->parent;
	tree->parent = new;
	return (new);
}
