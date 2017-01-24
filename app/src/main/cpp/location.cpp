//
// Created by Julien Brinson on 1/23/17.
//

#include "location.h"
#include <string>
using namespace std;


Location::Location(string destination){
    loc_name = destination;
}

void Location::add_airport(string airport) {
    airports.push_back(airport);
}

void Location::add_accomodation(string accomodation) {
    accomodations.push_back(accomodation);
}
