/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int getCount(Node* head) {
        // Code here
        Node* t = head;
        int c=0;
        while(t!=nullptr){
            // we are just increament out count var until t!=nullptr
            // and then updating t;
            c++;
            t=t->next;
        }
        return c;
    }
};