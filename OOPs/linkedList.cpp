#include<iostream>
using namespace std;

class Node{

    int data;
    Node* next = NULL;
    
    public:

    /*Constructors below*/
    Node(){
        cout<<"This is the default constructor of Node\n";
    }

    Node(int value){
        data = value;
    }

    /*Destructor*/
    ~Node(){
        cout<<"Destructor of Node class\n";
    }

    /*Length*/
    int size(Node* head){
        int length=0;
        while (head!=NULL){
            head = head->next;
            length++;
        }
        return length;
    }

    /*Insert by index, head or at tail*/
    void insert(Node* &head, int n, int index){
        Node* tmp = head;
        if (index<0){
            cout<<"Error: Index error; Index cannot be negetive"<<endl;
            return;
        }

        else if (index==0){
            insertAtHead(head, n);
        }

        while(index!=1){
            if (tmp->next==NULL){
                tmp->next = new Node(n);
                return;
            }
            tmp = tmp->next;
            index--;
        }

        Node* temp = new Node(n);
        temp->next = tmp->next;
        tmp->next = temp;
    }

    void insertAtHead(Node* &head, int n){
            Node* temp = new Node(n);
            temp->next=head;
            head = temp;
        }

    void insertAtTail(int n){
        if (next==NULL){
            next = new Node(n);
        }
        else{
            (*next).insertAtTail(n);
        }
    }

    /*Delete by index, head or at tail*/
    void del(Node* &head, int index){
        
        if (index<0){
            cout<<"Error: Index error; Index cannot be negetive"<<endl;
            return;
        }

        else if (index>=((*head).size(head))){
            cout<<"Error: Index error; Index higher than size of list"<<endl;
            return;
        }

        else if(index==0){
            (*head).delHead(head);
        }

        Node* temp = head;
        while(index!=1){
            temp = temp->next;
            index--;
        }
        Node* temp2 = temp->next->next;
        delete temp->next;
        temp->next = temp2;

    }

    void delHead(Node* &head){
        Node* toDel = head;
        head = head->next;
        delete toDel;
    }

    void delTail(Node* &head){
        if (head == NULL){
            cout<<"Error: The list is empty.\n";
            return;
        }
        if (head->next == NULL){
            delete head;
            head = NULL;
            return;
        }
        
        Node* temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }

    /*Display all the elements of the linked list*/
    void display(Node* head){
        if (head == NULL){
            cout<<"Empty List\n";
            return;
        }

        cout<<data;

        if(next!=NULL){
            cout<<" --> ";
            (*next).display(head);
        }
        else{cout<<endl;}
    }

    /*Searching for an element in the linked list*/
    bool search(Node* head, int key){
        while (head!=NULL){
            if (head->data==key){
                return true;
            }
            head = head->next;
        }
        return false;
    }

    /*Reverse list according to certain conditions or methods*/
    void reverseList(Node* &head){                              // This is the iterative method;

        if (head == NULL){
            cout<<"Empty List\n";
            return;
        }

        Node* previous=NULL, *current=head, *next;
        while(current != NULL){
          next = current->next;
          current->next = previous;
          previous = current;
          current = next;
        }
        head = previous;
    }

    Node* reverse(Node* &head){
        if (head -> next == NULL || head==NULL){
            return head;
        }

        Node* newhead = reverse(head->next);
        head->next->next = head;
        head->next = NULL;

        return newhead;
    }

    Node* reverseNodes(Node* head, int k){

        k = ((k>=0)? k : -k);
        int tmp = k;

        if (head == NULL){
            return head;
        }

        Node* previous = NULL, *current = head, *next;
        
        while((tmp--) && (current!=NULL)){
            next = current->next;
            current->next = previous;
            previous = current;
            current = next;
        }

        head->next = reverseNodes(current, k);

        return previous;
    }

    /*Make circular linked list*/
    // void makeCycle(Node* head){
        
    //     Node* temp = head;

    //     while (temp->next!=NULL){
    //         temp = temp->next;
    //     }

    //     temp->next = head;
    // }
    
