#ifndef MODCRAWLERS_H
#define MODCRAWLERS_H

#include "SPI.H"
#include "PixelBuffer.h"

class ModCrawlers
{
public:
    ModCrawlers(int nLEDs, uint8_t *table_);
    ~ModCrawlers();
    void update(PixelBuffer &pb_);
    uint16_t length;
    int inc;
    int offset;
    float rate_r;
    float rate_g;
    float rate_b;

private:
    static const uint8_t N_COLORS = 3;

    uint8_t *table; 
    float phasor_r;
    float phasor_g;
    float phasor_b;
    int16_t counter;
    int nLEDs;
    static const float MAX_BRIGHTNESS = 128.0f;
};

#endif
