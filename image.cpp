
#include "image.h"

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
