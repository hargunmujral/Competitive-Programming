class MyHashSet
{
public:
    vector<int> hashSet;
    MyHashSet()
    {
        hashSet.resize(1);
    }

    void add(int key)
    {
        if (key >= hashSet.size())
            hashSet.resize(key + 1);
        hashSet[key] = 1;
    }

    void remove(int key)
    {
        if (key >= hashSet.size())
            hashSet.resize(key + 1);
        hashSet[key] = 0;
    }

    bool contains(int key)
    {
        return (key < hashSet.size()) && hashSet[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */