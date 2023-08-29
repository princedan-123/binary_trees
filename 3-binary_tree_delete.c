#include "binary_trees.h"

/**
 * binary_tree_delete -  deletes the entire binary tree
 * 
 * @tree: a pointer to the root node
 *
 * Return: nothing is returned
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
