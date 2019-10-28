
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

TEST(image,setPixel)
{
    image i(100,100);
    i.setPixel(0,0,255,0,0); //position followed by colour (x,y,r,g,b)
    unsigned char r,g,b;
    i.getPixel(0,0,r,g,b);
    EXPECT_TRUE(r==255);
    EXPECT_TRUE(g==0);
    EXPECT_TRUE(b==0);

    i.setPixel(15,60,23,50,11); //position followed by colour (x,y,r,g,b)
    i.getPixel(15,60,r,g,b);
    EXPECT_TRUE(r==23);
    EXPECT_TRUE(g==50);
    EXPECT_TRUE(b==11);

}

TEST(image,writeFile)
{
    image i(100,100);
    i.setPixel(0,0,255,0,0);
    i.setPixel(1,0,0,255,0);
    i.setPixel(2,0,0,0,255);
    EXPECT_TRUE(i.write("test.png"));  //this is the _fname that is parsed to the image write function
}

TEST(image,clearColour)
{
    image i(100,100);
    i.clearColour(110,255,255);
    i.setPixel(0,0,255,0,0);
    i.setPixel(1,0,0,255,0);
    i.setPixel(2,0,0,0,255);
    EXPECT_TRUE(i.write("test.png"));
}


TEST(image,copyCtor)
{
    image i(100,100);
    i.clearColour(110,255,255);
    i.setPixel(0,0,255,0,0);
    i.setPixel(1,0,0,255,0);
    i.setPixel(2,0,0,0,255);

  // image b=i;
  // unsigned char r,g,b;
  // i.getPixel(0,0,r,g,b);

}
