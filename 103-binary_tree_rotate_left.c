#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 * Return: pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (tree == NULL || tree->right == NULL)
		return (NULL);

	binary_tree_t *new_root = tree->right;
	binary_tree_t *temp = new_root->left;

	new_root->left = tree;
	tree->right = temp;
	if (temp != NULL)
		temp->parent = tree;
	new_root->parent = tree->parent;
	tree->parent = new_root;
	return (new_root);
}

