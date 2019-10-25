
#ifndef IMAGE_H
#define IMAGE_H
#include <memory>


class image
{
  public :
    image()=default;
    image(unsigned int _width, unsigned int _height, unsigned int _channels=3);
    ~image() noexcept =default;
    image(const image &)=default;
    image & operator=(const image &)=default;
    image(image &&)=default;
    image & operator=(image &&)=default;
    unsigned int width() const;
    unsigned int height() const;
    unsigned int channels() const;
    unsigned char * pixels();

  private :
    unsigned int m_width=0;
    unsigned int m_height=0;
    unsigned int m_channels=3;
    std::unique_ptr<unsigned char []> m_pixels;  //array of unsigned chars with unique pointer pointing to it


};

#endif
