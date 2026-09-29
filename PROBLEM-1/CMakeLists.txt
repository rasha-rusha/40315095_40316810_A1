cmake_minimum_required(VERSION 4.1)
project(ASS_1)

set(CMAKE_CXX_STANDARD 20)

add_executable(ASS_1 Invoice.cpp
        Invoice.h
        testDriverInvoice.cpp
        testHarnessInvoice.h)
