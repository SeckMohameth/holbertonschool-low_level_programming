#include "binary_trees.h"


/**
 *
 *
 *
 **/

int isBalanced(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (-1);

	left = isBalanced(tree->left) + 1;
	right = isBalanced(tree->right) + 1;

	if (left > right)
		return (left);
	else
		return (right);

}



/**
 * binary_tree_balance - measures balance factor of a binary tree
 * @tree: tree to get the balance of
 *
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{

	int left, right;


	if (tree == NULL)
		return (0);


	left = isBalanced(tree->left);
	right = isBalanced(tree->right);

	return (left - right);

}
