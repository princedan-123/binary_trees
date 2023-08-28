#include "binary_trees.h"

/**
 * binary_tree_node - creates a newnode
 *
 * @parent: a pointer to the parent node
 * @value: the data to be inserted into the newnode
 * Return: a pointer to the node is returned else null is returned
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;
	return (newnode);
}
