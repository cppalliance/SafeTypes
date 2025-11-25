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
    static constexpr auto name_ {
        std::is_same_v<BasisType, std::uint8_t> ? "u8" :
        std::is_same_v<BasisType, std::uint16_t> ? "u16" :
        std::is_same_v<BasisType, std::uint32_t> ? "u32" :
        std::is_same_v<BasisType, std::uint64_t> ? "u64" : "u128"
     };

public:

    explicit constexpr unsigned_integer_basis(const BasisType val) : basis_{val} {}

    explicit constexpr operator BasisType() const { return basis_; }
};

} // namespace boost::safe_numbers::detail

#endif // BOOST_SAFE_NUMBERS_DETAIL_UNSIGNED_INTEGER_BASIS_HPP
