# Copyright 2025 Matt Borland
# Distributed under the Boost Software License, Version 1.0.
# https://www.boost.org/LICENSE_1_0.txt

cmake_minimum_required(VERSION 3.12...3.20)

project(boost_safenumbers VERSION "${BOOST_SUPERPROJECT_VERSION}" LANGUAGES CXX)

add_library(boost_safenumbers INTERFACE)
add_library(Boost::safenumbers ALIAS boost_safenumbers)

target_compile_features(boost_safenumbers INTERFACE cxx_std_20)

target_include_directories(boost_safenumbers INTERFACE include)

target_link_libraries(boost_safenumbers
        INTERFACE
        Boost::assert
        Boost::config
        Boost::core
        Boost::throw_exception
)

if(BUILD_TESTING)

    add_subdirectory(test)

endif()
