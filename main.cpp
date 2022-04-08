#include <iostream>
#include <string>
#include "time.h"
#include "funcs.h"
#include "movie.h"

int main() {
  std::cout << "Task A. Simple functions for time" << std::endl;
  std::cout << "minutesUntil({10, 30}, {13, 40}): " << minutesUntil({10, 30}, {13, 40}) << std::endl;
  std::cout << "minutesSinceMidnight({0,0}): " << minutesSinceMidnight({0,0}) << std::endl;
  std::cout << std::endl;
  std::cout << "Task B. Adding Minutes" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  Time newtime = addMinutes({8, 10}, 75);
  std::cout << "addMinutes({8, 10}, 75): {" << newtime.h << "," << newtime.m << "}" << std::endl;
  std::cout << std::endl;
  std::cout << "Variable Declaration for Further Tasks:" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  std::cout << "Movie movie1 = {'Back to the Future', COMEDY, 116};" << std::endl;
  std::cout << "Movie movie2 = {'Black Panther', ACTION, 134};" << std::endl;
  std::cout << "TimeSlot morning = {movie1, {9, 15}};" << std::endl;
  std::cout << "TimeSlot daytime = {movie2, {12, 15}};" << std::endl;
  std::cout << "TimeSlot evening = {movie2, {16, 45}};" << std::endl;
  Movie movie1 = {"Back to the Future", COMEDY, 116};
  Movie movie2 = {"Black Panther", ACTION, 134};
  TimeSlot morning = {movie1, {9, 15}};
  TimeSlot daytime = {movie2, {12, 15}};
  TimeSlot evening = {movie2, {16, 45}};
  std::cout << std::endl;
  std::cout << "Task C. TimeSlot ending time and printTimeSlot" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  std::cout << "getMovie(move1): " << getMovie(movie1) << std::endl;
  std::cout << "getTimeSlot(morning): " << getTimeSlot(morning) << std::endl;
  std::string testline = getMovie(movie1) + " " + getTimeSlot(morning);
  std::cout << testline << std::endl;
  std::cout << std::endl;
  std::cout << "Task D. Scheduling X after Y?" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  TimeSlot newslot = scheduleAfter(daytime,movie2);
  Time newtime2 = newslot.startTime;
  std::cout << "scheduleAfter(daytime,movie2): {" << newtime2.h << ":" << newtime2.m << "}" << std::endl;
  std::cout << std::endl;
  std::cout << "Task E. Overlapping time slots?" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  std::cout << "timeOverlap(morning,daytime): " << timeOverlap(morning,daytime) << std::endl;
  std::cout << std::endl;
  return 0;
}
