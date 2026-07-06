class Node{
public:
    int val;
    Node* next;

    Node(int data){
        val=data;
        next=NULL;
    }
};

class MyLinkedList {
public:
    Node* head;
    MyLinkedList() {
        head=NULL;
        
    }
    
    int get(int index) {
        Node* temp=head;
        int cnt=0;

        while(temp)
        {
            if(cnt==index)
            {
                return temp->val;
            }

            temp=temp->next;
            cnt++;
        }
        return -1;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next=head;
        head=newNode;
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val);

        if(head==NULL)
        {
            head=newNode;
            return;
        }

        Node* temp=head;

        while(temp->next)
        {
            temp=temp->next;
        }

        temp->next=newNode;
    }
    
    void addAtIndex(int index, int val) {
        if(index==0)
        {
            addAtHead(val);
            return;
        }

        Node* temp=head;
        int cnt=0;

        while(temp!=NULL && cnt<index-1)
        {
            temp=temp->next;
            cnt++;
        }

        if(temp==NULL)
        {
            return;
        }

        Node* newNode=new Node(val);
        newNode->next=temp->next;
        temp->next=newNode;
    }
    
    void deleteAtIndex(int index) {
        if(head==NULL)
        {
            return;
        }

        if(index==0)
        {
            Node* temp=head;
            head=head->next;
            delete temp;
            
            return;
        }

        Node* cur=head;
        int cnt=0;

        while(cur!=NULL && cnt<index-1)
        {
            cur=cur->next;
            cnt++;
        }

        if(cur==NULL || cur->next==NULL)
        {
            return;
        }

        Node *del=cur->next;
        cur->next=del->next;
        delete del;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */