#include "binary_trees.h"

/**
 * binary_tree_depth - calculate the depth of a binary tree
 * @tree: pointer to the node of the tree
 * Return: depth of the node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	depth = binary_tree_depth(tree->parent) + 1;
	return (depth);
}
