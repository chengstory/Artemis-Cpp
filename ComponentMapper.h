#ifndef COMPONENTMAPPER_H
#define COMPONENTMAPPER_H

#include "EntityManager.h"
#include "World.h"

namespace artemis {
	
  /**
   * High performance component retrieval from entities. Use this wherever you
   * need to retrieve components from entities often and fast.
   */
  template<typename c>
  class ComponentMapper {
    
  private:
    
    EntityManager * em;
    
  public:
    
    void init(World& world);
    
    /**
     *Returns the component mapped to the Entity.
     *If there is no such component associated with the entity
     *NULL is returned.
     */
    c * get(Entity & e);
    
  };
};
#endif // $(Guard token)
