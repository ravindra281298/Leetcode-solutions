// Problem Link: https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/549/week-1-august-1st-august-7th/3410/


class MyHashSet {
public:
    
    /** Initialize your data structure here. */
    set<int> s;
    bool v[1000001];
    MyHashSet() {
        s.clear();
        for(int i=0;i<1000001;i++)
            v[i]=false;
    }
    
    void add(int key) {
        if(v[key]==false){
            v[key]=true;
            s.insert(key);
        }
    }
    
    void remove(int key) {
        if(v[key]==true){
            v[key]=false;
            s.erase(key);
        }
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return v[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */