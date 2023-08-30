#include "binary_trees.h"
/**
 * binary_tree_size - function that return the size of a tree
 * @tree: tree to check
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s = 0, b = 0, a = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		a = binary_tree_size(tree->left);
		b = binary_tree_size(tree->right);
		s = b + a + 1;
	}
	return (s);
}
