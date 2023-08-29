#include "binary_trees.h"

/**
 * binary_tree_preorder - transverses the tree using preorder method
 *
 * @tree: a pointer to the root
 *
 * @func: a function pointer
 *
 * Return: nothing is returned
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
