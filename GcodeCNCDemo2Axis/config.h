#ifndef CONFIG_H
#define CONFIG_H
//------------------------------------------------------------------------------
// 2 Axis CNC Demo
// dan@marginallycelver.com 2013-08-30
//------------------------------------------------------------------------------
// Copyright at end of file.
// please see http://www.github.com/MarginallyClever/GcodeCNCDemo for more information.


//------------------------------------------------------------------------------
// CONSTANTS
//------------------------------------------------------------------------------
// supported control boards
#define AMS1 (1)

// change this line to select a different control board for your CNC.
#define CONTROLLER AMS1


#define VERSION        (1)  // firmware version
#define BAUD           (57600)  // How fast is the Arduino talking?
#define MAX_BUF        (64)  // What is the longest message Arduino can store?
#define STEPS_PER_TURN (4096)  // depends on your stepper motor.  most are 200.
#define MIN_STEP_DELAY (800.0)
#define MAX_FEEDRATE   (1000000.0/MIN_STEP_DELAY)
#define MIN_FEEDRATE   (0.01)


// for arc directions
#define ARC_CW          (1)
#define ARC_CCW         (-1)
// Arcs are split into many line segments.  How long are the segments?
#define MM_PER_SEGMENT  (4)

//------------------------------------------------------------------------------
// METHODS
//------------------------------------------------------------------------------
extern void m1step(int dir);
extern void m2step(int dir);
extern void disable();
extern void setup_controller();


/**
* This file is part of GcodeCNCDemo.
*
* GcodeCNCDemo is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* GcodeCNCDemo is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with Foobar. If not, see <http://www.gnu.org/licenses/>.
*/
#endif
