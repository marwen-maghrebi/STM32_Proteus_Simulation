/*
 * fonts.h
 *
 *  Created on: 27 mars 2023
 *      Author: PC-MAGHREBI
 */

#ifndef FONTS_H_
#define FONTS_H_

#include <stdint.h>

typedef struct {
    const uint8_t width;
    uint8_t height;
    const uint16_t *data;
} FontDef;


extern FontDef Font_7x10;
extern FontDef Font_11x18;
extern FontDef Font_16x26;


#endif /* FONTS_H_ */
