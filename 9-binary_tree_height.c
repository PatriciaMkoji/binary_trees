#include "binary_trees.h"

size_t max_value(size_t a, size_t b);

/*
 * binary_tree_height: measures the height of a binary tree
 * @tree: pointer that points to the node of the root
 * Returns: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return(0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (max_value(left_height, right_height) + 1);
}
/*
 * max-value: compares the two values and picks out the max value
 * @a: 1st value to be compared
 * @b: 2nd value to be compared
 * Returns: max value
 */
size_t max_value(size_t a, size_t b)
{
	return ((a > b) ? a : b);
}
