#include <iostream>
#include <string>

using namespace std;

//Aimar
//Ahmad
//Anjana (delete this)

//Ali (insert Ali here)

//Jessy

// and then last display all 

//make class instead of struct 

struct Node {
    string name;
    Node* next; //memory address of the next node
};

int main() {
    // Node node1, node2, node3; //cannot use this because this is sharing the same address
    Node* node1 = new Node(); //Node() is new node address, not the node itself
    Node* node2 = new Node();
    Node* node3 = new Node();

    node1->name = "Ali";
    node1->next = node2; //memory address of node2
    node2->name = "Ahmet";
    node2->next = node3; //memory address of node3
    node3->name = "Ayse";
    node3->next = nullptr; //end of the list

    //traverse 
    Node* current = node1;
    while (current != nullptr) {
        cout << current->name << endl;
        current = current->next;
    }

    //pick by number 
    Node* arr[] = {node1, node2, node3};
    int choice;
    cout << "Enter 1-3 to print the name:" << endl;
    cin >> choice;
    cout << arr[choice - 1]->name << endl; 
    // because arr[3-1] = arr[2] = &node3.

    // Node nodes[] = {node1, node2, node3};

    int current = 0;
    while (current != -1) {
        cout << current->name << endl;
        current = current->next;
    }
    //insert 

    //delete 

    //display linkedlist

    
}

