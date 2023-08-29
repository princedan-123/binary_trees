#include "binary_trees.h"

/**
 *  binary_tree_size - evaluates size of a binary tree
 *
 *  @tree: a pointer to the root of the tree
 *
 *  Return: the size of the tree is returned
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (tree == NULL)
		return (0);
	if (tree != NULL)
	{
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);

}
