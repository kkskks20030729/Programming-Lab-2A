//NRMN: DO NOT EDIT THIS FILE. NOT YOUR CONCERN.
#include "main.hpp"
#include "catch.hpp"

TEST_CASE("Test for minus Sample 1", "Sample 1")
{
    REQUIRE(getminus(512.0, 2, 0, -64) == Approx(-5.6568542494923806));   //2, 0, -64 ==> disc. (512), 5.6568542494923806, -5.6568542494923806
}

TEST_CASE("Test for minus Sample 2", "Sample 2")
{
    REQUIRE(getminus(432, 3, 0, -36) == Approx(-3.4641016151377548));  //3, 0, -36 ==> disc. (432), 3.4641016151377548, -3.4641016151377548
}

TEST_CASE("Test for minus Sample 3", "Sample 3")
{
    REQUIRE(getminus(141, 7, 13, 1) == Approx(-1.7767387205027083));  //7, 13, 1 ==> disc. (141), -0.080404136640148796, -1.7767387205027083
}

TEST_CASE("Test for minus Sample 4", "Sample 4")
{
    REQUIRE(getminus(16, 5, 6, 1) == Approx(-1.0));      ////5, 6, 1 ==> disc. (16), -0.2, -1.0
}

TEST_CASE("Test for minus Sample 5", "Sample 5")
{
    REQUIRE(getminus(177.0, 4, 15, 3) == Approx(-3.5380168369562588));  //4, 15, 3 ==> disc. (177), -0.21198316304374121, -3.5380168369562588
}

TEST_CASE("Test for minus Sample 6", "Sample 6")
{
    REQUIRE(getminus(124, 9, 14, 2) == Approx(-1.3964182625366692));  //9, 14, 2 ==> disc. (124), -0.15913729301888649, -1.3964182625366692
}

//2, 0, -64 ==> disc. (512), 5.6568542494923806, -5.6568542494923806
//3, 0, -36 ==> disc. (432), 3.4641016151377548, -3.4641016151377548
//7, 13, 1 ==> disc. (141), -0.080404136640148796, -1.7767387205027083
//9, 0, 49 ==> disc. (-1764), complex
//5, 6, 1 ==> disc. (16), -0.2, -1.0
//2, 0, 9 ==> disc. (-72), complex
//4, 0, 15 ==> disc. (-240), complex
//4, 15, 3 ==> disc. (177), -0.21198316304374121, -3.5380168369562588
//9, 14, 2 ==> disc. (124), -0.15913729301888649, -1.3964182625366692
//try for return double