#include<iostream>
using namespace std;

template <typename V>
class MapNode{
    public: 
        string key;
        V value;
        MapNode<V>* next;
        Mapnode(string key,V value){
            this->key = key;
            this->value = value;
            this->next = NULL;
        }

        ~Mapnode(){
            delete next;
        }
};


template <typename V>
class ourmap{
    public:
        int count;
        MapNode<V>** buckets;
        int numBuckets;

        ourmap(){
            count = 0;
            numBuckets = 5;
            buckets = new MapNode<V>*[numBuckets];
            for(int i=0;i<numBuckets;i++){
                buckets[i] = NULL;
            }
        }

        ~ourmap(){
            for(int i=0;i<numBuckets;i++){
                delete buckets[i];
            }
            delete [] buckets;
        }

         int size(){
            return count;
        }

        void insert(string key, V value){

        }

        V getValue(string key){
            
        }
        
        V remove(string key){

        }
};