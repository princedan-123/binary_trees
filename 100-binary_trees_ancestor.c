#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_trees_ancestor - finds the lowest common ancestor
 * @first: first node
 * @second: second node
 *
 * Return: pointer to lowest ancestor
 */

binary_tree_t *binary_trees_ancestor
(const binary_tree_t *first, const binary_tree_t *second)
{
    if (!first || !second)
        return NULL;

    if (first == second)
        return (binary_tree_t *)first;

    return binary_trees_ancestor(first, second->parent);
}
