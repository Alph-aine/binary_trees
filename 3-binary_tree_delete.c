#include "binary_trees.h"

/**
 * binary_tree_delete- delete a whole binary tree
 * @tree: pointer to the binary tree
 * Return: none
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/* recursively delete left and right subtrees */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/* delete current node */
	free(tree);
}
