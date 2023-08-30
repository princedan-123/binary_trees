#include "binary_trees.h"

/**
 * binary_tree_balance - checks if a binary tree is balanced
 *
 * @tree: a pointer to the root node of the tree
 *
 * Return: the balance factor is returned
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor = 0, count_left = 0, count_right = 0;
	const binary_tree_t *left_child = NULL;
	const binary_tree_t *right_child = NULL;

	right_child = tree;
	left_child = tree;

	if (tree == NULL)
		return (0);
	while (left_child->left != NULL)
	{
		left_child = left_child->left;
		count_left++;
	}
	while (right_child->right != NULL)
	{
		right_child = right_child->right;
		count_right++;
	}
	balance_factor = count_left - count_right;
	return (balance_factor);

}
