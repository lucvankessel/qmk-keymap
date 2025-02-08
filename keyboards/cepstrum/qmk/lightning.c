#include QMK_KEYBOARD_H
#include "layer_names.h"

extern rgb_config_t rgb_matrix_config;

#define ____    HSV_OFF
#define AZUR    HSV_AZURE
#define BLUE    HSV_BLUE
#define CHAT    HSV_CHARTREUSE
#define CORL    HSV_CORAL
#define CYAN    HSV_CYAN
#define GOLD    HSV_GOLD
#define GOLR    HSV_GOLDENROD
#define GREN    HSV_GREEN
#define MAGN    HSV_MAGENTA
#define ORAG    HSV_ORANGE
#define PINK    HSV_PINK
#define PURP    HSV_PURPLE
#define REDD    HSV_RED
#define SREN    HSV_SPRINGGREEN
#define TEAL    HSV_TEAL
#define TURQ    HSV_TURQUOISE
#define WITE    HSV_WHITE
#define YELW    HSV_YELLOW

const uint16_t PROGMEM ledmaps[][RGB_MATRIX_LED_COUNT][4] = {

    // flag 2 = backlight
    // flag 4 = key light?

    // default layer
    [_DEFAULT] = {
        // backlight
        {0, ____},{1, ____},{2, ____},{3, ____},{4, ____},{5, ____}, {38, ____}, {45, ____}, {48, ____}, {51, ____}, {54, ____}, {57, ____}, {87, ____}, {90, ____}, {93, ____}, {96, ____},

        // keys
        {6, WITE}, {7, WITE}, {8, WITE}, {9, WITE}, {10, WITE}, {11, WITE}, {12, WITE}, {13, WITE}, {14, WITE},        {15, WITE}, {16, WITE}, {17, WITE}, {18, WITE}, {19, WITE}, {20, WITE}, {21, WITE}, {22, WITE},

        {23, WITE}, {24, WITE}, {25, WITE}, {26, WITE}, {27, WITE}, {28, WITE}, {29, WITE}, {30, WITE},                 {31, WITE}, {32, WITE}, {33, WITE}, {34, WITE}, {35, WITE}, {36, WITE}, {37, WITE}, {39, WITE}, {40, WITE},

        {41, WITE}, {42, WITE}, {43, WITE}, {44, WITE}, {46, WITE}, {47, WITE}, {49, WITE}, {50, WITE},                 {52, WITE}, {53, WITE}, {55, WITE}, {56, WITE}, {58, WITE}, {59, WITE}, {60, WITE}, {61, WITE},

        {62, WITE}, {63, WITE}, {64, WITE}, {65, WITE}, {66, WITE}, {67, WITE}, {68, WITE}, {69, WITE},                 {70, WITE}, {71, WITE}, {72, WITE}, {73, WITE}, {74, WITE}, {75, WITE}, {76, WITE}, {77, WITE},

        {78, WITE}, {79, WITE}, {80, WITE}, {81, WITE}, {82, WITE}, {83, WITE}, {84, WITE},                              {85, WITE}, {86, WITE}, {88, WITE}, {89, WITE}, {91, WITE}, {92, WITE}, {94, WITE}

    },


    // nav layer
    [_NAV] = {
        // backlight
        {0, ____},{1, ____},{2, ____},{3, ____},{4, ____},{5, ____}, {38, ____}, {45, ____}, {48, ____}, {51, ____}, {54, ____}, {57, ____}, {87, ____}, {90, ____}, {93, ____}, {96, ____},

        // keys
        {6, TEAL}, {7, TEAL}, {8, TEAL}, {9, TEAL}, {10, TEAL}, {11, TEAL}, {12, TEAL}, {13, TEAL}, {14, TEAL},        {15, TEAL}, {16, TEAL}, {17, TEAL}, {18, TEAL}, {19, TEAL}, {20, TEAL}, {21, TEAL}, {22, TEAL},

        {23, TEAL}, {24, TEAL}, {25, TEAL}, {26, TEAL}, {27, TEAL}, {28, TEAL}, {29, TEAL}, {30, TEAL},                 {31, TEAL}, {32, TEAL}, {33, TEAL}, {34, TEAL}, {35, TEAL}, {36, TEAL}, {37, TEAL}, {39, TEAL}, {40, TEAL},

        {41, TEAL}, {42, TEAL}, {43, TEAL}, {44, TEAL}, {46, TEAL}, {47, TEAL}, {49, TEAL}, {50, TEAL},                 {52, TEAL}, {53, TEAL}, {55, TEAL}, {56, TEAL}, {58, TEAL}, {59, TEAL}, {60, TEAL}, {61, TEAL},

        {62, TEAL}, {63, TEAL}, {64, TEAL}, {65, TEAL}, {66, TEAL}, {67, TEAL}, {68, TEAL}, {69, TEAL},                 {70, TEAL}, {71, TEAL}, {72, TEAL}, {73, TEAL}, {74, TEAL}, {75, TEAL}, {76, TEAL}, {77, TEAL},

        {78, TEAL}, {79, TEAL}, {80, TEAL}, {81, TEAL}, {82, TEAL}, {83, TEAL}, {84, TEAL},                              {85, TEAL}, {86, TEAL}, {88, TEAL}, {89, TEAL}, {91, TEAL}, {92, TEAL}, {94, TEAL}

    },

    // symbol layer
    [_SYMBOLS] = {
        // backlight
        {0, ____},{1, ____},{2, ____},{3, ____},{4, ____},{5, ____}, {38, ____}, {45, ____}, {48, ____}, {51, ____}, {54, ____}, {57, ____}, {87, ____}, {90, ____}, {93, ____}, {96, ____},

        // keys
        {6, PURP}, {7, PURP}, {8, PURP}, {9, PURP}, {10, PURP}, {11, PURP}, {12, PURP}, {13, PURP}, {14, PURP},        {15, PURP}, {16, PURP}, {17, PURP}, {18, PURP}, {19, PURP}, {20, PURP}, {21, PURP}, {22, PURP},

        {23, PURP}, {24, PURP}, {25, PURP}, {26, PURP}, {27, PURP}, {28, PURP}, {29, PURP}, {30, PURP},                 {31, PURP}, {32, PURP}, {33, PURP}, {34, PURP}, {35, PURP}, {36, PURP}, {37, PURP}, {39, PURP}, {40, PURP},

        {41, PURP}, {42, PURP}, {43, PURP}, {44, PURP}, {46, PURP}, {47, PURP}, {49, PURP}, {50, PURP},                 {52, PURP}, {53, PURP}, {55, PURP}, {56, PURP}, {58, PURP}, {59, PURP}, {60, PURP}, {61, PURP},

        {62, PURP}, {63, PURP}, {64, PURP}, {65, PURP}, {66, PURP}, {67, PURP}, {68, PURP}, {69, PURP},                 {70, PURP}, {71, PURP}, {72, PURP}, {73, PURP}, {74, PURP}, {75, PURP}, {76, PURP}, {77, PURP},

        {78, PURP}, {79, PURP}, {80, PURP}, {81, PURP}, {82, PURP}, {83, PURP}, {84, PURP},                              {85, PURP}, {86, PURP}, {88, PURP}, {89, PURP}, {91, PURP}, {92, PURP}, {94, PURP}

    }

};

uint16_t* find_value_by_index(int layer, int index) {
    uint16_t* array = malloc(sizeof(uint16_t) * 4);

    for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
        if (pgm_read_byte(&ledmaps[layer][i][0]) == index) {
            for (int j = 0; j < 4; j++) {
                array[j] = pgm_read_byte(&ledmaps[layer][i][j]);
            }
            break;
        }
    }
    return array;
}

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    uint16_t* ledmap_value = find_value_by_index(layer, i);

    HSV hsv = {
        .h = ledmap_value[1],
        .s = ledmap_value[2],
        .v = ledmap_value[3],
    };

    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }

    free(ledmap_value);
  }
}

bool rgb_matrix_indicators_user(void) {
    switch(get_highest_layer(layer_state)) {
        case _DEFAULT:
            set_layer_color(0);
            break;
        case _NAV:
            set_layer_color(1);
            break;
        case _SYMBOLS:
            set_layer_color(2);
            break;
        default:
             if (rgb_matrix_get_flags() == LED_FLAG_NONE)
                rgb_matrix_set_color_all(0, 0, 0);
            break;
    }
    return true;
}
