# SPDX-License-Identifier: GPL-3.0-or-later
# Zero-dependency 6-language polyglot Makefile
CC      ?= cc
CXX     ?= c++
RUSTC   ?= rustc
JAVAC   ?= javac
JAVA    ?= java
NODE    ?= node
PYTHON  ?= python3

CFLAGS   := -std=c11 -O2 -Wall -Wextra -Werror
CXXFLAGS := -std=c++20 -O2 -Wall -Wextra -Werror

.PHONY: all test test-c test-cpp test-rust test-java test-js test-python clean

all: test

test:
	@if command -v $(CC) >/dev/null 2>&1; then $(MAKE) --no-print-directory test-c; else echo "[skip] C compiler not found"; fi
	@if command -v $(CXX) >/dev/null 2>&1; then $(MAKE) --no-print-directory test-cpp; else echo "[skip] C++ compiler not found"; fi
	@if command -v $(RUSTC) >/dev/null 2>&1; then $(MAKE) --no-print-directory test-rust; else echo "[skip] rustc not found"; fi
	@if command -v $(JAVAC) >/dev/null 2>&1 && command -v $(JAVA) >/dev/null 2>&1; then $(MAKE) --no-print-directory test-java; else echo "[skip] javac/java not found"; fi
	@if command -v $(NODE) >/dev/null 2>&1; then $(MAKE) --no-print-directory test-js; else echo "[skip] node not found"; fi
	@if command -v $(PYTHON) >/dev/null 2>&1; then $(MAKE) --no-print-directory test-python; else echo "[skip] python3 not found"; fi

test-c:
	@mkdir -p bin
	$(CC) $(CFLAGS) c/algo.c c/test_algo.c -lm -o bin/test_c
	./bin/test_c

test-cpp:
	@mkdir -p bin
	$(CXX) $(CXXFLAGS) cpp/algo.cpp cpp/test_algo.cpp -o bin/test_cpp
	./bin/test_cpp

test-rust:
	@mkdir -p bin
	$(RUSTC) --edition 2021 -O rust/test_algo.rs -o bin/test_rust
	./bin/test_rust

test-java:
	@mkdir -p bin
	$(JAVAC) -d bin java/Algo.java java/AlgoTest.java
	$(JAVA) -ea -cp bin AlgoTest

test-js:
	$(NODE) --test js/algo.test.mjs

test-python:
	$(PYTHON) -B python/test_algo.py

clean:
	rm -rf bin python/__pycache__
