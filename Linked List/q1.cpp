// Intersection of two sorted Linked lists

// Question Link:https://practice.geeksforgeeks.org/problems/intersection-of-two-sorted-linked-lists/1?page=1&category[]=Linked%20List&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions




/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/
Node* findIntersection(Node* head1, Node* head2)
{
    
        Node* ansHead=new Node(-1);
        Node* tail=ansHead;
        while(head1 && head2){
            if(head1->data==head2->data){
                tail->next=head1;
                tail=head1;
                
                head1=head1->next;
                head2=head2->next;
                tail->next=NULL;
            }
            else if(head1->data>head2->data){
                head2=head2->next;
            }
            else{
                head1=head1->next;
            }
        }
        return ansHead->next;
}