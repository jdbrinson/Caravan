//
// Created by Julien Brinson on 1/21/17.
//


/* things to do:
1) create a trip class which is composed of clique objects
    a. dates of trip
    b. location(s)
2) create a clique class made of traveler objects
3) create a traveler class with necessary information:
    a. available time
    b. name
    c. date of birth (secure)
    d. passport number (secure)
    e. airline rewards number(s) (secured)
    f. bool - traveler
*/
#include <jni.h>
#include <map>
#include <string>
#include "location.h"
#include "Trip.h"
#include "Traveler.h"
#include "Clique.h"
#include "boost/date_time/posix_time/posix_time.hpp"

using namespace boost::posix_time;
using namespace boost::gregorian;


extern "C"
jstring
Java_com_example_julienbrinson_caravan_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    ptime now = second_clock::local_time();
    std::string hello = "The NEW time is " + to_simple_string(now);
    return env->NewStringUTF(hello.c_str());
}


