#ifndef USDS_AUTOTEST_H
#define USDS_AUTOTEST_H

#include <iostream>
#include <ctime>

enum testNumbers
{
	ANY_TEST = 0,
	UNIT_TESTS = 100000,
		UNIT_TESTS__USDS_ERRORS = 101000,
			UNIT_TESTS__USDS_ERRORS_1 = 101001,
			UNIT_TESTS__USDS_ERRORS_2 = 101002,
			UNIT_TESTS__USDS_ERRORS_3 = 101003,
			UNIT_TESTS__USDS_ERRORS_4 = 101004,
		UNIT_TESTS__BINARY_INPUT = 102000,
			UNIT_TESTS__BINARY_INPUT_1 = 102001,
			UNIT_TESTS__BINARY_INPUT_2 = 102002,
			UNIT_TESTS__BINARY_INPUT_3 = 102003,
			UNIT_TESTS__BINARY_INPUT_4 = 102004,
			UNIT_TESTS__BINARY_INPUT_5 = 102005,
			UNIT_TESTS__BINARY_INPUT_6 = 102006,
			UNIT_TESTS__BINARY_INPUT_7 = 102007,
			UNIT_TESTS__BINARY_INPUT_8 = 102008,
			UNIT_TESTS__BINARY_INPUT_9 = 102009,
			UNIT_TESTS__BINARY_INPUT_10 = 102010,
			UNIT_TESTS__BINARY_INPUT_11 = 102011,
			UNIT_TESTS__BINARY_INPUT_12 = 102012,
			UNIT_TESTS__BINARY_INPUT_13 = 102013,
		UNIT_TESTS__BINARY_OUTPUT = 103000,
			UNIT_TESTS__BINARY_OUTPUT_1 = 103001,
			UNIT_TESTS__BINARY_OUTPUT_2 = 103002,
			UNIT_TESTS__BINARY_OUTPUT_3 = 103003,
			UNIT_TESTS__BINARY_OUTPUT_4 = 103004,
		UNIT_TESTS__OBJECT_POOL = 104000,
			UNIT_TESTS__OBJECT_POOL_1 = 104001,
			UNIT_TESTS__OBJECT_POOL_2 = 104002,
			UNIT_TESTS__OBJECT_POOL_3 = 104003,
			UNIT_TESTS__OBJECT_POOL_4 = 104004,
			UNIT_TESTS__OBJECT_POOL_5 = 104005,
			UNIT_TESTS__OBJECT_POOL_6 = 104006,
			UNIT_TESTS__OBJECT_POOL_7 = 104007,
			UNIT_TESTS__OBJECT_POOL_8 = 104008,
			UNIT_TESTS__OBJECT_POOL_9 = 104009,
			UNIT_TESTS__OBJECT_POOL_10 = 104010,
			UNIT_TESTS__OBJECT_POOL_11 = 104011,
		UNIT_TESTS__DICTIONARY_TYPES = 105000,
			UNIT_TESTS__DICTIONARY_TYPES_1 = 105001,
			UNIT_TESTS__DICTIONARY_TYPES_2 = 105002,
			UNIT_TESTS__DICTIONARY_TYPES_3 = 105003,
			UNIT_TESTS__DICTIONARY_TYPES_4 = 105004,
			UNIT_TESTS__DICTIONARY_TYPES_5 = 105005,
			UNIT_TESTS__DICTIONARY_TYPES_6 = 105006,
			UNIT_TESTS__DICTIONARY_TYPES_7 = 105007,
			UNIT_TESTS__DICTIONARY_TYPES_8 = 105008,
	INTAGRATION_TESTS = 200000,
	STRESS_TESTS = 300000
};

extern bool needStart(int current_number, int my_number);

extern void printTime();


#endif