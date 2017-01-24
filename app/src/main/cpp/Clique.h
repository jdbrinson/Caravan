//
// Created by Julien Brinson on 1/22/17.
//

#ifndef CARAVAN_CLIQUE_H
#define CARAVAN_CLIQUE_H
#include "Traveler.h"

class Clique{
private:

    map<std::string, Traveler> ride_or_dies();
    string open_available;
    string close_available;

public:
    Clique();
    void add_member(Traveler *person);
    void remove_member(string name);

};
#endif //CARAVAN_CLIQUE_H
