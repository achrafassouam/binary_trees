#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node with parent and value
 * @parent: A pointer to the parent node, or NULL if the node has no parent
 * @value: The integer value to be stored in the new node
 *
 * Return: A pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
