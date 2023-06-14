#include <iostream>
using namespace std;
struct Node 
{int data;
  Node* next;
};
void initNode(struct Node *head,int n)
{head->data = n;   
  head->next =NULL;
}
void addNode(struct Node *head, int n) 
{ Node *newNode = new Node;
   newNode->data = n;
   newNode->next = NULL;
	Node *cur = head;
	while (cur) 
         { if(cur->next == NULL) 
                   { cur->next = newNode;
	            return;
		}
		cur = cur->next;
	}
}
void insertFront(struct Node **head, int n) 
{ Node *newNode = new Node;
   newNode->data = n;
   newNode->next = *head;
  *head = newNode;
 }
struct Node *searchNode(struct Node *head, int n) 
   { Node *cur = head;
      while (cur) 
        { if(cur->data == n) {cout<<"Node " << n << " is in list"<<endl; return cur;} 
           cur = cur->next;
         }
       cout << "No Node " << n << " in list"<<endl;
    }
bool deleteNode(struct Node **head, Node *ptrDel)
       { Node *cur = *head;
	if (ptrDel == *head) 
                    { *head = cur->next;
		   delete ptrDel;
		    return true;
	            }
	while (cur) 
           { if (cur->next == ptrDel) 
                   { cur->next = ptrDel->next;
	            delete ptrDel;
		  return true;
		}
	    cur = cur->next;
	  }
	return false;
}

void display (struct Node *head) 
 { Node *list = head;
    while (list) 
        { cout << list->data << " ";
	 list = list->next;
	}
     cout << endl;
  }
int main() 
{
	struct Node *head = new Node;
	initNode(head,10);
	addNode(head,20);
	addNode(head,30);
	addNode(head,35);
	addNode(head,40);
          display(head); 
	insertFront(&head,5);
          display(head);
          searchNode(head,30);      
	int numDel = 5;
	Node *ptrDelete = searchNode(head,numDel);
	if (deleteNode (&head,ptrDelete)) 
		cout << "Node "<< numDel << " deleted"<<endl;
	display(head);
	return 0;
}