    /*Detecting if cycle in list and removing it*/
    bool detectCycle(Node* head){

        if (head==NULL){
            cout<<"Empty List\n";
        }

        Node* slow=head, *fast = head;

        while ((fast!=NULL) && (fast->next!=NULL)){
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast){
                return true;
            }
        }
        return false;
    }

    void removeCycle(Node* head){
        if (head == NULL){
            cout<<"Empty List\n";
            return;
        }

        Node* slow=head, *fast = head;
        bool flag=false;                                    //flag to detect if a cycle is present

        while ((fast!=NULL) && (fast->next!=NULL)){
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast){
                flag = true;
                break;
            }
        }
        
        if (flag){
            if (fast==head){
                while(fast->next!=head){
                    fast = fast->next;
                }
                fast->next=NULL;
            }
            else{
                fast = head;
                while (fast->next!=slow->next){
                    fast = fast->next;
                    slow = slow->next;
                }
                slow->next=NULL;
            }
        }
    }

    /*Get k elements from back of the list to front of the list*/
    void append(Node* &head, int k){
        if (head == NULL){
            cout<<"Empty List\n";
            return;
        }
        if (k==0){
            return;
        }
        k>0? k: k=-k;
        if (k>=size(head)){
            cout<<"Size of list smaller than or equal to k\n";
            return;
        }

        Node* tmp = head;
        int loop = size(head)-k;
        for (int i=1; i<loop; i++){
            tmp=tmp->next;
        }
        Node* join = tmp->next;
        Node* newHead = join;
        while (join->next != NULL){
            join = join->next;
        }
        join->next = head;
        tmp->next = NULL;
        head = newHead;
    }

    /*Make an intersection of 2 lists at given position.
    Head2 is the list which is connected to head1 at given position*/
    void makeIntersection(Node* head1, Node* head2, int pos){
        if (pos>size(head1)){
            cout<<"No possible intersection at this point\n";
            return;
        }
        if (head1==NULL || head2==NULL){
            cout<<"Empty List present\n";
            return;
        }
        while(head2->next!=NULL){
            head2 = head2->next;
        }
        while(--pos){
            head1 = head1->next;
        }
        head2->next = head1;
    }

    /*Find if intersection of 2 heads present and return data at position of intersection*/
    int  findIntersection(Node* head1, Node* head2){
        int l1 = size(head1);
        int l2 = size(head2);
        int d;
        Node* ptr1, *ptr2;
        if (l1>l2){
            d = l1-l2;
            ptr1 = head1;
            ptr2 = head2;
        }
        else if(l2>l1){
            d = l2-l1;
            ptr1 = head2;
            ptr2 = head1;
        }
        else{
            return -1;
        }
        //pointers initialized and d found;

        while(d--){
            ptr1 = ptr1->next;
        }
        while (ptr1!=ptr2){
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        if (ptr1 == NULL){
            return -1;
        }
        else{
            return ptr1->data;
        }
    }

    /*joining 2 sorted lists and return merged list by different methods*/
    Node* merge(Node* head1, Node* head2){          //iterative method
        Node* dummy = new Node();
        Node* traverse=dummy;
        while (head1!=NULL && head2!=NULL){
            if (head1->data > head2->data){
                traverse->next = head2;
                head2 = head2->next;
            }
            else{
                traverse->next = head1;
                head1 = head1->next;
            }
            traverse = traverse->next;
        }
        if (head1!=NULL){
            traverse->next = head1;
        }
        else{
            traverse->next = head2;
        }
        head1 = dummy->next;
        delete dummy;
        removeCycle(head1);
        return head1;
    }

    Node* mergeRecursive(Node* head1, Node* head2){
        if (head1==NULL){
            return head2;
        }
        if (head2==NULL){
            return head1;
        }
        if (head1->data<head2->data){
            head1->next = mergeRecursive(head1->next, head2);
            removeCycle(head1);
            return head1;
        }
        else{
            head2->next = mergeRecursive(head1, head2->next);
            removeCycle(head2);
            return head2;
        }
    }

    /*Put the even position nodes after the odd position Nodes.
    Starting from index 0*/
    void oddBeforeEven(Node* &head){
        if (size(head)<=1){
            return;
        }
        Node* odd=head->next, *even=head, *evenStart=head;
        head = head->next;
        while (odd->next!=NULL && even->next!=NULL){
            even->next=odd->next;
            even = even->next;
            if (even->next==NULL){
                break;
            }
            odd->next = even->next;
            odd = odd->next;
        }

        odd->next = evenStart;
        even->next=NULL;
    }

};


