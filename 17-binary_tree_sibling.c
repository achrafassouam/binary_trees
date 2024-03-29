#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: A pointer to the node to find the sibling of
 *
 * Description:
 * Finds and returns a pointer to the sibling node of the given node,
 * or NULL if the node has no sibling or the node is NULL.
 * Checks if node has a parent, then checks if node is left or right
 * child of parent to determine sibling.
 *
 * Return: Pointer to sibling node, NULL if node has no sibling or invalid
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	else if (node == node->parent->right)
		return (node->parent->left);

	return (NULL);
}

