#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "time.h"
#include "movie.h"

TEST_CASE("minutesUntil Case") {
  Time a = {10, 30};
  Time b = {13, 40};
  CHECK(minutesUntil(a, b) == 190);
  Time c = {10, 30};
  Time d = {11, 00};
  CHECK(minutesUntil(c, d) == 30);
  Time e = {10, 00};
  Time f = {10, 30};
  CHECK(minutesUntil(e, f) == 30);
  Time g = {12, 30};
  Time h = {13, 40};
  CHECK(minutesUntil(g, h) == 70);
  Time i = {20, 30};
  Time j = {21, 00};
  CHECK(minutesUntil(i, j) == 30);
  }

TEST_CASE("From midnight") {
  CHECK(minutesSinceMidnight({0,0}) == 0);
  CHECK(minutesSinceMidnight({1,0}) == 60);
  CHECK(minutesSinceMidnight({1,30}) == 90);
  CHECK(minutesSinceMidnight({0,30}) == 30);
  CHECK(minutesSinceMidnight({2,0}) == 120);
  CHECK(minutesSinceMidnight({2,30}) == 150);
}

TEST_CASE("addMinutes") {
  Time a = {9,25};
  Time b = addMinutes({8, 10}, 75);
  CHECK(b.h == a.h);
  CHECK(b.m == a.m);
}

TEST_CASE("GetMovie") {
  Movie movie1 = {"Back to the Future", COMEDY, 116};
  Movie movie2 = {"Black Panther", ACTION, 134};
  TimeSlot morning = {movie1, {9, 15}};
  TimeSlot daytime = {movie2, {12, 15}};
  TimeSlot evening = {movie2, {16, 45}};
  CHECK(getMovie(movie1) == "Back to the Future COMEDY (116 min)");
}

TEST_CASE("GetDuration") {
  Movie movie1 = {"Back to the Future", COMEDY, 116};
  Movie movie2 = {"Black Panther", ACTION, 134};
  TimeSlot morning = {movie1, {9, 15}};
  TimeSlot daytime = {movie2, {12, 15}};
  TimeSlot evening = {movie2, {16, 45}};
  CHECK(getTimeSlot(morning) == "[starts at 9:15, ends by 11:11]");
}
