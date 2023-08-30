#include "binary_trees.h"
/*
 * binary_tree_is_leaf: function that checks if a node is a leaf
 * @node: a pointer to the node to check
 * Return: 1 if its a leaf, 0 if its not/ node is empty
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return(0);

	if (node->left == NULL && node->right == NULL)
		return(1);
	else
		return(0);
}
