#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a given node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle node OR NULL if node is NULL or
 * if node has no uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent->parent == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->parent->left != NULL &&
			node->parent->parent->left != node->parent)
		return (node->parent->parent->left);
	else if (node->parent->parent->right != NULL &&
			node->parent->parent->right != node->parent)
		return (node->parent->parent->right);
	else
		return (NULL);
}
