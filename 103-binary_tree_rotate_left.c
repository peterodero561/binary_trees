#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 * Return: pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	if (tree == NULL || tree->right == NULL)
		return (NULL);
	new = tree->right;
	new->parent = NULL;
	new->left = tree;
	tree->parent = new;
	new->right = tree->right->right;
	new->right->parent = new;
	tree->right = tree->right->left;
	tree->right->parent = tree;
	return (new);
}