int main(){
/*Below block of code made while testing till append functio in the given class*/
    // int n;
    // cout<<"Number of elements: ";
    // cin>>n;
    // int el;
    // cin>>el;
    // Node* head=new Node(el);
    
    // for (int i=1; i<n; i++){
    //     cin>>el;
    //     (*head).insertAtTail(el);
    // }

    // cout<<(*head).size(head)<<endl;

    // (*head).display(head);

    // for (int i=0; i<n; i++){
    //     cin>>el;
    //     (*head).insertAtHead(head, el);
    // }

    // cout<<(*head).size(head)<<endl;

    // (*head).display(head);

    // cin>>el;
    // cout<<(*head).search(head, el)<<endl;

    // (*head).insert(head, 9, -5);
    // (*head).insert(head, 9, 10);
    // (*head).insert(head, 11, 0);
    // (*head).insert(head, 10, 1);

    // cout<<(*head).size(head)<<endl;

    // (*head).display(head);


    // (*head).delHead(head);
    // (*head).del(head, 6);
    // (*head).display(head);
    // (*head).del(head, -4);
    // (*head).display(head);
    // (*head).del(head, 9);
    // (*head).display(head);
    // (*head).del(head, 1);

    // cout<<(*head).size(head)<<endl;
    // (*head).display(head);

    // head = (*head).reverse(head);
    // (*head).display(head);

    // head = (*head).reverseNodes(head, 3);
    // (*head).display(head);

    // (*head).makeCycle(head);
    // cout<<((*head).detectCycle(head)? "Cycle Detected\n": "No cycle\n");
    // (*head).removeCycle(head);
    // cout<<((*head).detectCycle(head)? "Cycle Detected\n": "No cycle\n");
    // (*head).display(head);

    // (*head).append(head, 0);
    // (*head).append(head, 20);
    // (*head).append(head, 4);
    // (*head).display(head);





/*Below block of code checks for intersection and merging*/
    // Node* head1 = new Node(0);
    // (*head1).insertAtTail(1);
    // (*head1).insertAtTail(4);
    // (*head1).insertAtTail(7);
    // (*head1).insertAtTail(9);

    // Node* head2 = new Node(5);
    // (*head2).insertAtTail(8);
    // (*head2).insertAtTail(9);
    // (*head2).insertAtTail(16);
    // (*head2).insertAtTail(21);

    // (*head1).makeIntersection(head1, head2, 4);
    // (*head1).display(head1);
    // (*head2).display(head2);

    // cout<<(*head1).findIntersection(head1, head2);

    // head1=(*head1).merge(head1, head2);
    // (*head1).display(head1);




/*below block of code is to get all elements with even indices after the elements with odd idices*/
    Node* head = new Node(0);
    for (int i=1; i<5; i++){            //change numbe from odd to even to check all cases
        (*head).insertAtTail(i);
    }
    (*head).display(head);
    (*head).oddBeforeEven(head);
    (*head).display(head);




/*Deleting lists be a problem as when intersection deleted
other lists pointer does not point to NULL so display function
goes on as it does not find the tail pointing to NULL*/


    // while(head1!=NULL){                          // deleting all elements of list 1

    //     (*head1).delTail(head1);
    //     (*head1).display(head1);

    // }

    // (*head2).display(head2);

    // while(head2!=NULL){                          // deleting all elements of list 2 only possible if no intersection

    //     (*head2).delTail(head2);
    //     (*head2).display(head2);

    // }

    return 0;
}
