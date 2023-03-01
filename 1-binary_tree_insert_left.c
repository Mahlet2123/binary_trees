#include "binary_trees.h"

/**
 * binary_tree_insert_left- inserts a node as the left-child of another node
 *
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: a pointer to the created node,
 * or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newleftnode = NULL;

	if (parent == NULL)
		return (NULL);
	newleftnode = malloc(sizeof(binary_tree_t));
	if (newleftnode == NULL)
		return (NULL);
	newleftnode->n = value;
	newleftnode->parent = parent;
	newleftnode->left = NULL;
	newleftnode->right = NULL;
	if (parent->left)
	{
		newleftnode->left = parent->left;
		parent->left->parent = newleftnode;
	}
	parent->left = newleftnode;
	return (newleftnode);
}
