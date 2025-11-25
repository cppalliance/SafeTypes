// Copyright 2025 Matt Borland
// Distributed under the Boost Software License, Version 1.0.
// https://www.boost.org/LICENSE_1_0.txt

#ifndef BOOST_SAFENUMBERS_CONFIG_HPP
#define BOOST_SAFENUMBERS_CONFIG_HPP

#include <boost/config.hpp>

#ifdef BOOST_SAFE_NUMBERS_BUILD_MODULE
#  define BOOST_SAFE_NUMBERS_EXPORT export
#else
#  define BOOST_SAFE_NUMBERS_EXPORT
#endif

#ifdef __has_builtin
#  define BOOST_SAFE_NUMBERS_HAS_BUILTIN(x) __has_builtin(x)
#else
#  define BOOST_SAFE_NUMBERS_HAS_BUILTIN(x) 0
#endif // __has_builtin


#endif // BOOST_SAFENUMBERS_CONFIG_HPP
