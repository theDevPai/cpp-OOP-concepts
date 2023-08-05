#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

struct LinkedList {
    Node* head;

    LinkedList() : head(nullptr) {}

    // Insert a new element at the end of the linked list
    void insert(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Delete the first occurrence of an element in the linked list
    void remove(int value) {
        if (head == nullptr) {
            cout << "List is empty. Nothing to remove." << endl;
            return;
        }

        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* current = head;
        while (current->next != nullptr) {
            if (current->next->data == value) {
                Node* temp = current->next;
                current->next = current->next->next;
                delete temp;
                return;
            }
            current = current->next;
        }

        cout << "Element " << value << " not found in the list." << endl;
    }

    // Display the elements of the linked list
    void display() const {
        if (head == nullptr) {
            cout << "List is empty." << endl;
        } else {
            Node* current = head;
            while (current != nullptr) {
                cout << current->data << "-> ";
                current = current->next;
            }
            cout << endl;
        }
    }

    // Destructor to free memory when the linked list object goes out of scope
    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList linkedList;

    linkedList.insert(10);
    linkedList.insert(20);
    linkedList.insert(30);

    linkedList.display(); // Output: 10 20 30

    linkedList.remove(20);

    linkedList.display(); // Output: 10 30

    return 0;
}
