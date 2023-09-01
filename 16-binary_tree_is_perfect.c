#include "binary_trees.h"

size_t max_value(size_t a, size_t b);

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 0 if tree is null
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	return ((height_left == height_right) &&
			(binary_tree_size(tree) == (size_t)((1 << height_left) - 1)));
}

/**
 * binary_tree_size -  measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer that points to the node of the root
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (max_value(left_height, right_height) + 1);
}

/**
 * max_value - compares the two values and picks out the max value
 * @a: 1st value to be compared
 * @b: 2nd value to be compared
 * Return: number of max value
 */
size_t max_value(size_t a, size_t b)
{
	return ((a > b) ? a : b);
}
