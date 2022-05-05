#pragma once
#include "Entity.h"

class Dir : public Entity {
  public:
    Dir(const std::string name){
      this->setName(name);
    }
    void description(std::ostream & os, std::string spacer) const {
      os << spacer << this->getName() << " (DIR)" << std::endl;
      for(Entity * entity: _entities){
        entity->description(os, spacer + "  ");
      }
    }
    void add(Entity * entity){
      _entities.push_back(entity);
    }
    void operator +=(Entity * entity){
      add(entity);
    }
    Dir * findDir(std::string name) {
      if(getName() == name)
        return this;
      for(Entity * entity: _entities){
        Dir * temp = dynamic_cast<Dir *>(entity);
        if(temp)
          return temp->findDir(name);
      }
      return nullptr;
    }
    Entity * get(std::string name){
      if(getName() == name)
        return this;
      for(Entity * entity: _entities){
          if(entity->getName() == name)
            return entity;
          Dir * temp1 = dynamic_cast<Dir *>(entity);
          if(temp1){
            Entity * temp2 = temp1->get(name);
            if(temp2){
              return temp2;
            }
          }
        }
      return nullptr;
    }
    ~Dir(){
        std::cout << "Deleting Dir: " << getName() << std::endl;
        for(Entity * entity: _entities){
            std::cout << "About to delete " << entity->getName() << std::endl;
            delete entity;
        }
    }
  private:
    std::vector<Entity*> _entities;
};

std::ostream& operator <<(std::ostream& os, const Dir & directory){
    directory.description(os, "");
    return os;
}