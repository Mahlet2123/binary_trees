#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree
 * Return: the number of leaves
 * If tree is NULL, the function must return 0
 * A NULL pointer is not a leaf
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int leaves1 = 0, leaves2 = 0;

	if (tree == NULL)
		return (0);
	leaves1 = binary_tree_leaves(tree->left);
	leaves2 = binary_tree_leaves(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (leaves1 + leaves2);
}
