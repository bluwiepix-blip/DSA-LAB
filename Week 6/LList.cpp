//#include <iostream>
//#include <cstdlib>  
//#include<conio.h>
//using namespace std;
//
//template <class ItemType>
//class List {
//protected:
//    struct node {
//        ItemType info;
//        struct node* next;
//    };
//    typedef struct node* NODEPTR;
//    NODEPTR listptr;
//
//public:
//    List();
//    ~List();
//    bool emptyList();
//    void insertafter(ItemType oldvalue, ItemType newvalue);
//    void push(ItemType newvalue);
//    void deleteItem(ItemType oldValue);
//    ItemType pop();
//};
//
//template<class ItemType>
//List<ItemType>::List() {
//    listptr = 0;
//}
//
//template <class ItemType>
//List<ItemType>::~List() {
//    NODEPTR p, q;
//    if (emptyList())
//        exit(0);
//    for (p = listptr;q=p->next;  p != 0; p = q , q=p->next){
//        delete p;
//    }
//}
//
//template<class ItemType>
//void List<ItemType>::insertafter(ItemType oldvalue, ItemType newvalue) {
//    NODEPTR p, q;
//    for (p = listptr; p != 0 && p->info != oldvalue; p = p->next);
//    if (p == 0) {
//        cout << "ERROR: value sought is not in the list.\n";
//        exit(1);
//    }
//    q = new node;
//    q->info = newvalue;
//    q->next = p->next;
//    p->next = q;
//}
//
//template<class ItemType>
//bool List<ItemType>::emptyList() {
//    return (listptr == 0);
//}
//
//template <class ItemType>
//void List<ItemType>::push(ItemType newvalue) {
//    NODEPTR p;
//    p = new node;
//    p->info = newvalue;
//    p->next = listptr;
//    listptr = p;
//}
//
//template <class ItemType>
//void List<ItemType>::deleteItem(ItemType oldValue) {
//    NODEPTR p, q;
//    for (p = listptr, q = 0; p && p->info != oldValue; q = p, p = p->next);
//    if (p == 0) {
//        cout << "ERROR: value sought is not in the list.\n";
//        exit(1);
//    }
//    if (q == 0) {
//        listptr = p->next;
//    }
//    else {
//        q->next = p->next;
//    }
//    delete p;
//}
//
//template <class ItemType>
//ItemType List<ItemType>::pop() {
//    NODEPTR p;
//    ItemType x;
//    if (emptyList()) {
//        cout << "ERROR: the list is empty";
//        exit(1);
//    }
//    p = listptr;
//    listptr = p->next;
//    x = p->info;
//    delete p;
//    return x;
//}
//
//int main() {
//    List<int> l;
//    l.push(87);
//    cout << l.pop() << endl;
//    return 0;
//}

//#include <iostream>
//#include <cstdlib>  
//using namespace std;
//
//template <class ItemType>
//class List {
//protected:
//    struct node {
//        ItemType info;
//        struct node* next;
//    };
//    typedef struct node* NODEPTR;
//    NODEPTR listptr;
//
//public:
//    List();
//    ~List();
//    bool emptyList();
//    void insertafter(ItemType oldvalue, ItemType newvalue);
//    void push(ItemType newvalue);
//    void deleteItem(ItemType oldValue);
//    ItemType pop();
//    void display();
//};
//
//template<class ItemType>
//List<ItemType>::List() {
//    listptr = 0;
//}
//
//template <class ItemType>
//List<ItemType>::~List() {
//    NODEPTR p, q;
//    if (emptyList())
//        return;
//    for (p = listptr; p != nullptr; p = q) {
//        q = p->next;
//        delete p;
//    }
//}
//
//template<class ItemType>
//void List<ItemType>::insertafter(ItemType oldvalue, ItemType newvalue) {
//    NODEPTR p, q;
//    for (p = listptr; p != nullptr && p->info != oldvalue; p = p->next);
//    if (p == nullptr) {
//        cout << "ERROR: value sought is not in the list.\n";
//        return;
//    }
//    q = new node;
//    q->info = newvalue;
//    q->next = p->next;
//    p->next = q;
//}
//
//template<class ItemType>
//bool List<ItemType>::emptyList() {
//    return (listptr == nullptr);
//}
//
//template <class ItemType>
//void List<ItemType>::push(ItemType newvalue) {
//    NODEPTR p;
//    p = new node;
//    p->info = newvalue;
//    p->next = listptr;
//    listptr = p;
//}
//
//template <class ItemType>
//void List<ItemType>::deleteItem(ItemType oldValue) {
//    NODEPTR p, q;
//    for (p = listptr, q = nullptr; p && p->info != oldValue; q = p, p = p->next);
//    if (p == nullptr) {
//        cout << "ERROR: value sought is not in the list.\n";
//        return;
//    }
//    if (q == nullptr) {
//        listptr = p->next;
//    }
//    else {
//        q->next = p->next;
//    }
//    delete p;
//}
//
//template <class ItemType>
//ItemType List<ItemType>::pop() {
//    if (emptyList()) {
//        cout << "ERROR: the list is empty.\n";
//        exit(1);
//    }
//    NODEPTR p = listptr;
//    ItemType x = p->info;
//    listptr = p->next;
//    delete p;
//    return x;
//}
//
//template <class ItemType>
//void List<ItemType>::display() {
//    if (emptyList()) {
//        cout << "List is empty.\n";
//        return;
//    }
//    NODEPTR p = listptr;
//    cout << "List contents: ";
//    while (p != nullptr) {
//        cout << p->info << " -> ";
//        p = p->next;
//    }
//    cout << "NULL";
//}
//
//int main() {
//    List<int> l;
//
//   
//    cout << "Pushing elements: 10, 20, 30\n";
//    l.push(10);
//    l.push(20);
//    l.push(30);
//    l.display();
//
//    cout << "Popping an element: " << l.pop() << endl;
//    l.display();
//
//    cout << "Inserting 25 after 10";
//    l.insertafter(10, 25);
//    l.display();
//
//    cout << "Deleting element 20";
//    l.deleteItem(20);
//    l.display();
//
//    cout << "Trying to delete 100 (not in list)";
//    l.deleteItem(100);
//    l.display();
//
//    return 0;
//}

