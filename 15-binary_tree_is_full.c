#include "binary_trees.h"

/**
 * binary_tree_is_full -  checks if a binary tree is a full tree
 *
 * @tree: a pointer to the root node
 *
 * Return: 0 if it is not full else 1 is returned
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full = 0, right_full = 0, full = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
		full = 1;
	else if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
	{
		left_full = binary_tree_is_full(tree->left);
		right_full = binary_tree_is_full(tree->right);
	}
	return (full = left_full && right_full);
}
