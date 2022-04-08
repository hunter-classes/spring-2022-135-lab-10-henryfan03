#include <iostream>
#include <string>
#include "funcs.h"
#include "time.h"

std::string getMovie(Movie mv){
    std::string g;
    switch (mv.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    std::string result;
    result = mv.title + " " + g + " (" + std::to_string(mv.duration) + " min)";
    return result;
}

std::string getTimeSlot(TimeSlot ts) {
  Movie moviedata = ts.movie;
  int duration = moviedata.duration;
  Time starttime = ts.startTime;
  int totalmins = (starttime.h * 60) + starttime.m;
  totalmins += duration;
  int resultmin = totalmins % 60;
  int resulthour = (totalmins - resultmin) / 60;
  Time endtime = {resulthour,resultmin};
  std::string result = "[starts at " + std::to_string(starttime.h) + ":" + std::to_string(starttime.m) + ", ends by " + std::to_string(endtime.h) + ":" + std::to_string(endtime.m) + "]";
  return result;
}
