#include "RGBAPixel.h"

namespace cs221util {

    RGBAPixel::RGBAPixel() {
        r = 255;
        g = 255;
        b = 255;
        a = 1.0;
    }

    RGBAPixel::RGBAPixel(unsigned char rChosen, unsigned char gChosen, unsigned char bChosen) {
        r = rChosen;
        g = gChosen;
        b = bChosen;
        a = 1.0;
    }

    RGBAPixel::RGBAPixel(unsigned char rChosen, unsigned char gChosen, unsigned char bChosen, double aChosen) {
        r = rChosen;
        g = gChosen;
        b = bChosen;
        a = aChosen;
    }
}
