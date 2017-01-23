//
// Created by Julien Brinson on 1/22/17.
//

#include "Trip.h"
#include "Clique.h"
#include "Traveler.h"
//#include <string>
using namespace std;

Trip::Trip(string destination, bool overseas, string beginning, string end){
    location = destination;
    international = overseas;
    start_date = beginning;
    end_date = end;
}

Trip::add_traveler(Traveler::Traveler explorer){
    all_travelers[explorer.name] = explorer;

}

Trip::add_clique(Clique::Clique pack){
    all_groups.push_back(pack);
}
