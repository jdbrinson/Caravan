//
// Created by Julien Brinson on 1/21/17.
//
#include <ctime>
#include <string>
#include <map>
using namespace std;
#ifndef CARAVAN_TRAVELER_H
#define CARAVAN_TRAVELER_H

class Traveler {
    bool travel_agent;
    string birthday;
    string passport_number;
    map<string, string> airline_rewards;
    bool travel_arranged;
    string name;
    string beginning_availability;
    string end_availability;

    public:
    Traveler(string name, string birthday, bool is_Agent, string start_available, string end_available);
    const string get_name();
    const string get_birthday();
    const string get_passport();
    void set_passport_number(string);
    void add_airline_rewards(string airline, string rewards_num);
    void edit_name(string);
    void edit_birthday(string);
    void travel_is_booked();
    const string get_available_start();
    const string get_available_end ();

};
#endif //CARAVAN_TRAVELER_H
