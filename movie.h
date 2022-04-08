#pragma once
#include "time.h"
#include "movie.h"

enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

class Movie {
public:
    std::string title;
    Genre genre;     // only one genre per movie
    int duration;    // in minutes
};

class TimeSlot {
public:
    Movie movie;     // what movie
    Time startTime;  // when it starts
};

std::string getMovie(Movie mv);

std::string getTimeSlot(TimeSlot ts);
