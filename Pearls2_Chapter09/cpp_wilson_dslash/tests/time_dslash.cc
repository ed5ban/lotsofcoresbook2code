// $Id: time_dslash.cc,v 1.1 2008-08-26 13:24:29 bjoo Exp $

#include <iostream>
#include <cstdio>

#include "qdp.h"
#include "unittest.h"

#include "testvol.h"
#include "timeDslash.h"

using namespace QDP;

int main(int argc, char **argv)
{
  // Initialize UnitTest jig
  TestRunner  tests(&argc, &argv, nrow_in);
  tests.addTest(new timeDslash(), "timeDslash" );

  // Run all tests
  tests.run();

  // Testjig is destroyed
  tests.summary();

}

