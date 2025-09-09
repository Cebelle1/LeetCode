class LRUCache {

    struct Node{
        int key, val;
        Node *next, *prev;
        Node(int k, int v): key(k), val(v){};
    };

    unordered_map<int, Node*> cache;
    Node *head, *tail;
    // head <-> 1 <-> 2 <-> tail
    int cap;

public:
    LRUCache(int capacity) {
        cap = capacity;
        head = new Node(-1, -1);
        tail = new Node(-1, -1);
        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) {
        auto it = cache.find(key);
        if(it == cache.end()) return -1;
        // if found, shift Node to front and return the val.

        Node* n = it->second;
        remove(n); 
        add(n);
        return n->val;
    }
    
    void put(int key, int value) {
        auto it = cache.find(key);
        if(it != cache.end()){  //found, update and shift to head of list (MRU)
            Node* n = it->second;
            n->val = value;
            remove(n);
            add(n);
            return;
        }
        // not found, check capcity
        if(cache.size() == cap){ //evict LRU
            Node* n = tail->prev;
            remove(n); //remove from ll
            cache.erase(n->key); //delete from unordered_map
        }
        Node* newNode = new Node(key, value);
        add(newNode); //add to LL
        cache[key] = newNode; //add to unordered_map;
    }

private:
    // remove node from current position in doubly LL
    void remove(Node* n){
        n->prev->next = n->next;
        n->next->prev = n->prev;
    }

    // add node to front of the list in doubly LL
    void add(Node* n){
        Node* tmp = head->next;
        head->next = n;
        n->prev = head;
        n->next = tmp;
        tmp->prev = n;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */