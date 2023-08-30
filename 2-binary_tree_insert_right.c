#include "binary_trees.h"
/*
 * binary_tree_insert_right:  inserts a node as the right-child of another node
 * @parent: pointer to tthe node to insert the right child
 * @value: value to be stored in new node
 * Return: newnode
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return(NULL);
	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return NULL;

	newnode->n = value;
	newnode->left = NULL;
	newnode->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = newnode;
	newnode->parent = parent;
	parent->right = newnode;

	return newnode;
}
