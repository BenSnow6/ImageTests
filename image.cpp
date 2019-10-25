
#include "image.h"


image::image(unsigned int _width, unsigned int _height, unsigned int _channels)
{
    m_width=_width;
    m_height=_height;
    m_channels=_channels;
    m_pixels = std::make_unique<unsigned char []>(m_width*m_height*m_channels);
}

unsigned char * image::pixels()
{
    return m_pixels.get();
}


void image::setPixel(unsigned int _x, unsigned int _y, unsigned char _r, unsigned char _g, unsigned char _b)
{
//calculate index into array fir red (then +1 green then +2 blue)
    size_t index=0;
    m_pixels[index]=_r;
    m_pixels[index+1]=_g;
    m_pixels[index+2]=_b;
}

void image::getPixel(unsigned int _x, unsigned int _y, unsigned char &o_r, unsigned char &o_g, unsigned char &o_b)
{
    size_t index=0;
    m_pixels[index]=_r;
    m_pixels[index+1]=_g;
    m_pixels[index+2]=_b;
}

unsigned int image::width() const
{
    return m_width;
}

unsigned int image::height() const
{
    return m_height;
}

unsigned int image::channels() const
{
    return m_channels;
}
