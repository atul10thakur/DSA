
  #include<bits/stdc++.h>
  using namespace std;
  
  struct ListNode {
      int val;
      ListNode *next;
     ListNode(int x){
     	next = NULL;
     	val = x;
	 }
};

ListNode* middleNode(ListNode* head) {
        ListNode *curr = head;
        ListNode *fast = curr;
        ListNode *slow = curr;
        while(fast != NULL && fast->next != NULL){
           fast  = fast->next->next;
           slow = slow->next;
        }
        return slow;
    }
int main(){
	
	ListNode *temp = new ListNode(10);
	temp->next = new ListNode(20);
	temp->next->next = new ListNode(30);
	temp->next->next->next = new ListNode(40);
	temp->next->next->next->next = new ListNode(50);
	temp->next->next->next->next->next = new ListNode(60);
	
	ListNode *node = middleNode(temp);
	cout<<node->val;
	return 0;
}    
