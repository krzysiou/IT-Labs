#include "Element.h"

//MAIN METHODS

void Element::init(const char * name){
  this->data = new char [strlen(name)+1];
  strcpy(this->data, name);
  this->next = nullptr;
}

char * Element::getName(){
  return this->data;
}

void Element::printName(){
  cout << this->data;
}

//HELPER METHODS

Element * Element::returnNext(){
  return this->next;
}

void Element::deleteData(){
  delete [] this->data;
}

void Element::setNext(Element * elem){
  this->next = elem;
}