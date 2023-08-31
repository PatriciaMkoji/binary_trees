#include "binary_trees.h"

size_t max_value(size_t a, size_t b);

/*
 * binary_tree_depth: measures the depth of a node in a binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: returns depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);

}