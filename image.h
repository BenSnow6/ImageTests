
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
};

#endif
