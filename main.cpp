#include <iostream>
#include "RedBlackTree.h"
using namespace std;
int main()
{
    RBTree tree;
    tree.insert(15);
    tree.insert(35);
    tree.insert(25);
    tree.insert(55);
    tree.insert(45);
    tree.insert(85);
    tree.insert(95);
    tree.insert(65);
    tree.insert(75);

    tree.printInOrder();
    cout << "\n\n*Deleting 55*\n";
    tree.deleteByVal(55);

    tree.printInOrder();

    cout << "\n\n*Deleting 45*\n";
    tree.deleteByVal(45);

    tree.printInOrder();

    cout << "\n\n*Deleting 85*\n";
    tree.deleteByVal(85);

    tree.printInOrder();

    cout << "\n\n*Deleting 95*\n";
    tree.deleteByVal(95);

    tree.printInOrder();
}