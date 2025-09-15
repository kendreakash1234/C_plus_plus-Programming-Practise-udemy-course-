#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node(int a){
        data = a;
        next = nullptr;
    }
};

class LinkedList{
    Node *head;

public:
    LinkedList(){
        head = nullptr;
    }
    LinkedList(int num){
        head = new Node(num);
    }
    void insertAtStart(int num){
        Node *newNode = new Node(num);
        if(head == nullptr){
            head = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }

    void insertAtend(int num){
        Node *newNode = new Node(num);
        if(head == nullptr){
            head  = newNode;
        }else{
            Node *temp = head;
            while(temp->next != nullptr){
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    void insertAfterNode(int afterValue, int num){
        Node *newNode = new Node(num);
        Node *temp = head;
        bool isPresent = false;
        while(temp->next != nullptr){
            if(temp->data == afterValue){
                isPresent = true;
                break;
            }
            temp = temp->next;
        }
        if(isPresent){
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    void insertBeforeNode(int beforeValue, int num){
        Node *newNode = new Node(num);
        Node *temp = head;
        bool isPresent = false;
        while(temp->next != nullptr){
            if(temp->next->data == beforeValue){
                isPresent = true;
                break;
            }
            temp = temp->next;
        }
        if(isPresent){
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    void deleteAtStart(){
        head = head->next;
    }

    void DeleteAfterValue(int val){
        Node *temp = head;
        bool isPresent = false;
        while(temp->next != nullptr){
            if(temp->data == val){
                isPresent = true;
                break;
            }
            temp = temp->next;
        }
        if(isPresent){
            temp->next = temp->next->next;
        }
    }

    void DeleteBeforeValue(int val){
        Node *temp = head;
        bool isPresent = false;
        while(temp->next != nullptr){
            if(temp->next->next->data == val){
                isPresent = true;
                break;
            }
            temp = temp->next;
        }
        if(isPresent){
            temp->next = temp->next->next;
        }
    }

    void deleteAtEnd(){
        Node *temp = head;
        while(temp->next->next!=nullptr){
            temp = temp->next;
        }
        temp->next = nullptr;
    }

    int findPsnNumInLL(int num){
        int count = 0;
        Node *temp = head;
        while(temp!=nullptr){
            if(temp->data == num){
                break;
            }else{
                temp = temp->next;
                count++;
            }
        }
        return count;
    }

    void display(){
        Node *temp = head;
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

};

int main()
{
    LinkedList l(2);
    l.insertAtStart(1);
    l.insertAtStart(0);
    l.insertAtend(6);
    l.insertAfterNode(2,3);
    l.insertAfterNode(3,4);
    l.insertBeforeNode(4,21);
    l.insertAfterNode(4,5);
    l.insertBeforeNode(6,11);
    cout<<"After Inserting ";
    l.display();
    cout<<"After deleting ";
    l.deleteAtStart();
    l.deleteAtEnd();
    l.DeleteAfterValue(3);
    l.DeleteBeforeValue(5);
    l.display();
    int findNum = 11;
    cout<<findNum<<" is present at "<<l.findPsnNumInLL(findNum)<<endl;
    return 0;
}
