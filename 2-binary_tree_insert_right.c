#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the left child of
 * another node
 * @parent: is a pointer to the node to insert the left child in
 * @value: is the value to store in the new node
 * Return: pointer to the newly created node or NULL on failure
 * or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL || value == '\0')
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = NULL;
	if (parent->right == NULL)
		parent->right = new;
	else
	{
		new->right = parent->right;
		new->right->parent = new;
		parent->right = new;
	}
	return (new);
}
