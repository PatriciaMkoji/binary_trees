#include "binary_trees.h"
/*
 * binary_tree_insert: inserts node on the left child of another node
 * @parent: pointer to the node to insert the left child
 * @value: value to store in new node
 * Return: newnode inserted
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;
	
	if (parent == NULL)
		return(NULL);

	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return(NULL);

	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;

	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left = newnode;
	}

	newnode->parent = parent;
	parent->left = newnode;

	return(newnode);
}
