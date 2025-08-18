/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, Node* head, int key) {
        // Code here
        Node *t = head;
        // we intialize t with head
        while(t!=nullptr){
            // until t is not eqaul to end
            if(t->data == key){
                // we access data of which t is pointing 
                // and will check is it equal to key
                return true;
            }
            t=t->next;
            // we shift t to next so that we can access next ele
        }
        return false;
    }
};
