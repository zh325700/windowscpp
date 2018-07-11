#include <iostream>


using namespace std;

struct ListNode{
  int value;
  ListNode *next;
};

void deleteFromList(ListNode **head, ListNode *deleteone){
    if(deleteone->next == NULL){
      ListNode *temp = *head;
      while(temp->next != NULL){
        if(temp->next == deleteone){
          temp->next =  NULL;
          delete deleteone;
          deleteone = NULL;
          return;
        }
        temp = temp->next;
      }

    }else if(*head == deleteone){
        ListNode *temp = *head;
        *head = deleteone->next;
        delete temp;
        temp = NULL;
    }else{
      // copy
      int value = deleteone->next->value;
      deleteone->value = value;
      //delete
      ListNode *temp = deleteone->next;
      deleteone->next = deleteone->next->next;
      delete temp;
      temp = NULL;
    }
}

void printList(ListNode *head){
  while(head !=NULL){
    cout<<head->value<<endl;
    head = head->next;
  }
}

int main(){

  ListNode *head = new ListNode;
  head->value = 10;
  ListNode first;
  first.value =11;
  ListNode second;
  second.value =12;

  head->next = &first;
  first.next = &second;
  second.next = NULL;

  deleteFromList(&head,&second);
  printList(head);

  return 0;
}
