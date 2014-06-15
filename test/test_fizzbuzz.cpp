#define BOOST_TEST_MODULE FizzBuzzTest

#include "../src/fizzbuzz.hpp"
#include <boost/test/unit_test.hpp>


BOOST_AUTO_TEST_CASE(FizzBuzzAllTest)
{
    auto fb1 = fizzbuzz::FizzBuzz(1, 20);
    auto fb1b = fb1.begin();
    auto fb1e = fb1.end();

    BOOST_CHECK_EQUAL(fb1b != fb1e, true);
    BOOST_CHECK_EQUAL(*fb1b, "1");
    ++fb1b;

    BOOST_CHECK_EQUAL(fb1b != fb1e, true);
    BOOST_CHECK_EQUAL(*fb1b, "2");
    ++fb1b;

    BOOST_CHECK_EQUAL(fb1b != fb1e, true);
    BOOST_CHECK_EQUAL(*fb1b, "Fizz");
    ++fb1b;

    BOOST_CHECK_EQUAL(fb1b != fb1e, true);
    BOOST_CHECK_EQUAL(*fb1b, "4");
    ++fb1b;

    BOOST_CHECK_EQUAL(fb1b != fb1e, true);
    BOOST_CHECK_EQUAL(*fb1b, "Buzz");
    ++fb1b; // next value is 6

    for(std::size_t i = 6; i < 14; ++i)
        ++fb1b;

    BOOST_CHECK_EQUAL(fb1b != fb1e, true);
    BOOST_CHECK_EQUAL(*fb1b, "14");
    ++fb1b;

    BOOST_CHECK_EQUAL(fb1b != fb1e, true);
    BOOST_CHECK_EQUAL(*fb1b, "FizzBuzz");
    ++fb1b; // next value is 16

    for(std::size_t i = 16; i < 20; ++i)
        ++fb1b;

    BOOST_CHECK_EQUAL(fb1b != fb1e, false);
}
