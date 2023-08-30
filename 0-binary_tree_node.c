#include "binary_trees.h"

/*
 * binary_tree_node: creates a binary tree node
 * parent: pointer to parent ode that is created
 * value: one that will be stored in new nodeec reated
 * Return: newnode
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;
	
	newnode = (binary_tree_t*)malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return NULL;

	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;

	return(newnode);
}
