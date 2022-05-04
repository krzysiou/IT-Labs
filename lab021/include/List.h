#pragma once
#include <iostream>

// NODE
template <typename T>
class Node{
  public:
    Node(const T & val) : _value(val) {};
    T getValue() const {
      return _value;
    }
    Node<T> * getNext() const {
      return _next;
    }
    void setNext(Node * element){
      _next = element;
    }
  private:
    Node<T> * _next = nullptr;
    const T _value;
};


// LIST
template<typename T>
class List{
    public:
      List() = default;
      List(List<T> && list){
        _head = std::exchange(list._head, nullptr);
        _tail = std::exchange(list._tail, nullptr);
      }
      List(const List<T> & list){
        Node<T> * current = list.getHead();
        while(current){
          this->add(current->getValue());
          current = current->getNext();
        }
      }
      Node<T> * getHead() const {
        return _head;
      }
      List & add(const T value) {
        Node<T> * temp = new Node<T>(value);
        if(!_head) {
         _head = temp;
         _tail = _head;
        }
        else {
          _tail->setNext(temp);
          _tail = temp;
        }
        return *this;
      }
      bool contains(const T val) const{
        Node<T> * current = _head;
        while(current) {
          if(current->getValue() == val){
            return true;
          } 
          current = current->getNext();
        }
        return false;
      }
      friend std::ostream& operator<<(std::ostream & os, const List<T> & list){
        Node<T> *current = list.getHead();
        while(current) {
          os<<current->getValue() <<" ";
          current = current->getNext();
        }
        return os;
      }
      ~List(){
        Node<T> * current = _head;
        while(current != _tail) {
          current = current->getNext();
          delete _head;
         _head = current;
        }
        delete _tail;
      }
    private:
      Node<T> * _head = nullptr;
      Node<T> * _tail = nullptr;
};