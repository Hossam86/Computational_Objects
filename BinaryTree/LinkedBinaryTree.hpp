#include <list>
typedef int Elem;
// template <class T>
class LinkedBinaryTree
{
  protected:
    struct Node
    {
        Elem elt;    //element value
        Node *par;   //parent
        Node *left;  //left child
        Node *right; //right child
        Node() : elt(), par(NULL), left(NULL), right(NULL) {}
    };

  public:
    class Position
    {

      private:
        Node *v; //pointer the node;
      public:
        Position(Node *_v = NULL) : v(_v) {} // constructor
        Elem &operator*() { return v->elt; } //operator overloading to access element data
        Position left() const                // access left child
        {
            return v->left;
        };
        Position right() const //access right child
        {
            return v->right;
        }
        Position parent() //access right child
        {
            return v->par;
        }
        bool isRoot() const //root of the tree?
        {
            return v->par == NULL;
        }
        bool isExternal() //an external node ?
        {
            return v->left == NULL && v->right == NULL;
        }
        // friend class LinkedBinaryTree;
    };
    typedef std::list<Position> PositionList; //list of posititions;
  public:
    LinkedBinaryTree();                              //constructor
    int size() const;                                //number of nodes;
    bool empty() const;                              //is tree empty;
    Position root() const;                           //get the root;
    PositionList Positions() const;                  //list of nodes;
    void addRoot();                                  //add root to empty tree
    void expandExternal(const Position &p);          //expand external node;
    Position removeAboveExternal(const Position &p); //remove p and parent

  protected:
    void preorder(Node *v, PositionList &pl) const;
    //node of tree

  private:
    Node *_root; // pointer to the root
    int n;       // number of nodes
};

LinkedBinaryTree::LinkedBinaryTree() : _root(NULL), n(0) {}
int LinkedBinaryTree::size() const { return n; }
bool LinkedBinaryTree::empty() const { return n == 0; }
LinkedBinaryTree::Position LinkedBinaryTree::root() const { return Position(_root); }
void LinkedBinaryTree::addRoot()
{
    _root = new Node;
    n = 1;
}