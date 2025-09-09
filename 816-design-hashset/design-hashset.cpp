class MyHashSet {
    static const int cap = 10007; //prime number for better distribution
    vector<vector<int>> buckets;

    int hash(int key) const{
        return ((key%cap) + cap) % cap;
    }

public:
    MyHashSet(): buckets(cap) {
        
    }
    
    void add(int key) {
        int h = hash(key);
        for(int val: buckets[h]){
            if(val == key) return;
        }
        buckets[h].push_back(key);
    }
    
    void remove(int key) {
        int h = hash(key);
        auto &bucket = buckets[h];
        for(auto it = bucket.begin(); it != bucket.end(); ++it){
            if(*it == key){
                bucket.erase(it);
                break;
            }
        }
    }
    
    bool contains(int key) {
        int h = hash(key);
        for(int val: buckets[h]){
            if(val == key) return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */