//
// Created by Julien Brinson on 1/22/17.
//
#include <vector>
#include <map>
#include <string>
#include "Traveler.h"

using namespace std:

#ifndef CARAVAN_TRIP_H
#define CARAVAN_TRIP_H
class Trip {
    bool international;
    string location;
    string start_date;
    string end_date;
    vector<Clique::Clique> all_groups;
    map<string, Traveler::Traveler> all_travelers;

    public:
    add_traveler(Clique);

};
#endif //CARAVAN_TRIP_H
