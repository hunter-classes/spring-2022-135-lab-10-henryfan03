#include <iostream>
#include "time.h"
#include "movie.h"

void printTime(Time time) {
  std::cout << time.h << ":" << time.m << std::endl;
}

int minutesSinceMidnight(Time time) {
  int hours = time.h * 60;
  int totalmins = hours + time.m;
  return totalmins;
}

int minutesUntil(Time earlier, Time later) {
  int hours1 = earlier.h * 60;
  int totalmins1 = hours1 + earlier.m;
  int hours2 = later.h * 60;
  int totalmins2 = hours2 + later.m;
  int result = totalmins2 - totalmins1;
  return result;
}

Time addMinutes(Time time0, int min) {
  /*int mins = min % 60;
  int totalhours = (min - mins) / 60;
  int newmins = time0.m + mins;
  int remain = newmins % 60;
  int newhours = (newmins-remain) / 60;*/
  int totalmins = (time0.h * 60) + time0.m;
  totalmins += min;
  int resultmin = totalmins % 60;
  int resulthour = (totalmins - resultmin) / 60;
  Time newtime = {resulthour,resultmin};
  return newtime;
}

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie) {
  Movie moviedata = ts.movie;
  int duration = moviedata.duration;
  Time oldtime = ts.startTime;
  Time newtime = addMinutes(oldtime,duration);
  TimeSlot newMovie = {nextMovie,newtime};
  return newMovie;
}

bool timeOverlap(TimeSlot ts1, TimeSlot ts2) {
  Time movie1start = ts1.startTime;
  Movie movie1info = ts1.movie;
  int movieduration = movie1info.duration;
  Time newtime = addMinutes(movie1start,movieduration);
  int mins1 = (newtime.h * 60) + newtime.m;
  Time time2 = ts2.startTime;
  int mins2 = (time2.h * 60) + time2.m;
  if (mins1 > mins2) {
    return true;
  }
  else {
    return false;
  }
}
