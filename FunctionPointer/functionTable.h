//
//  functionTable.h
//  CppDemos
//
//  Created by 李晓宁 on 16/5/4.
//  Copyright © 2016年 Vector Li. All rights reserved.
//

#ifndef functionTable_h
#define functionTable_h

#include <map>
#include <string>
#include <memory>

using namespace std;

class GameObject {
public:
    virtual void collide(GameObject& other) = 0;
};

class Asteroid : public GameObject {
    
};

class SpaceStation : public GameObject {
    
};

class SpaceShip : public GameObject {
public:
    virtual void collide(GameObject& other) override;
    virtual void hitSpaceShip(GameObject& other) {}
    virtual void hitSpaceStation(GameObject& other) {}
    virtual void hitAsteroid(GameObject& other) {}
    
private:
    typedef void (SpaceShip::*HitFunctionPtr) (GameObject&);
    static HitFunctionPtr lookup(const GameObject& whatWeHit);
    
    typedef std::map<std::string, HitFunctionPtr> HitMap;
    
    static HitMap* initializeCollisionMap();
};


SpaceShip::HitMap* SpaceShip::initializeCollisionMap()
{
    HitMap *phm = new HitMap;
    (*phm)["SpaceShip"] = &SpaceShip::hitSpaceShip;
    (*phm)["SpaceStation"] = &SpaceShip::hitSpaceStation;
    (*phm)["Asteroid"] = &SpaceShip::hitAsteroid;
    
    return phm;
}

void SpaceShip::collide(GameObject& other)
{
    HitFunctionPtr hfp = lookup(other);
    if (hfp) {
        (this->*hfp)(other);
    } else {
       // throw CollisionWithUnknownObject(other);
    }
}

SpaceShip::HitFunctionPtr SpaceShip::lookup(const GameObject& whatWeHit)
{
    static std::shared_ptr<HitMap> collisionMap(initializeCollisionMap());
    
    HitMap::iterator mapEntry = collisionMap->find(typeid(whatWeHit).name());
    if (mapEntry == collisionMap->end())
        return 0;
    
    return (*mapEntry).second;
}


//无名命名空间中的内容是当前编译单元私有的
namespace {
    void asteroidShip(GameObject& as, GameObject& ship);
    void stationShip(GameObject& as, GameObject& ship);
    void asteroidStation(GameObject& as, GameObject& ship);
    
    typedef void (*HitFunctionPtr) (GameObject&, GameObject&);
    typedef map< pair<string, string>, HitFunctionPtr> HitMap;
    pair<string, string> makeStringPair(const char *s1, const char *s2);
    HitMap * initializeCollisionMap();
    HitFunctionPtr lookup(const string& class1, const string& class2)
    {
        static shared_ptr<HitMap> collision(initializeCollisionMap());
        
        HitMap::iterator mapEntry = collision->find(make_pair(class1, class2));
        if (mapEntry == collision->end())
            return 0;
        
        return (*mapEntry).second;
    }
}

void processCollision(GameObject& obj1, GameObject& obj2)
{
    HitFunctionPtr phf = lookup(typeid(obj1).name(), typeid(obj2).name());
    if (phf) {
        phf(obj1, obj2);
    } else {
      // throw UnknowCollision(obj1, obj2);
    }
}


#endif /* functionTable_h */