//#include <iostream>
//#include <cstdlib>  
//using namespace std;
//
//template <class ItemType>
//class List {
//protected:
//    struct node {
//        ItemType info;
//        struct node* next;
//    };
//    typedef struct node* NODEPTR;
//    NODEPTR listptr;
//
//public:
//    List();
//    ~List();
//    bool emptyList();
//    void insertafter(ItemType oldvalue, ItemType newvalue);
//    void push(ItemType newvalue);
//    void deleteItem(ItemType oldValue);
//    ItemType pop();
//    void display();
//    void reverse(); 
//};
//
//template<class ItemType>
//List<ItemType>::List() {
//    listptr = nullptr;
//}
//
//template <class ItemType>
//List<ItemType>::~List() {
//    NODEPTR p, q;
//    if (emptyList())
//        return;
//    for (p = listptr; p != nullptr; p = q) {
//        q = p->next;
//        delete p;
//    }
//}
//
//template<class ItemType>
//void List<ItemType>::insertafter(ItemType oldvalue, ItemType newvalue) {
//    NODEPTR p, q;
//    for (p = listptr; p != nullptr && p->info != oldvalue; p = p->next);
//    if (p == nullptr) {
//        cout << "ERROR: value sought is not in the list.";
//        return;
//    }
//    q = new node;
//    q->info = newvalue;
//    q->next = p->next;
//    p->next = q;
//}
//
//template<class ItemType>
//bool List<ItemType>::emptyList() {
//    return (listptr == nullptr);
//}
//
//template <class ItemType>
//void List<ItemType>::push(ItemType newvalue) {
//    NODEPTR p;
//    p = new node;
//    p->info = newvalue;
//    p->next = listptr;
//    listptr = p;
//}
//
//template <class ItemType>
//void List<ItemType>::deleteItem(ItemType oldValue) {
//    NODEPTR p, q;
//    for (p = listptr, q = nullptr; p && p->info != oldValue; q = p, p = p->next);
//    if (p == nullptr) {
//        cout << "ERROR: value sought is not in the list.";
//        return;
//    }
//    if (q == nullptr) {
//        listptr = p->next;
//    }
//    else {
//        q->next = p->next;
//    }
//    delete p;
//}
//
//template <class ItemType>
//ItemType List<ItemType>::pop() {
//    if (emptyList()) {
//        cout << "ERROR: the list is empty.";
//        exit(1);
//    }
//    NODEPTR p = listptr;
//    ItemType x = p->info;
//    listptr = p->next;
//    delete p;
//    return x;
//}
//
//template <class ItemType>
//void List<ItemType>::display() {
//    if (emptyList()) {
//        cout << "List is empty.";
//        return;
//    }
//    NODEPTR p = listptr;
//    cout << "List contents: ";
//    while (p != nullptr) {
//        cout << p->info << " -> ";
//        p = p->next;
//    }
//    cout << "NULL\n";
//}
//
//template <class ItemType>
//void List<ItemType>::reverse() {
//    NODEPTR prev = nullptr, current = listptr, next = nullptr;
//    while (current != nullptr) {
//        next = current->next;
//        current->next = prev; 
//        prev = current;       
//        current = next;      
//    }
//    listptr = prev; 
//}
//
//int main() {
//    List<int> l;
//
//  
//    cout << "Pushing elements: 10, 20, 30, 40, 50";
//    l.push(10);
//    l.push(20);
//    l.push(30);
//    l.push(40);
//    l.push(50);
//    l.display();
//
//    
//    cout << "Reversing the list...";
//    l.reverse();
//    l.display();
//
//    return 0;
//}
 
