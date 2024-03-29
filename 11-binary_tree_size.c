#include "binary_trees.h"

/**
 * binary_tree_size - calculates the height of a binary tree from a given node
 * @tree: pointer to a node of the tree
 * Return: size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size = 0, right_size = 0;
	size_t total_size = 0;

	if (tree == NULL)
		return (0);

	left_size = binary_tree_size(tree->left);
	right_size  = binary_tree_size(tree->right);
	total_size = left_size + right_size + 1;
	return (total_size);
}
