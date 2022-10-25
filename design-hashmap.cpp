class MyHashMap
{
public:
    MyHashMap()
    {
        for (int i = 0; i < 1000001; i++)
            hashMap[i] = -1;
    }
    int hashMap[1000001];

    inline void put(int key, int value)
    {
        hashMap[key] = value;
    }

    inline int get(int key)
    {
        return hashMap[key] > -1 ? hashMap[key] : -1;
    }

    inline void remove(int key)
    {
        hashMap[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */