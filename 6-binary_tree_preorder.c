#include "binary_trees.h"

/**
 * binary_tree_preorder - Performs a preorder traversal of a binary tree
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A function to call for each node value
 *
 * Performs a preorder traversal of the binary tree pointed to by @tree by
 * calling @func for each node value. If @tree is NULL or @func is NULL,
 * nothing is done.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

