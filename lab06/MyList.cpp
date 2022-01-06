#include "MyList.h"

//MAIN METHODS

void MyList::init(const char * str){
  this->name = new char [strlen(str)+1];
  strcpy(this->name, str);
  this->head = nullptr;
  this->tail = nullptr;
}

void MyList::append(const char * name){
  Element * elem = new Element;
  elem->init(name);
  if(this->head == nullptr){
    this->head = elem;
    this->tail = elem;
  } else {
    this->tail->setNext(elem);
    this->tail = elem;
  }
}

void MyList::append(Element * elem){
  if(this->head == nullptr){
    this->head = elem;
    this->tail = elem;
  } else {
    this->tail->setNext(elem);
    this->tail = elem;
  }
}

void MyList::prepend(Element * elem){
  if(this->head == nullptr){
    this->head = elem;
    this->tail = elem;
  } else {
    elem->setNext(this->head);
    this->head = elem;
  }
}
void MyList::prepend(const char * name){
  Element * elem = new Element;
  elem->init(name);
  if(this->head == nullptr){
    this->head = elem;
    this->tail = elem;
  } else {
    elem->setNext(this->head);
    this->head = elem;
  }
}

void MyList::printList() const{
  Element * tmp = this->head;
  cout << this->name << " = " << "[";
  while(tmp != nullptr){
    cout << tmp->getName();
    if(!(tmp->returnNext() == nullptr)){
      cout << " ";
    }
    tmp = tmp->returnNext();
  }
  cout << "]" << endl;
}

bool MyList::isEmpty() const{
  if(this->head == nullptr){
    return true;
  } else {
    return false;
  }
}

void MyList::removeFirst(){
  Element * tmp = this->head;
  this->head = this->head->returnNext();
  cout << "Clearing element: " << tmp->getName() << endl;
  tmp->deleteData();
  delete tmp; 
}

void MyList::clearList(){
  while(this->head != nullptr){
    this->removeFirst();
  }
  this->head = nullptr;
  this->tail = nullptr;
}

void MyList::clear(){
  cout << "Clearing MyList: " << this->name << endl;
  this->clearList();
  delete [] this->name;
}

Element * MyList::getHead() const{
  return this->head;
}

Element * MyList::getLast() const{
  return this->tail;
}

char * MyList::getName() const{
  return this->name;
}

//HELPER METHODS

void print(const MyList * list){
  list->printList();
}