#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_is_complete - Checks if a binary tree is complete
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is complete, 0 otherwise
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int nodes_count = binary_tree_nodes(tree);

	return (check_complete(tree, 0, nodes_count));
}

/**
 * check_complete - Recursively checks if a binary tree is complete
 * @tree: Pointer to the current node being checked
 * @index: Index of the current node
 * @nodes_count: Total number of nodes in the entire binary tree
 *
 * Return: 1 if the subtree rooted at @tree is complete, 0 otherwise
 */

int check_complete(const binary_tree_t *tree, int index, int nodes_count)
{
	if (tree == NULL)
		return (1);

	if (index >= nodes_count)
		return (0);

	return ((check_complete(tree->left, 2 * index + 1, nodes_count) &&
		check_complete(tree->right, 2 * index + 2, nodes_count)));
}

/**
 * binary_tree_nodes - Counts the nodes in a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Number of nodes in the tree, 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right)));
}

