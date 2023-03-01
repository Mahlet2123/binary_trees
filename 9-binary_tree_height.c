#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height in number
 * tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_side = 0, right_side = 0;

	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (0);
	else
	{
		left_side = binary_tree_height(tree->left);
		right_side = binary_tree_height(tree->right);
	}
	if(left_side >= right_side)
		return (left_side + 1);
	else
		return (right_side + 1);
}
