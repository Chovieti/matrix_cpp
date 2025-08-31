CC = gcc
FLAGS = -Wall -Wextra -std=c++17 -lstdc++
TEST_FLAGS = -lgtest -lgtest_main

UNAME := $(shell uname)
ifeq ($(UNAME), Darwin)
	FLAGS = -ld64 -Wall -Wextra -std=c++17 -lstdc++
endif

SRC_DIR = lib
TEST_DIR = tests
BUILD_DIR = $(TEST_DIR)/build
OUTPUT_DIR = $(TEST_DIR)/report
SRC_FILES = $(wildcard $(SRC_DIR)/*.cpp)
CLEAN_FILES = $(wildcard *.o) \
				s21_matrix_oop.a \
				$(BUILD_DIR) \
				*.gcov \
				runTests \
				*.json \
				$(OUTPUT_DIR) \
				*gcno
TEST_FILES = $(wildcard $(TEST_DIR)/*.cpp)

all: clean test

s21_matrix_oop.a: $(SRC_FILES)
	$(CC) $(FLAGS) -c $(SRC_FILES)
	ar rcs $@ *.o

gcov_report_common:
	mkdir -p $(BUILD_DIR)
	$(CC) --coverage -fPIC -O0 $(FLAGS) $(SRC_FILES) $(TEST_FILES) -o $(BUILD_DIR)/test_cov_runner $(TEST_FLAGS)
	./$(BUILD_DIR)/test_cov_runner

gcovr_report: gcov_report_common
	mkdir -p $(OUTPUT_DIR)
	gcovr -e 'tests/*' --html $(OUTPUT_DIR)/gcovr_report.html

lcov_report: gcov_report_common
	rm -rf $(BUILD_DIR)/test_cov_runner-Tests*.gcda
	@mkdir -p $(OUTPUT_DIR)
	@lcov --capture --directory . --output-file $(OUTPUT_DIR)/coverage.info
	@lcov --remove $(OUTPUT_DIR)/coverage.info '/usr/*' -o $(OUTPUT_DIR)/coverage.info
	@genhtml $(OUTPUT_DIR)/coverage.info --output-directory $(OUTPUT_DIR)

gcov_report_console: gcov_report_common
	rm -rf  $(BUILD_DIR)/test_cov_runner-Tests*.gcno
	gcov -H $(BUILD_DIR)/test_cov_runner-*.gcno | grep -v '/usr/' | grep -v '.h'

clean:
	rm -rf $(CLEAN_FILES)

test: s21_matrix_oop.a
	$(CC) $(FLAGS) -o runTests $(TEST_FILES) s21_matrix_oop.a $(TEST_FLAGS)
	./runTests

.PHONY: all clean test