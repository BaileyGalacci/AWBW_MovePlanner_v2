#ifndef PLAYER_H
#define PLAYER_H



class Player
{
    std::vector<Unit> Units;
    std::vector<Unit*> unitKOs;
    std::vector<Unit> UnitsLost;

    int unitsReady = 0;
    int income = 0;
    int bankroll = 0;
    //CO_type CO = ANDY;

};

#endif