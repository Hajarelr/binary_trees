#include "binary_trees.h"
/**
 * binary_tree_node - Function that creates a binary tree node
 * @parent: The pointer to the parent node of the node to create
 * @value: The value to put in the new node
 * Return: Pointer to the newly created node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *a;
a = malloc(sizeof(binary_tree_t));
if (!a)
return (NULL);
a->n = value;
a->parent = parent;
a->left = NULL;
a->right = NULL;
return (a);
}
