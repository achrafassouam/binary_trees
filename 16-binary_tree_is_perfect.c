#include "binary_trees.h"

/**
 * tree_is_a_leaf - Checks if a node is a leaf
 * @node: Node to check
 *
 * Return: 1 if node is a leaf, 0 otherwise
 */
int tree_is_a_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}

/**
 * binary_tree_height - Measures height of a binary tree
 * @tree: Tree to measure height of
 *
 * Return: Height of the tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL || tree_is_a_leaf(tree))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height >= right_height)
		return (left_height + 1);

	return (right_height + 1);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Tree to check
 *
 * Return: 1 if perfect, 0 otherwise or if NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *left, *right;
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left = tree->left;
	right = tree->right;

	if (tree_is_a_leaf(tree))
		return (1);

	if (left == NULL || right == NULL)
		return (0);

	left_height = binary_tree_height(left);
	right_height = binary_tree_height(right);

	if (left_height == right_height)
	{
		if (binary_tree_is_perfect(left) && binary_tree_is_perfect(right))
			return (1);
	}

	return (0);
}

