//
// Created by Julien Brinson on 1/22/17.
//
#include "Traveler.h"
#include <curl/curl.h"

using namespace std;


Traveler::Traveler(string nm, string dob, bool is_Agent, string start_available, string end_available){
    name = nm;
    birthday = dob;
    travel_agent = is_Agent;
    beginning_availability = start_available;
    end_availability = end_available;
    travel_arranged = false;
}

const string Traveler::get_name(){
    return name;
}

const string Traveler::get_birthday(){
    return birthday;
}
const string Traveler::get_passport(){
    return passport_number;
}

void Traveler::edit_name(string new_name){
    name = new_name;
}

void Traveler::edit_birthday(string new_dob){
    birthday = new_dob;
}

void Traveler::set_passport_number(string passport_num){
    passport_number = passport_num;
}

void Traveler::add_airline_rewards(string airline, string rewards_number){
    airline_rewards[airline] = rewards_number;

}

void Traveler::travel_is_booked(){
    travel_arranged = true;
}


