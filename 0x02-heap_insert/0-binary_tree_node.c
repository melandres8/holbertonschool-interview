#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 *
 * @parent: Pointer to the parent node
 * @value: value
 * Return: pointer to the new node, or NULL on failure
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	/* allocate node */
	temp = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (temp == NULL)
	return (NULL);

	/* put in the data  */
	temp->n = value;
	temp->left = NULL;
	temp->right = NULL;
	temp->parent = parent;

	return (temp);
}
