#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree
 * Return: 1 if full , 0 if not
 * If tree is NULL, your function must return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_perfect(tree->left) == binary_tree_is_perfect(tree->right))
		return (1);
	return (0);
}
