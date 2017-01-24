//
// Created by Julien Brinson on 1/22/17.
//
#include <vector>
#include <map>
#include <string>
#include "Traveler.h"
#include "Clique.h"

using namespace std;

#ifndef CARAVAN_TRIP_H
#define CARAVAN_TRIP_H
class Trip {
    bool international;
    string destination;
    string start_date;
    string end_date;
    vector<Clique> all_groups;
    map<string, Traveler> all_travelers;

    public:

    //constructor for a trip object
    Trip(string start_date, string end_date, string location; vector<Clique::Clique> all_groups, map<string, Traveler::Traveler> all_travelers);

    // adds traveler to the trip
    void add_traveler(Traveler::Traveler new_traveler);

    //adds clique to the trip
    void add_travel_group(Clique::Clique new_clique);

};
#endif //CARAVAN_TRIP_H
