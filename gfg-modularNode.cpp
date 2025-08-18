/*Struture of the node of the linked list is as:

struct Node {
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
// Your task is to complete the function
// function should return the modular Node
// if no such node is present then return -1
class Solution {
  public:
    int modularNode(Node *head, int k) {
        // Code here
        
        // we create a index starting from 1 (1-based indexing)
        // and iterating until t!=null
        // and checking for every index that is it divisible by k
        // if yes store it's data store in ans var
        // I initilize ans with -1;
        // when we have to return -1? when we know k is not divisible by anyone
        // and everytime we have to increment index and tail

        Node *t = head;
        int idx = 1;
        int ans = -1;
        
        while(t!=nullptr){
            if(idx % k == 0){
                ans = t->data;
            }
            idx++;
            t=t->next;
        }
        return ans;
    }
    
};