#include "binary_trees.h"

/**
 * binary_tree_postorder - visits each node in the tree using post-order
 *
 * @tree: a pointer to the root node
 * @func: a function pointer
 *
 * Return: nothing is returned
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
