
//Let us use the binary-tree object to solve the tower problem
#include "Binary_Tree.hpp"
#include "../Vector/vector.hpp"

// print Binary_Tree
template<class T>
void print(const Binary_Tree<T> &b) {
    if (b.readLeft())
        print(*b.readLeft());
    print(b());
    if (b.readRight())
        print(*b.readright)
}

typedef vector<int, 2> move;

int main(int argc, char const *argv[]) {
    /* code */
    Binary_Tree<move> tower(16);
}
