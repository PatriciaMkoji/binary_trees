#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of the node
 * @node: pointer to the node to find the sibling from
 * Return: NULL if parent is nul or node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	else
		return (node->parent->left);
}
