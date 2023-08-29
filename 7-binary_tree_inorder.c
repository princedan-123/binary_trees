#include "binary_trees.h"

/**
 * binary_tree_inorder - visits each node in the tree using in order method
 *
 * @tree: a pointer to the root node
 * @func: a function pointer
 *
 * Return: void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
