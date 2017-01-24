//
// Created by Julien Brinson on 1/23/17.
//

#ifndef CARAVAN_LOCATION_H
#define CARAVAN_LOCATION_H
#include <vector>

using namespace std;

class Location{
    string loc_name;
    vector<string> airports;
    vector<string> accomodations;

    public:
    Location(string destination);
    void add_airport(string airport);
    void add_accomodation(string accomodation);

};

#endif //CARAVAN_LOCATION_H
