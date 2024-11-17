//NRMN: DO NOT EDIT THIS FILE. NOT YOUR CONCERN.
//#define CATCH_CONFIG_RUNNER // defines main() automatically
#include "catch.hpp"
#include "main.hpp"

TEST_CASE("Test for Sample 1 - x", "[Px]")
{
    REQUIRE(get_Px(2.0, 2.0, 3.0) == Approx(-0.11745328985524));
}

TEST_CASE("Test for Sample 1 - y", "[Py]")
{
    REQUIRE(get_Py(2.0, 2.0, 3.0) == Approx(0.25664012040491)); 
}

TEST_CASE("Test for Sample 1 - z", "[Pz]")
{
    REQUIRE(get_Pz(2.0, 3.0) == Approx(-1.9799849932009));   
}
