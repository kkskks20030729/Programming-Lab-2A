//NRMN: DO NOT EDIT THIS FILE. NOT YOUR CONCERN.
#include "main.hpp"
#include "catch.hpp"

TEST_CASE("Test for Discriminant 1", "Sample 1")
{
    REQUIRE(checkdiscriminant(3, 0, -36) == 432);
}

TEST_CASE("Test for Discriminant 2", "Sample 2")
{
    REQUIRE(checkdiscriminant(-12, 13, 0) == 169); 
}

TEST_CASE("Test for Discriminant 3", "Sample 3")
{
    REQUIRE(checkdiscriminant(9, 0, 49) == -1764.0);   
}

TEST_CASE("Test for Discriminant 4", "Sample 4")
{
    REQUIRE(checkdiscriminant(5, 6, 1) == 16.0);   
}

TEST_CASE("Test for Discriminant 5", "Sample 5")
{
    REQUIRE(checkdiscriminant(2, 0, 9) == -72);   
}

TEST_CASE("Test for Discriminant 6", "Sample 6")
{
    REQUIRE(checkdiscriminant(9, 14, 2) == 124.0);   
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
