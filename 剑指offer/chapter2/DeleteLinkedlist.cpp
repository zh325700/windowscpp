#include <iostream>
#include <stack>

using namespace std;

struct Linkedlist{
  int my_value;
  Linkedlist *next;
};

void deleteByvalue(Linkedlist **head, int value){
  if(head == NULL || *head == NULL){
    return;
  }
  Linkedlist *deleteNode = NULL;

  if((*head)->my_value == value){
    deleteNode = *head;
    *head = (*head)->next;
  }else{
    while((*head)->next != NULL && (*head)->next->my_value != value ){
        *head = (*head)->next;
    }
    if((*head)->next != NULL && (*head)->next->my_value == value){
      deleteNode = (*head)->next;
      (*head)->next = (*head)->next->next;
    }
  }

  if(deleteNode != NULL){
    delete (deleteNode);
    deleteNode = NULL;
  }
}

void printReverseLinkedlist(Linkedlist *head){
  if(head == NULL){
    return ;
  }
  if(head ->next != NULL){
    printReverseLinkedlist(head->next);
  }
  cout<<head->my_value<<endl;
}

int main(){

  stack<Linkedlist *> stk;
  Linkedlist *node1 = new Linkedlist(); node1->my_value =10;
  Linkedlist *node2 = new Linkedlist(); node2->my_value =11;
  Linkedlist *node3 = new Linkedlist(); node3->my_value =12;
  node1->next = node2;
  node2->next = node3;
  // deleteByvalue(&node1,11);

  cout<<"using stack:"<<endl;
  Linkedlist *tempnode = node1;
  while(tempnode != NULL){
    // cout<<node1->my_value<<endl;
    stk.push(tempnode);
    tempnode= tempnode->next;
  }

  while(!stk.empty()){
    cout<<stk.top()->my_value<<endl;
    stk.pop();
  }

  cout<<"now use recursion: "<<endl;
  printReverseLinkedlist(node1);
  return 0;
}
