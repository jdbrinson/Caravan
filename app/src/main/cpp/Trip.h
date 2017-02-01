//
// Created by Julien Brinson on 1/22/17.
//
#include <vector>
#include <map>
#include "Traveler.h"
#include "Clique.h"

using namespace std;

#ifndef CARAVAN_TRIP_H
#define CARAVAN_TRIP_H
class Trip {

    string destination;
    string trip_beginning;
    string trip_end;
    vector<Clique> all_groups;
    map<string, Traveler> all_travelers;

    public:

    //constructor for a trip object
    Trip(string start_date, string end_date, string location);

    // adds traveler to the trip
    void add_traveler(Traveler &new_traveler);

    //adds clique to the trip
    void add_travel_group(Clique &new_clique);

    void remove_traveler(Traveler &traveler);

    void remove_travel_group(Clique &clique);

};
#endif //CARAVAN_TRIP_H
