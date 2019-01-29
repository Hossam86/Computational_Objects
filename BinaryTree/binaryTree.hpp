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
    binaryTree(const T &t = 0) : head(t), left(0), right(0) {}
};

#endif