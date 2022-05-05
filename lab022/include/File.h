#pragma once
#include "Entity.h"

class File : public Entity {
  public:
    File(const std::string name){
      this->setName(name);
    }
    void description(std::ostream & os, std::string spacer) const {
      os << spacer <<this->getName() << " (FILE)" << std::endl;
    }
    ~File() = default;
};