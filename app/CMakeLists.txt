# Sets the minimum version of CMake required to build the native
# library. You should either keep the default value or only pass a
# value of 3.4.0 or lower.

cmake_minimum_required(VERSION 3.4.0)

set(MY_ANDROID_NDK{PATH} ~/Library/Android/sdk/ndk-bundle)

#include_directories(/usr/local/boost_1_63_0/)
#include_directories(${MY_ANDROID_NDK}/sources/boost_1_63_0/android-build/include)
include_directories(${ANDROID_NDK}/sources/boost_1_63_0/android-build/include)

# Creates and names a library, sets it as either STATIC
# or SHARED, and provides the relative paths to its source code.
# You can define multiple libraries, and CMake builds it for you.
# Gradle automatically packages shared libraries with your APK.

add_library( # Sets the name of the library.
             native-lib

             # Sets the library as a shared library.
             SHARED

             # Provides a relative path to your source file(s).
             # Associated headers in the same location as their source
             # file are automatically included.
             src/main/cpp/native-lib.cpp
             src/main/cpp/Clique.cpp
             src/main/cpp/location.cpp
             src/main/cpp/Traveler.cpp
             src/main/cpp/Trip.cpp)
             #/usr/local/boost_1_63_0/boost/date_time/posix_time/posix_time.hpp)

add_library(boost-lib
           STATIC
          IMPORTED)

# must include the full path to import location!
set_target_properties(boost-lib
                      PROPERTIES IMPORTED_LOCATION
                      ${ANDROID_NDK}/sources/boost_1_63_0/android-build/${ANDROID_ABI}/lib/libboost_date_time.a)


target_link_libraries(native-lib boost-lib)

