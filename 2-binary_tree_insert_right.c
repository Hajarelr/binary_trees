#include "binary_trees.h"
/**
 * binary_tree_insert_right - Function that inserts a node as the right-child
 * of another node
 * @parent: The pointer to the node to insert the right-child in
 * @value: The value to store in the new node
 * Return: The pointer to the newly created node or NULL on failure
 * or NULL if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *a;
if (!parent)
return (NULL);
a = malloc(sizeof(binary_tree_t));
if (!a)
return (NULL);
a->n = value;
a->parent = parent;
a->left = NULL;
a->right = parent->right;
parent->right = a;
if (a->right)
a->right->parent = a;
return (a);
}
