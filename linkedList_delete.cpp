//思路：
//每三个8-bit字符 -> 四个6-bit字符
//对于每一个6-bit字符，右移>>两位，最高位补0，看值落在哪个区间，对应的字符应为每个区间的首字符 + （当前字符的值 - 首字符的值）
//把每个字符链接起来
#include <iostream>

using namespace std;

class ListNode {
public:
    int val;
    ListNode *next;
    ListNode(int val) {
       this->val = val;
       this->next = NULL;
    }
};


class Solution {
public:
    /**
     * @param head: head is the head of the linked list
     * @return: head of the linked list
     */
    ListNode * deleteDuplicates(ListNode * head) {
     if(head == NULL || head->next == NULL){
         return head;
     }

        ListNode *dummy = new ListNode(0);
        dummy -> next = head;
        head = dummy;

        while(head -> next != NULL && head-> next->next != NULL){
            if(head->next->val == head ->next->next->val){
                int val = head->next->val;
                while(head->next!= NULL && head->next->val == val){
                    head ->next = head->next->next;
                }
            }else{
                head = head->next;
            }
        }

        return dummy -> next;
    }
};

int main(){
  Solution s1;
  ListNode *head = new ListNode(1);
  ListNode *head1 = new ListNode(1);
  ListNode *head2 = new ListNode(0);
  head->next = head1;
  head1->next = head2;
  head2->next = NULL;
  ListNode *a = s1.deleteDuplicates(head);
  while(a != NULL){
    cout<< a->val<<endl;
    a = a->next;
  }
}
