#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the number of nodes with atleast one child
 * @tree: pointer to the tree
 * Return: number of nodes with at least 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);

	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return ((tree->left || tree->right) ? nodes + 1 : nodes);
}
