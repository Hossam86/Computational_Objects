#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <vector>
template <class T>
class binaryTree
{
private:
  T head;
  binaryTree *left;
  binaryTree *right;

  typedef std::vector<int, 2> move;

public:
  binaryTree(const T &t = 0) : head(t), left(0), right(0) {}                                                                              //default constructor
  binaryTree(const binaryTree &b) : head(b), left(b.left ? new binaryTree(*b.left) : 0), right(b.right ? new binaryTree(*b.right) : 0) {} //copy constructor
  const T &operator()() const { return head; }                                                                                            // head access
  const binaryTree *getLeft() const { return left; }
  const binaryTree *getRight() const { return right; }
  ~binaryTree()
  {
    delete left;
    delete right;
    left = right = 0;
  }

  binaryTree(int n, const move &m = move(1, 3));
};

#endif