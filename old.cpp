#include <iostream>
#include <string>
using namespace std;
class Node{
    private:
        int value;
        Node* next_member =nullptr;
    public:
        Node(int value) : value(value){};
        void add_next_member(Node* ptr){
            next_member = ptr;
        }
        int get_value(){
            return value;
        }
        Node* get_next_member(){
            return next_member;
        }
};

class LinkedList{
    public:
    Node* first_elem = nullptr;
    LinkedList(Node* first_elem): first_elem(first_elem){};

    void insert(int p, int v) {
    Node* n_n = new Node(v);  // n_n - new node, v - value, p - position
    if (p == 0) {
        n_n->add_next_member(first_elem); // positioning as first node (works if List empty)  
        first_elem = n_n;  
        return;
    }

    Node* current = first_elem;
    for (int i = 0; current != nullptr && i < p - 1; i++) {
        current = current->get_next_member();  

    if (current != nullptr) {
        new_node->add_next_member(current->get_next_member());  
        current->add_next_member(new_node);  
    }
}
    void append(int v) {
    Node* n_n = new Node(v);  
    if (first_elem == nullptr) {
        first_elem = n_n;  
        return;
    }
}

    Node* current = first_elem;
    while (current->get_next_member() != nullptr) {
        current = current->get_next_member();  

    current->add_next_member(new_node);  
    push(int value)

void push(int value) {
    Node* new_node = new Node(value);  
    new_node->add_next_member(first_elem);  
    first_elem = new_node;
}
}
};

int main()
{
    Node* node0 = new Node(12);
    Node* node1 = new Node(123);
    node0 ->add_next_member(node1);
    LinkedList llist = LinkedList(node0);
    cout << llist.first_elem->get_value() << endl;
    cout << llist.first_elem->get_next_member()->get_value() << endl;

    LinkedList llist1 = LinkedList(new Node(-10));
    Node* member = llist1.first_elem;
    for(int i = 0; i<100; i++){
        member->add_next_member(new Node(i*10));
        member = member->get_next_member();
    }
member = llist1.first_elem;
for( int i = 0; i<100; i++){
    cout << member->get_value() << endl;
    member = member->get_next_member();
}
}