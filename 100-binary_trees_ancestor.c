#include "binary_tress.h"

/**
 * binary_tree_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor and
 * if no common ancestor NULL
 */

binary_tree_t *binary_trees_ancestor(
		const binary_tree_t *first, const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);
	if (first->parent != NULL && second->parent != NULL &&
			first->parent == second->parent)
		return (first->parent);
	return (binary_trees_ancestor(first->parent, second->parent));
}
