#ifndef BINARYTREE_H
#define BINARYTREE_H

#include "../Vector/vector.hpp"

template<class T>
class Binary_Tree {
private:
    T head;
    Binary_Tree *left;
    Binary_Tree *right;

    typedef vector<int, 2> move;

public:
    Binary_Tree(const T &t = 0) : head(t), left(0),
                                  right(0) {}                                                                              //default constructor
    Binary_Tree(const Binary_Tree &b) : head(b), left(b.left ? new Binary_Tree(*b.left) : 0),
                                        right(b.right ? new Binary_Tree(*b.right) : 0) {} //copy constructor
    const T &
    operator()() const { return head; }                                                                                            // head access
    const Binary_Tree *getLeft() const { return left; }

    const Binary_Tree *getRight() const { return right; }

    ~Binary_Tree() {
        delete left;
        delete right;
        left = right = 0;
    }

    //tower constructor
    Binary_Tree(int n, const move &m = move(1, 3)) : head(m), left(0), right(0) {
        if (n > 1) {
            int empty = 1;
            while ((empty == head[0]) || (empty == head[1]))
                empty++;
            left = new Binary_Tree(n - 1, move(head[0], empty));
            right = new Binary_Tree(n - 1, move(empty, head[1]));
        }
    }
};

#endif