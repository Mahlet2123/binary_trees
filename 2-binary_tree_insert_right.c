#include "binary_trees.h"

/**
 * binary_tree_insert_right- inserts a node as the right-child of another node
 *
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: a pointer to the created node,
 * or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newrightnode = NULL;

	if (parent == NULL)
		return (NULL);
	newrightnode = malloc(sizeof(binary_tree_t));
	if (newrightnode == NULL)
		return (NULL);
	newrightnode->n = value;
	newrightnode->parent = parent;
	newrightnode->left = NULL;
	newrightnode->right = NULL;
	if (parent->right)
	{
		newrightnode->right = parent->right;
		parent->right->parent = newrightnode;
	}
	parent->right = newrightnode;
	return (newrightnode);
}
