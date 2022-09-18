#ifndef UNIT_H
#define UNIT_H

#include <string>

//#include "Player.h"
//#include "Tile.h"

class MovementType
{
    std::string name = "Foot";
    std::map<terrainType, int> moveCost;
};

class UnitType
{
    std::string name = "Infantry";
    int deployCost  = 1000;
    int movePoints  = 3;
    int maxFuel     = 99;
    int fuel        = 99;
    int maxAmmo     = 0;
    int ammo        = 0;
    int minRange    = 1;
    int maxRange    = 1;
    bool canCapture = false;
    bool isRanged   = true;
};


class Unit
{
    const int maxHp = 100;
    int curHp       = 100;
    bool isReady    = false;
    //Tile* location  = nullptr;
    //std::map<Tile*, int> costToTile;

    //Player* isOwnedBy = nullptr;
};

#endif