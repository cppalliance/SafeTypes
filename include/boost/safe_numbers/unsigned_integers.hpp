// Copyright 2025 Matt Borland
// Distributed under the Boost Software License, Version 1.0.
// https://www.boost.org/LICENSE_1_0.txt

#ifndef BOOST_SAFE_NUMBERS_UNSIGNED_INTEGERS_HPP
#define BOOST_SAFE_NUMBERS_UNSIGNED_INTEGERS_HPP

#include <boost/safe_numbers/detail/unsigned_integer_basis.hpp>

#ifndef BOOST_SAFE_NUMBERS_BUILD_MODULE

#include <cstdint>

#endif

namespace boost::safe_numbers {

using u32 = detail::unsigned_integer_basis<std::uint32_t>;

} // namespace boost::safe_numbers

#endif // BOOST_SAFE_NUMBERS_UNSIGNED_INTEGERS_HPP
