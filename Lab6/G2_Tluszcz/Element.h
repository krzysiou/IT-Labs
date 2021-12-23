#pragma once
#include <iostream>
#include <cstring>

using namespace std;

class Element {
  public:
    //MAIN METHODS

    //inits created object by giving it data and setting next to nullptr
    void init(const char *);
    //returns data of an object
    char * getName();
    //prints object's data
    void printName();

    //HELPER METHODS

    //returns the "next" pointer
    Element * returnNext();
    //deletes object's data
    void deleteData();
    //sets "next" pointer to given element
    void setNext(Element *);

  private:
    Element * next;
    char * data;
};