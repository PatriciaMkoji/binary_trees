#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle of node
 * @node: pointer to the node to find uncle
 * Return: NULL if node is null  or  node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	grandparent = node->parent->parent;

	if (grandparent->left == NULL || grandparent->right == NULL)
		return (NULL);

	if (node->parent == grandparent->left)
		return (grandparent->right);
	else
		return (grandparent->left);
}
