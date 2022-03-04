#include "MyList.h"

MyList::MyList(int n){
  cout << "KONST: Jednoparametrowy\n";
  _size = n;
  for(int i = 0; i < n; i++){
    if(i == 0){
      _head = _tail = new MyNode(i);
    } else {
      _tail->_next = new MyNode(i);
      _tail = _tail->_next;
    }
  }
}

MyList::MyList(const MyList& list) : MyList(){
  std::cout << "KONST: Kopiujacy\n";
  _size = list._size;
  MyNode * temp = list._head->_next;
  for(int i = 0; i < list._size; i++){
      if(_head == nullptr){
          _tail = _head = new MyNode(list._head->_value);
      }
      else{
          _tail->_next = new MyNode(temp->_value);
          temp = temp->_next;
          _tail = _tail->_next;
      }
  }
}

MyList::MyList(MyList&& list){
    _size = list._size;
    list._size = 0;
    _head = std::exchange(list._head, nullptr);
    _tail = std::exchange(list._tail, nullptr);
}

MyList::MyList(std::function<int(MyNode *)> fun, int size){
    std::cout << "KONST: funkcja generujaca\n";
    _size = size;
    _tail = _head = nullptr;
    for(int i = 0; i < size; i++)
    {
        if(_tail == nullptr){
          _head = _tail = new MyNode(fun(_tail));
        }
        else{
          _tail->_next = new MyNode(fun(_tail));
          _tail = _tail->_next;
        }
    }
}

MyList::MyList(std::initializer_list<int> list){
    _size = list.size();
    std::cout << "KONST: std::initializer_list\n";
    const int * iterator = list.begin() + 1; 
    _head = _tail = nullptr;
    for(int i = 0; i < _size; i++){
        if(_head == nullptr){
          _tail = _head = new MyNode(*list.begin());
        } else {
          _tail->_next = new MyNode (*iterator);
          iterator++;
          _tail = _tail->_next;
        }
    }
}

bool MyList::empty() const{
  if(_size == 0){
    return true;
  } else {
    return false;
  }
}

int MyList::size() const{
  return _size;
}

void MyList::clear(){
   MyNode * temp = _head->_next;
   while(temp != nullptr){
     delete _head;
     _head = temp;
     temp = temp->_next;
  }
  delete _head;
  _head = nullptr;
  _tail = nullptr;
  _size = 0;
}

void MyList::print() const{
  cout << '[';
  MyNode * temp = _head;
  while(temp != nullptr){
    cout << temp->_value;
    if(temp->_next != nullptr){
      cout << ',';
    }
    temp = temp->_next;
  }
  cout << ']' << endl;
}

MyList::~MyList(){
    std::cout << "DESTRUKTOR (rozmiar = " << _size << ")\n"; 
    if(_size != 0){
        MyNode * temp = _head->_next;
        while(_head != _tail){
            delete _head;
            _head = temp;
            temp = temp->_next;
        }
        delete _head;
    }
}

void MyList::add(int n){
  _size += 1;
  if(!_head){
    _head = _tail = new MyNode(n);
  } else {
    _tail->_next = new MyNode(n);
    _tail = _tail->_next;
  }
}