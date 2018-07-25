#include<iostream>
using namespace std;

template <typename V>
class MapNode{
    public: 
        string key;
        V value;
        MapNode<V>* next;
        MapNode(string key,V value){
            this->key = key;
            this->value = value;
            this->next = NULL;
        }

        ~MapNode(){
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
        private:
            int getBucketIndex(string key){
                //imlementing string abc --->    int (a * p^2 + b * p^1 + c * p^0) where p is a prime no eg 37
                int hashCode = 0;
                int currentCoef = 1; //since p^0 = 1

                for(int i=key.length()-1;i>=0;i--){
                    hashCode+=key[i]*currentCoef;
                    hashCode = hashCode%numBuckets; //to prevent the value to get out of range for integer.
                    currentCoef*=37;
                    currentCoef=currentCoef%numBuckets; //to prevent the value to get out of range for integer. since (x*y*z)%d = ((x%d)*(y%d)*(z%d))%d 
                }
                return hashCode%numBuckets;
            }

            void rehash(){
                MapNode<V>** temp  = buckets;
                buckets = new MapNode<V>* [2 * numBuckets];
                for(int i = 0; i<2*numBuckets; i++){
                    buckets[i] = NULL;
                }
                int oldBucketCount = numBuckets;
                numBuckets*=2;
                count = 0;

                for(int i=0;i<oldBucketCount;i++){
                    MapNode<V>* head = temp[i];
                    while(head!=NULL){
                        string key = head->key;
                        V value = head->value;
                        insert(key,value);
                        head=head->next;
                    }
                }
                for(int i=0;i<oldBucketCount;i++){
                    MapNode<V>* head = temp[i];
                    delete head;
                }
                delete [] temp;
            }

        public: 
            double getLoadFactor(){
                return (1.0 * count)/numBuckets;
            }

            void insert(string key, V value){
                int bucketIndex = getBucketIndex(key);

                MapNode<V>* head = buckets[bucketIndex];
                while(head!=NULL){
                    if(head->key == key){
                        head->value = value;
                        return;
                    }
                    head=head->next;
                }
                head = buckets[bucketIndex];
                MapNode<V>* node = new MapNode<V>(key,value);
                node->next=NULL;
                buckets[bucketIndex] = node;
                count++;
                //calculating loadfactor
                double loadFactor = (1.0 * count)/numBuckets;
                if(loadFactor>0.7){
                    //rehashing
                    rehash();
                }
            }

            V getValue(string key){
                int bucketIndex = getBucketIndex(key);
                MapNode<V>* head = buckets[bucketIndex];
                while(head!=NULL){
                    if(head->key == key){
                        return head->value;
                    }
                }
                return 0;  //not found s
            }
            
            V remove(string key){
                int bucketIndex = getBucketIndex(key);
                MapNode<V>* head = buckets[bucketIndex];
                MapNode<V>* prev = NULL;
                while(head!=NULL){
                    if(head->key == key){
                        if(prev== NULL){
                            buckets[bucketIndex] = head->next;
                        }
                        else{
                            prev->next = head->next;
                        }
                        V value = head->value;
                        head->next=NULL;
                        delete head;
                        count--;
                        return value;
                    }
                    prev=head;
                    head=head->next;
                }
                return 0; //Value not found
            }
};