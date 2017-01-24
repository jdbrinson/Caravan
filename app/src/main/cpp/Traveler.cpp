//
// Created by Julien Brinson on 1/22/17.
//
#include "Traveler.h"
#include <curl/curl.h"
#include <map>
using namespace std;

/*
bool travel_agent;
    string birthday;
    string name;
    string passport_number;
    Map<string, string> airline_rewards;
*/

Traveler::Traveler(string nm, string dob, bool agent?, string window_open, string ){
    name = nm;
    birthday = dob;
    travel_agent = agent?;
    beginning_availability = window_open;
    end_availability = window_close;
}


void Traveler::edit_name(string new_name){
    name = new_name;
}

void Traveler::edit_birthday(string new_dob){
    birthday = new_dob;
}

void Traveler::set_passport_number(string passport_num){
    passport_number  = passport_num;
}
/*
bool check_validity(string airline, string rewards_number){
    CURL *curl = curl_easy_init();

    if(curl) {
      CURLcode res;
      curl_easy_setopt(curl, CURLOPT_URL, "http://example.com");
      res = curl_easy_perform(curl);
      curl_easy_cleanup(curl);
    }
}*/

int Travler::add_airline_rewards(string airline, string rewards_number){
    airline_rewards[airline] = rewards_number;
}


