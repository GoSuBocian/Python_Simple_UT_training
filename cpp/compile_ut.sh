#!/bin/bash

g++ -std=c++11 -g -pthread $1 -lgmock_main -lgtest_main -lgtest -lgmock -lpthread
