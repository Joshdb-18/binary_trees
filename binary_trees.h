#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <limits.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

/* print function */
void binary_tree_print(const binary_tree_t *tree);

/* binary tree node func */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* binary tree insert left func */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* binary tree insert right func */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* binary tree delete func */
void binary_tree_delete(binary_tree_t *tree);

/* binary tree is leaf func */
int binary_tree_is_leaf(const binary_tree_t *node);

/* binary tree is root func */
int binary_tree_is_root(const binary_tree_t *node);

/* binary tree preorder func */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/* binary tree inorder func */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/* binary tree postorder func */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/* binary tree height func */
size_t binary_tree_height(const binary_tree_t *tree);

/* binary tree depth func */
size_t binary_tree_depth(const binary_tree_t *tree);

/* binary tree size func */
size_t binary_tree_size(const binary_tree_t *tree);

/* binary tree leaves func */
size_t binary_tree_leaves(const binary_tree_t *tree);

/* binary tree nodes func */
size_t binary_tree_nodes(const binary_tree_t *tree);

/* binary tree balance func */
int binary_tree_balance(const binary_tree_t *tree);

/* binary tree is full func */
int binary_tree_is_full(const binary_tree_t *tree);

/* binary tree is perfect func */
int binary_tree_is_perfect(const binary_tree_t *tree);

/* binary tree sibling func */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/* binary tree uncle func */
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

/* binary trees ancestors func */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second);

/* binary tree levelorder func */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));

/* binary tree is complete func */
int binary_tree_is_complete(const binary_tree_t *tree);

/* binary tree rotate left function */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);

/* binary tree rotate right function */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);

/* binary tree is bst function */
int binary_tree_is_bst(const binary_tree_t *tree);

/* binary tree bst insert function */
bst_t *bst_insert(bst_t **tree, int value);

/* array to bst function */
bst_t *array_to_bst(int *array, size_t size);

/* bst search function */
bst_t *bst_search(const bst_t *tree, int value);

/* helper functions */
void binary_tree_levelorder_helper(const binary_tree_t *tree,
				void (*func)(int), size_t level);
int binary_tree_is_complete_helper(const binary_tree_t *tree,
					size_t index, size_t size);
int binary_tree_is_bst_helper(const binary_tree_t *tree, int min, int max);

#endif /* _BINARY_TREES_H_ */

