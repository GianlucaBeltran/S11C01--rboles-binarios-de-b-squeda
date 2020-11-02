#include "bst.h"

int main()
{
    BinarySearchTree<int> btree;
    btree.insert_node_recursive(12);
    btree.insert_node_recursive(7);
    btree.insert_node_recursive(4);
    btree.insert_node_recursive(2);
    btree.insert_node_recursive(9);
    btree.insert_node_recursive(8);
    btree.insert_node_recursive(11);
    btree.insert_node_recursive(21);
    btree.insert_node_recursive(16);
    btree.insert_node_recursive(19);
    btree.insert_node_recursive(25);
    btree.print_preorder();
    btree.recursive_variant_one();
    btree.tree_depth();
    btree.recursive_variant_two();
    btree.printLevelOrder(btree.root);

    return 0;
}