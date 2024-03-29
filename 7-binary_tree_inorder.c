#include "binary_trees.h"

/**
 * binary_tree_inorder - Performs an inorder traversal of a binary tree
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A function to call for each node value
 *
 * Performs an inorder traversal of the binary tree pointed to by @tree,
 * calling @func for each node value. @func must be a valid function
 * that can handle node values of type int.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}

