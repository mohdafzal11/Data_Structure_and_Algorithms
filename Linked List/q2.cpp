// Nth node from end of linked list

// Question link:https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1?page=1&category[]=Linked%20List&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions


/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
class Solution{
public:
int getLength(Node* head){
    int cnt=0;
    while(head){
        cnt++;
        head=head->next;
    }
    return cnt;
}
    int getNthFromLast(Node *head, int n)
    {
          
           int len=getLength(head);
           if(n>len)return -1;
           int m=len-n;
           while(m--){
               head=head->next;
           }
          return head->data; 
    }
};
