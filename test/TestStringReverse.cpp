#include "catch.hpp"
#include "StringReverse.h"

using namespace CPPLondonUni;

TEST_CASE("A default constructed StringReverse is empty", "[stringreverse]") {
    const StringReverse s;
    CHECK(s.empty());
    REQUIRE(s == "");
}

TEST_CASE("A StringReverse constructed with 'Hello World' becomes 'dlroW olleH'", "[stringreverse]") {
    const StringReverse s{"Hello World"};
    CHECK_FALSE(s == "Hello World");
    CHECK (s == "dlroW olleH");
    CHECK_FALSE(s.empty());
}

TEST_CASE("We receive ", "[stringreverse]") {
    const StringReverse s{"LondonUni"};
    std::string out = s;
    CHECK(out == "inUnodnoL");
}

TEST_CASE("we can move ", "[stringreverse]") {


}