#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: a pointer to the root
 *
 * Return: 1 if perfect else 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_count = 0, right_count = 0, perfect = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
		perfect = 1;
	if (tree->left != NULL && tree->right != NULL)
	{
		left_count = binary_tree_is_perfect(tree->left);
		right_count = binary_tree_is_perfect(tree->right);
	}
	return (perfect = left_count && right_count);
}
