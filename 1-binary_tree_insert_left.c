#include "binary_trees.h"

/**
 * binary_tree_node - creates a newnode
 *
 * @parent: a pointer to the parent node
 * @value: the data to be inserted into the newnode
 * Return: a pointer to the node is returned else null is returned
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;
	if (parent == NULL)
		return (NULL);
	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
		parent->left = newnode;
	}
	else if (parent->left == NULL)
		parent->left = newnode;
	return (newnode);
}
