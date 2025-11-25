// Copyright 2025 Matt Borland
// Distributed under the Boost Software License, Version 1.0.
// https://www.boost.org/LICENSE_1_0.txt

#ifndef BOOST_SAFE_NUMBERS_DETAIL_UNSIGNED_INTEGER_BASIS_HPP
#define BOOST_SAFE_NUMBERS_DETAIL_UNSIGNED_INTEGER_BASIS_HPP

#ifndef BOOST_SAFE_NUMBERS_BUILD_MODULE

#include <concepts>
#include <compare>
#include <limits>

#endif // BOOST_SAFE_NUMBERS_BUILD_MODULE

namespace boost::safe_numbers::detail {

template <typename BasisType>
class unsigned_integer_basis
{
private:

    BasisType basis_;

public:

    explicit constexpr unsigned_integer_basis(const BasisType val) : basis_{val} {}
};

} // namespace boost::safe_numbers::detail

#endif // BOOST_SAFE_NUMBERS_DETAIL_UNSIGNED_INTEGER_BASIS_HPP
