/*structure of a node of the linked list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
class Solution {
  public:
    bool isLengthEven(struct Node **head) {
        // Code here
        Node* t = *head;
        int c=0;
        // i just track count of nodes and then see it is even or odd
        // main thing in this question is struct datastructure it used
        // and dereferencing 
        while(t!=nullptr){
            c++;
            t=t->next;
        }
        // if(c%2==0){
        //     return true;
        // }
        // return false;
        return (c%2==0);
    }
};