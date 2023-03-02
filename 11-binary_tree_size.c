#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: the size
 * If tree is NULL, the function must return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int size_1 = 0, size_2 = 0;

	if (tree == NULL)
		return (0);
	size_1 = binary_tree_size(tree->left);
	size_2 = binary_tree_size(tree->right);
	return ((size_1 + size_2) + 1);
}
