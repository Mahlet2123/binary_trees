#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure balance factor
 * Return: balance factor
 * If tree is NULL, return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_side = 0, right_side = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left_side = binary_tree_balance(tree->left);
	right_side = binary_tree_balance(tree->right);

	if (left_side >= right_side)
		left_side = left_side + 1;
	else
		right_side = right_side + 1;

	printf("%d - %d\n", left_side, right_side);

	return (left_side - right_side);
}
