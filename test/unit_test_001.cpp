//
//    FILE: unit_test_001.cpp
//  AUTHOR: Rob Tillaart
// VERSION: 0.1.0
//    DATE: 2024-11-26
// PURPOSE: unit tests for the TEMT6000 LUX sensor
//          https://github.com/RobTillaart/TEMT6000
//          https://github.com/Arduino-CI/arduino_ci/blob/master/REFERENCE.md
//

// supported assertions
// ----------------------------
// assertEqual(expected, actual)
// assertNotEqual(expected, actual)
// assertLess(expected, actual)
// assertMore(expected, actual)
// assertLessOrEqual(expected, actual)
// assertMoreOrEqual(expected, actual)
// assertTrue(actual)
// assertFalse(actual)
// assertNull(actual)


#include <ArduinoUnitTests.h>

#include "Arduino.h"
#include "TEMT6000.h"


unittest_setup()
{
  fprintf(stderr, "TEMT6000_LIB_VERSION:\t%s\n", (char *) TEMT6000_LIB_VERSION);
}


unittest_teardown()
{
}


unittest(test_begin)
{
  TEMT6000 lux(14);
  lux.begin();
  assertEqual(1, 1);
}


unittest_main()


//  -- END OF FILE --

