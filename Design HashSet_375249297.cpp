class MyHashSet {
    map<int,int> m;
public:
    /** Initialize your data structure here. */
    MyHashSet() {
        
    }
    
    void add(int key) {
        m[key]=1;
    }
    
    void remove(int key) {
        if(m[key]==1)
            m[key]=0;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        if(m[key]==1)
            return true;
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
