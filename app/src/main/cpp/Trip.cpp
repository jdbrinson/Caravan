//
// Created by Julien Brinson on 1/22/17.
//

#include "Trip.h"
#include "Clique.h"
#include "Traveler.h"
//#include <string>
using namespace std;

//Trip::Trip(string destination, bool overseas, string beginning, string end)

Trip::Trip(string start_date, string end_date, string location, vector<Clique::Clique> all_groups, map<string, Traveler> all_travelers)
{
    destination = location;
    trip_beginning = start_date;
    trip_end = end_date;

}


void Trip::add_traveler(Traveler &explorer){
    all_travelers[explorer.get_name()] = explorer;

}

void Trip::add_travel_group(Clique &pack){
    all_groups.push_back(pack);
}

void Trip::remove_travel_group(Clique &clique) {
    for(vector<Clique>::iterator it = all_groups.begin(); it != all_groups.end();++it){
        if(it->equals(clique)){
            all_groups.erase(it);
        }
    }
}
