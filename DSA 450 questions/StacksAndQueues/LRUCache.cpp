// creare dll for with key and data and update list when their is operation performed by LRUCache
// dummmy node from starting and endoing 
// left is right to left is least recently used ..

struct Node{
         int key;
         Node *prev;
         Node *next;
         int data;
         
         Node(int k , int val){
            key = k;
            data = val;
         }
     } ;
     int cap;
     unordered_map<int , Node*>m;    // store key and pointer of data in doubly linked list  
    Node *head = new Node (-1,-1);
    Node *tail = new Node(-1,-1);
    
    initializing the cache capacity and dummy node...
    LRUCache(int c)
    {
        cap = c;
        head->next = tail;
        tail->prev = head;
    }
    
void addNode(Node *newNode){    // adding new Node 
	Node *temp = head->next;
	newNode->next = temp;
	newNode->prev = head;
	head->next = newNode;
	temp->prev = newNode;
}

void deleteNode(Node *deleteNode){         // deleting Node ...
	Node *deletePrev = deleteNode->prev;
	Node *deleteNext = deleteNode->next;
	deletePrev->next = deleteNext;
	deleteNext->prev = deletePrev;
}
    
    //Function to return value corresponding to the key.
    int get(int k)
    {
        if(m.find(k) != m.end()){       // if we find the key
            Node *resNode = m[k];       // node pointer
			int res =  resNode->data;
			m.erase(k);           /
			deleteNode(resNode);  // deleting old node since now its been the rcently used node
			addNode(resNode);       // updating in DLL by puting in the leftmost part of DLL after the head node
 			m[k] = head->next;   // updating the newhead 
			return res;	
	}else {
		return -1;
	}
    }
    
    //Function for storing key-value pair.
    void set(int k, int val)
    {
        if(m.find(k) != m.end() ){       // if key is already present
		Node *existingNode = m[k];     // noe pointer
		m.erase(k);                   // erasing from the map
		deleteNode(existingNode);       // deleting old node since now its been the rcently used node
	}
	if(m.size() == cap){     // if size is full 
		m.erase(tail->prev->key);     // since right is least recently used deleting from map ans DLL
		deleteNode(tail->prev);
	}
		addNode(new Node(k ,val));       // updating in DLL by puting in the leftmost part of DLL after the head node 
		m[k] = head->next; 
    }
