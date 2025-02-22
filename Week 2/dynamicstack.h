template <class ItemType>
class Stack{
    public:
    Stack();
    Stack(int max);
    ~Stack();
    int IsEmpty() const;
    int IsFull() const;
    void Push (ItemType& new item);
    void Pop(ItemType& item);
    ItemType Peek() const;
    bool isValidParentheses(const string& expression);
    string infixToPostfix(const string& infix);
    int evaluatePostfix(const string& postfix);
    public:
    int top;
    int maxStack;
    ItemType* items;
};