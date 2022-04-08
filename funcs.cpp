#include <iostream>
#include "time.h"

void printTime(Time time) {
  cout << time.h << ":" << time.m;
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
