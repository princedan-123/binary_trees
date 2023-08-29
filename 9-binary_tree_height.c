#include "binary_trees.h"

/**
 * binary_tree_height - evaluates the height of a binary tree
 *
 * @tree: a pointer to the root node of the tree
 *
 * Return: the height is returned
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_left = 0, count_right = 0, height = 0;
	binary_tree_t *node_left = tree->left;
	binary_tree_t *node_right = tree->right;

	if (tree == NULL)
		return (0);
	while (node_left != NULL)
	{
		count_left++;
		node_left = node_left->left;
	}
	while (node_right != NULL)
	{
		count_right++;
		node_right = node_right->right;
	}
	if (count_left >= count_right)
		height = count_left;
	else
		height = count_right;
	return (height);
}
