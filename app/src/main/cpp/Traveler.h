//
// Created by Julien Brinson on 1/21/17.
//
#include <ctime>
#include <string>
using namespace std;
#ifndef CARAVAN_TRAVELER_H
#define CARAVAN_TRAVELER_H
class Traveler {
    bool travel_agent;
    string birthday;
    string passport_number;
    map<string, string> airline_rewards();

    public:
    Traveler(string name, string birthday);
    string name;
    string beginning_availability;
    string end_availability;
    void set_passport_number(string);
    int add_airline_rewards(string, string);
    void edit_name(string);
    void edit_birthday(string);

};
#endif //CARAVAN_TRAVELER_H
