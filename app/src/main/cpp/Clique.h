//
// Created by Julien Brinson on 1/22/17.
//

#ifndef CARAVAN_CLIQUE_H
#define CARAVAN_CLIQUE_H
#include "Traveler.h"

class Clique{
private:

    map<std::string, Traveler> ride_or_dies;
    string open_available;
    string close_available;
    bool travel_booked;
    void update_window();

public:
    Clique();
    void add_member(Traveler &person);
    void remove_member(Traveler &person);
    bool equals(Clique &compare_clique);

};
#endif //CARAVAN_CLIQUE_H
