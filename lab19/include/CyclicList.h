#pragma once
#include "Node.h"

/**
 * class that holds pointers to beggining and end of a cyclic list
*/
class CyclicList {
  public:
    // default constructor
    CyclicList() = default;
    // add element when using operator <<
    CyclicList & operator<<(Node * element){
      if(_begin == nullptr){
        _begin = _end = element;
      } else {
        _end -> setNext(element);
        _end = element;
        _end -> setNext(_begin);
      }
      return * this;
    }
    // counts element of cyclic list
    int count() const {
      int counter = (_begin == _end) && (_begin == nullptr) ? 0 : 1;
      Node * temp = _begin;
      while(temp != _end){
        counter += 1;
        temp = temp->getNext();
      }
      return counter;
    }
    // prints cyclic list contents when operator << is used
    friend std::ostream& operator<<(std::ostream& os, const CyclicList& list){
      Node * temp = list._begin;
      while(temp != list._end){
        os << temp->toString() << " ";
        temp = temp->getNext();
      }
      os << temp->toString() << " ";
      return os;
    }
    // return beggining of cyclic list when operator () is used
    Node * operator()() const {
      return _begin;
    }
    // rotate cyclic list to start and end at one element to the right of previous list
    CyclicList & rotate(){
      _begin = _begin->getNext();
      _end = _end->getNext();
      return * this;
    }
    // rotate cyclic list to start and end at one element to the left of previous list
    CyclicList & rotate_back(){
      Node * temp = _begin;
      while(temp->getNext() != _end){
        temp = temp->getNext();
      }
      _end = temp;
      _begin = temp->getNext();
      return * this;
    }
    // copy constructor
    CyclicList(const CyclicList & other){
      Node * temp = other._begin;
      Node * clonned;
      while(temp != other._end){
        clonned = temp -> clone();
        if(_begin == nullptr){
          _begin = _end = clonned;
        } else {
          _end -> setNext(clonned);
          _end = clonned;
          _end -> setNext(_begin);
        }
        temp = temp->getNext();
      }
      clonned = temp -> clone();
      _end -> setNext(clonned);
      _end = clonned;
      _end -> setNext(_begin);
    }
  private:
    // point to beggining of the cyclic list
    Node * _begin = nullptr;
    // point to end of the cyclic list
    Node * _end = nullptr;
};