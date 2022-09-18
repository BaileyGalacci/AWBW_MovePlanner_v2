#ifndef TILE_H
#define TILE_H

#include <vector>
#include <map>

//#include "Player.h"
//#include "Unit.h"

enum terrainType
{
    ROAD    = 0,
    SHOAL,
    PLAIN,
    FOREST,
    SILO,
    SILO_U,
    MOUNTAIN,
    CITY,
    BASE,
    AIRPORT,
    PORT,
    TOWER,
    HQ,
    LAB
};

class TileFogState
{
    std::map<Player*, int> playerVisionCount;
    bool canHide = false;
    bool alwaysVisible = false;
};

class Tile 
{
    terrainType Terrain = ROAD;
    bool isCapturable = false;
    Player* isOwnedBy = nullptr;
    Unit* hasUnit = nullptr;
    std::vector<Tile*> neighbors;
    TileFogState FogState;
    
};


#endif