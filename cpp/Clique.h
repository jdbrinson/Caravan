//
// Created by Julien Brinson on 1/22/17.
//

#ifndef CARAVAN_CLIQUE_H
#define CARAVAN_CLIQUE_H
#include "Traveler.h"

class Clique{
    vector<Traveler::Traveler> ride_or_dies ();
    string open_available;
    string close_available;

};
#endif //CARAVAN_CLIQUE_H
