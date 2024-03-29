#include "binary_trees.h" 

/**
 * tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure height  
 *
 * Return: If tree is NULL, return 0. Else return the height.
 */
int tree_height(const binary_tree_t *tree)
{
	int h_left, h_right;

	if (tree == NULL)
		return (0);

	h_left = tree_height(tree->left);
	h_right = tree_height(tree->right);

	if (h_left >= h_right)
		return (h_left + 1);

	return (h_right + 1);
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: A pointer to the root node of the tree to measure balance
 *
 * Return: 0 if tree is NULL, else the balance factor
 */ 
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = tree_height(tree->left);
	right = tree_height(tree->right);

	return (left - right);
}

