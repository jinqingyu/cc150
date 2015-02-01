
struct Animal {
  int id;
  bool dog; 
  Animal(int i, bool d) : id(i), dog(d){}
};

class Shelter{
  private: 
    list<Animal> _list;
  public: 
    Shelter(){}
    void enqueue(Animal a){
      _list.push_back(a);
    }
    
    Animal dequeueAny(){
      Animal a = (*_list.begin());
      _list.pop_front();
      return a;
    }
    
    Animal dequeueDog(){
      for(auto it = _list.begin(); it!=_list.end(); it++){
        if((*it).dog == true){
          Animal res = (*it);
          _list.erase(it);
          return res;
        }
      }
    }

}
