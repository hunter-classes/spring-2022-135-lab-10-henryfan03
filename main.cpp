#include <iostream>
#include "time.h"
#include "funcs.h"

int main() {
  Time now;    // creates a new variable (or object)
  now.h = 17;  // assigns its hours field
  now.m = 45;  // assigns its minutes field
  Time t = { 17, 45 };
  minutesUntil( {10, 30}, {13, 40} );
  Time morningLecture = {8, 10};
  Time myAlarm;              // make another variable
  myAlarm = morningLecture;    // copying
  printTime(morningLecture);   // will print 8:10
  printTime(myAlarm);        // will print 8:10 as well
                          // You may be late for the class tho
  return 0;
}
