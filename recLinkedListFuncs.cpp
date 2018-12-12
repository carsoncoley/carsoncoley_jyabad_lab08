#include "linkedList.h"
#include "linkedListFuncs.h"


//head: ptr to a Node * which is the head of a linked list
//return sum of all values in linked list using a recursive approach
//if head is null return 0
int recursiveSum(Node* head) {
  if(!head){
	  return 0;
  }
  return recursiveSum(head->next) + head->data;
}

//head: ptr to a Node* which is the head of a linked list
//return the largest value in the linked list using a recursive approach
//you may assume the list has at least one element
int recursiveLargestValue(Node* head) {
  if(!head){
	  return 0;
  }
  if(!head->next){
	  return head->data;
  }
  int max = head->data;
  int next = recursiveLargestValue(head->next);
  if(next > max){
	  return next;
  }
  return max;
}
