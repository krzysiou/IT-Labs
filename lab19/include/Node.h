#pragma once
#include <string>
#include <iostream>

/**
 * abstract class Node
 * */
class Node {
  public:
    // virtual
    virtual std::string toString() const = 0;
    // virtual
    virtual Node * clone() const = 0;
    // returns _next field
    Node * getNext() const {
      return _next;
    };
    // sets _next field
    void setNext(Node * element){
      _next = element;
    };
    // default destructor
    virtual ~Node() = default;
  protected:
    // points to next node
    Node * _next;
};