
#include "image.h"
#include <gtest/gtest.h>
using namespace ::testing;
// for more details on gtest see here https://github.com/google/googletest/blob/master/googletest/docs/primer.md
// my lecture https://nccastaff.bournemouth.ac.uk/jmacey/PP/slides/testing/slides.html#/
TEST(image, fail)
{
    image i;
    EXPECT_EQ(i.width(),0);
    EXPECT_EQ(i.height(),0);
    EXPECT_EQ(i.channels(),3);
}

TEST(image,userCtor)
{
    image i(100,100); //set width and height to 100
    EXPECT_EQ(i.width(),100); //test width and height are 100
    EXPECT_EQ(i.height(),100);
    EXPECT_EQ(i.channels(),3);
    EXPECT_NE(i.pixels(), nullptr); //check the default value of i.pixels is the null pointer

}
