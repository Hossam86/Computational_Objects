#ifndef BINARYTREE_H
#define BINARYTREE_H
template <class T>
class binaryTree
{
  private:
    T head;
    binaryTree *left;
    binaryTree *right;

  public:
    binaryTree(const T &t = 0) : head(t), left(0), right(0) {}                                                                         //default constructor
    binaryTree(const binaryTree &b): head(b), left(b.left ? new binaryTree(*b.left) : 0), right(b.right?new binaryTree(*b.right:0)) {} //copy constructor
};

#endif