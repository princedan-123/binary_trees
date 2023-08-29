#include "binary_trees.h"

/**
 * binary_tree_insert_right - creates a newnode
 *
 * @parent: a pointer to the parent node
 * @value: the data to be inserted into the newnode
 * Return: a pointer to the node is returned else null is returned
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	if (parent == NULL)
		return (NULL);
	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		parent->right->parent = newnode;
		parent->right = newnode;
	}
	else if (parent->right == NULL)
		parent->right = newnode;
	return (newnode);
}
