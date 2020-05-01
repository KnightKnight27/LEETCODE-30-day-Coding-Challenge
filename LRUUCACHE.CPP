class LRUCache {
public:
    struct Node
    {
        int data;
        int key;
        Node *prev=NULL;
        Node *next=NULL;
    };
    Node *head;
    Node *tail;
    int size=0;
    map<int,Node *> Hash;
    LRUCache(int capacity) 
    {
        size=capacity;
        head=NULL;
        tail=NULL;
        Hash=map<int,Node *>();
    }
    void elem()
    {
        int key=tail->key;
        Hash.erase(key);
        if(head==tail)
        {
            head=NULL;
            tail=NULL;
            return;
        }
        tail=tail->prev;
        tail->next=NULL;
        return;
        
    }
    int get(int key)
    {
        if(Hash.find(key)==Hash.end())
            return -1;
        Node *temp=Hash[key];
        if(temp==head)
        {
            return head->data;
        }
        if(temp==tail)
        {
            tail=tail->prev;
            tail->next=NULL;
            temp->next=head;
            head->prev=temp;
            head=head->prev;
            head->prev=NULL;
            return head->data;
        }
        temp->next->prev=temp->prev;
        temp->prev->next=temp->next;
        temp->next=head;
        head->prev=temp;
        head=head->prev;
        head->prev=NULL;
        return temp->data;
    }
    
    void put(int key, int value)
    {    
        if(Hash.find(key)!=Hash.end())
        {
            int x=get(key);
            Node *temp=Hash[key];
            temp->data=value;
            temp->key=key;
            return ;
        }
        if(Hash.size()==size)
        {
            elem();
        }
        Node *temp=new Node;
        temp->key=key;
        temp->data=value;
        Hash[key]=temp;
        if(head==NULL and tail==NULL)
        {
            head=temp;
            tail=temp;
            return ;
        }
        temp->next=head;
        head->prev=temp;
        head=temp;
        return ;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
