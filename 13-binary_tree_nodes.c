#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree
 * Return: the number of leaves
 * If tree is NULL, the function must return 0
 * A NULL pointer is not a node
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int nodes1 = 0, nodes2 = 0;

	if (tree == NULL)
		return (0);
	nodes1 = binary_tree_nodes(tree->left);
	nodes2 = binary_tree_nodes(tree->right);
	if (tree->left && tree->right)
		return (1 + nodes1 + nodes2);
	else if (tree->left != NULL || tree->right != NULL)
		return (1);
	else
		return (nodes1 + nodes2);
}
