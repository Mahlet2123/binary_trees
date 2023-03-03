#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor node of the two given nodes
 * If no common ancestor was found, your function must return NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	binary_tree_t *a = (binary_tree_t *)first, *b = (binary_tree_t *)second;

	if (first == NULL || second == NULL)
		return (NULL);

	if (a == b)
		return (a);
	a = a->parent;
	b = b->parent;

	if (a == NULL || first == b || (!a->parent && b))
		return (binary_trees_ancestor(first, b));
	else if (b == NULL || second == a || (!b->parent && a))
		return (binary_trees_ancestor(second, a));

	return (binary_trees_ancestor(a, b));
}
