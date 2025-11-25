// Copyright 2025 Matt Borland
// Distributed under the Boost Software License, Version 1.0.
// https://www.boost.org/LICENSE_1_0.txt

#include <boost/safe_numbers/unsigned_integers.hpp>
#include <boost/core/lightweight_test.hpp>

#ifndef BOOST_SAFE_NUMBERS_BUILD_MODULE

#include <random>
#include <cstring>
#include <limits>
#include <type_traits>

#endif

inline std::mt19937_64 rng{42};
inline constexpr std::size_t N {1024};

template <typename T, typename BasisType>
void test()
{
    std::uniform_int_distribution<BasisType> dist {std::numeric_limits<BasisType>::min(),
                                                   std::numeric_limits<BasisType>::max()};

    for (std::size_t i {}; i < N; ++i)
    {
        const auto basis_value {dist(rng)};
        const T value {basis_value};

        BasisType bits;
        std::memcpy(&bits, &value, sizeof(T));

        BOOST_TEST_EQ(basis_value, bits);
    }
}

int main()
{
    using namespace boost::safe_numbers;

    test<u32, std::uint32_t>();

    return boost::report_errors();
}
