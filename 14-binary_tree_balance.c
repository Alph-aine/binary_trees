#include "binary_trees.h"

/**
 * binary_tree_balance - finds the balance factor of a tree
 * @tree: pointer to the root of the tree
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;
	int balance = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_height = binary_tree_balance(tree->left) + 1;
	if (tree->right)
		right_height = binary_tree_balance(tree->right) + 1;

	if (!tree->left && !tree->right)
		return (0);
	else if (!tree->left)
		return (-1 - right_height);
	else if (!tree->right)
		return (left_height - 1);

	balance = left_height - right_height;
	return (balance);
}
