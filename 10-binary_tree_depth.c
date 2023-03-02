#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in binary tree
 *
 * @tree: pointer to the node of the tree to measure the depth
 * Return: depth in number
 * tree is NULL, your function must return 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (tree == NULL)
		return (0);
	else if (tree->parent == NULL)
		return (0);
	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}
