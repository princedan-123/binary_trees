#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_trees_ancestor - finds the lowest common ancestor
 * @first: first node
 * @second: second node
 *
 * Return: pointer to lowest ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);

	const binary_tree_t *temp = first;

	while (temp)
	{
		if (temp == second)
			return ((binary_tree_t *)temp);

		temp = temp->parent;
	}

	temp = second;

	while (temp)
	{
		if (temp == first)
			return ((binary_tree_t *)temp);

		temp = temp->parent;
	}

	while (first)
	{
		const binary_tree_t *second_temp = second;

		while (second_temp)
		{
			if (first == second_temp)
				return ((binary_tree_t *)first);

			second_temp = second_temp->parent;
		}

		first = first->parent;
	}

	return (NULL);
}
