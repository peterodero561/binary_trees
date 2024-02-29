#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a given node
 * @node: pointer to the node to find the sibling
 * Return: pointer to the sibling OR NULL if node or parent is NULL
 * OR NULL if node has no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left != node && node->parent->left != NULL)
		return (node->parent->left);
	else if (node->parent->right != node && node->parent->right != NULL)
		return (node->parent->right);
	else
		return (NULL);
}
