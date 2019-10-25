
#ifndef IMAGE_H
#define IMAGE_H
class image
{
  public :
    image()=default;
    ~image() noexcept =default;
    image(const image &)=default;
    image & operator=(const image &)=default;
    image(image &&)=default;
    image & operator=(image &&)=default;
    unsigned int width() const;
    unsigned int height() const;
    unsigned int channels() const;

  private :
    unsigned int m_width=0;
    unsigned int m_height=0;
    unsigned int m_channels=3;
};

#endif
