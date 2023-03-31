#include "binary_trees.h"

/**
 * binary_tree_preorder- Goes through a tree using pre-order traversal
 * @tree: pointer to the root of the binary tree
 * @func: a pointer to the function to be called for each
 * Return: none
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree == NULL) || (func == NULL))
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
