#pragma once

#include <arabica/cpu/cpu.hpp>
#include <arabica/memory/memory.hpp>
#include <gtest/gtest.h>

class cpu_test_suite : public ::testing::Test {
public:
  static void test_run(void);
};