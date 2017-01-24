//
// Created by Julien Brinson on 1/22/17.
//
#include "Clique.h"
#include <vector>
using namespace std;

Clique::Clique(){
    travel_booked = false;

}

void Clique::add_member(Traveler &person){
    ride_or_dies[person.get_name()]  = person;
    update_window();
}

void Clique::remove_member(Traveler &person){
    ride_or_dies.erase(person.get_name());
    update_window();
}

bool Clique::equals(Clique &compare_clique){
    return ride_or_dies == compare_clique.ride_or_dies;
}

void Clique::update_window(){
    for(map<std::string, Traveler>::iterator it = ride_or_dies.begin(); it != ride_or_dies.end(); ++it){
        //if the traveler's begining availablity is smaller/after the Clique's open availability
        //reset the Clique's availability to be the most restrictive
        if(open_available < it->second.get_available_start){
            open_available = it->second.get_available_start;
        }
        //same thing for the end availability. to get the most restrictive
        if(close_available > it->second.get_available_end){
            close_available = it->second.get_available_end;
        }
    }
}