#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a new node as the left child
 * of the given parent node in a binary tree
 *
 * @parent: Pointer to the parent node to insert the new node under
 * @value: Value to be stored in the new node
 *
 * Return: a pointer to the newly inserted node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	parent->left = new_node;

	return (new_node);
}
