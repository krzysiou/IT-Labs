#pragma once
#include <iostream>
#include <vector>

class Entity {
  public:
    void setName(std::string name) {
      _name = name;
    }
    std::string getName() const {
      return _name;
    }
    virtual void description(std::ostream & os, std::string spacer) const = 0;
    virtual ~Entity() = default;
  protected:
    std::string _name;
};

std::ostream & operator <<(std::ostream & os, const Entity & entity){
    entity.description(os, "");
    return os;
}