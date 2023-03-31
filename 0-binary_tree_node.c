#include "binary_trees.h"

/**
 * binary_tree_node-  creates a binary tree node
 * @parent: pointer to parent node
 * @value: value of the node
 * Return: pointer to a new node or null o failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root;


	if (!value)
		return (NULL);
	root = malloc(sizeof(binary_tree_t));
	if (root == NULL)
		return (NULL);
	root->n = value;
	root->left = NULL;
	root->right = NULL;

	if (parent == NULL)
		root->parent = NULL;
	else
		root->parent = parent;
	return (root);
}
