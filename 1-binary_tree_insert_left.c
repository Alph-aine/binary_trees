#include "binary_trees.h"

/**
 * binary_tree_insert_left- adds an new node to the left of a parent node
 * @parent: pointer to the parent node
 * @value: value of the new node
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->left == NULL)
		parent->left = new_node;
	else
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
		parent->left = new_node;
	}
	new_node->parent = parent;
	return (new_node);

}
