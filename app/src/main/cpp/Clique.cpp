//
// Created by Julien Brinson on 1/22/17.
//
#include "Clique.h"
#include <vector>
using namespace std;

Clique::Clique(){
    open_available = ;
    close_available = ;
    travel_booked = false;

}

Clique::add_member(Traveler &person) {
    ride_or_dies[person.get_name]  = people;
}

Clique::remove_member(string name){

}

bool Clique::equals(Clique &compare_clique){
    return this->ride_or_dies == compare_clique.ride_or_dies;
}