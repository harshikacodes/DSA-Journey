class Node {
public:
    int data;
    Node* next;

    // Default constructor
    Node()
    {
        data = 0;
        next = nullptr;
    }

    // Parameterised Constructor
    Node(int data)
    {
        // in the node we have two things
        // one is our data and 
        // 2nd is our next var
        // next have address of NEXT node
        // we set next as nullptr because, may be it's last value
        // and nullptr represent end of linkedList.
        this->data = data;
        this->next = nullptr;
    }
};


class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        // code here
        Node* h = new Node(arr[0]);
        // here we created a headnode it is always first node 
        // so I took 1st ele of arr and assign it to head node
        int n = arr.size();
        Node* t = h;
        // this is tail node (connected node)
        // start from head and connect to another ele
        for(int i=1; i<n; i++){
            // what in our present t, it have data of 0-th idx ele
            // and it have next value with nullptr 

            // so what do is we take our tail and say tail.next(which is current at head) 
            // and pointing to nullptr
            // so we say it will point to new node, value is arr[i]
            t->next = new Node(arr[i]);
            // and we move our tail to another ele
            t=t->next;
        }
        return h;
    }
};