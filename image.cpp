
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
