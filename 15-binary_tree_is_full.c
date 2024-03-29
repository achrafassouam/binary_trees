#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: If tree is NULL, return 0.
 *         Otherwise, return 1 if the tree is full, 0 if not.
 *
 * A full binary tree is defined as a tree where every node has 
 * either 0 or 2 children (no nodes have only 1 child).
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && 
				binary_tree_is_full(tree->right));

	return (0); 
}

