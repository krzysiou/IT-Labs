#pragma once 
#include "Node.h"

/**
 * descendant of class Node, can hold int value
 * */
class NodeInt : public Node {
  public:
    // initialize NodeInt with int value
    NodeInt(int value): _value(value) {};
    // returns exact copy of NodeInt
    Node * clone() const {
      Node * element = new NodeInt(_value);
      return element;
    }
    // returns stringified _value field
    std::string toString() const {
      return std::to_string(_value);
    };
    // returns _value field
    int valInt() const {
      return _value;
    }
  private:
    // holds value of node
    int _value;
};

/**
 * descendant of class Node, can hold float value
 * */
class NodeFloat : public Node {
  public:
    // initialize NodeFloat with float value
    NodeFloat(float value): _value(value) {};
    // returns exact copy of NodeFloat
    Node * clone() const {
      Node * element = new NodeFloat(_value);
      return element;
    };
    // returns stringified _value field
    std::string toString() const {
      return std::to_string(_value);
    }
     // returns _value field
    float valFloat() const {
      return _value;
    }
  private:
    // holds value of node
    float _value;
};

/**
 * descendant of class Node, can hold string value
 * */
class NodeString : public Node {
  public:
    // initialize NodeString with string value
    NodeString(std::string value): _value(value) {};
    // returns exact copy of NodeString
    Node * clone() const {
      Node * element = new NodeString(_value);
      return element;
    };
    // returns stringified _value field
    std::string toString() const {
      return _value;
    }
     // returns reference to _value field
    std::string & valString(){
      return _value;
    };
  private:
    // holds value of node
    std::string _value;
};