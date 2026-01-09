#ifndef CS221UTIL_RGBAPIXEL_H
#define CS221UTIL_RGBAPIXEL_H

namespace cs221util {
    class RGBAPixel {
    public: 
        unsigned char r;
        unsigned char g;
        unsigned char b;
        double a;

        RGBAPixel();
        RGBAPixel(unsigned char r, unsigned char g, unsigned char b);
        RGBAPixel(unsigned char r, unsigned char g, unsigned char b, double a);
    };
}

#endif // RGBAPIXEL_H
