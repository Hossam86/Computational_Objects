
//Let us use the binary-tree object to solve the tower problem
#include "binaryTree.hpp"
#include "../Vector/vector.hpp"
// print binaryTree
template <class T>
void print(const binaryTree<T> &b)
{
    if (b.readLeft())
        print(*b.readLeft());
    print(b());
    if (b.readRight())
        print(*b.readright)
}
typedef vector<int, 2> move;
int main(int argc, char const *argv[])
{
    /* code */
    binaryTree<move> tower(16);
}
