#include QMK_KEYBOARD_H
#include "layer_names.h"

extern HSV_config_t HSV_matrix_config;

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

const uint16_t PROGMEM ledmaps[][HSV_MATRIX_LED_COUNT][4] = {

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
        {6, WITE}, {7, WITE}, {8, WITE}, {9, WITE}, {10, WITE}, {11, WITE}, {12, WITE}, {13, WITE}, {14, WITE},        {15, WITE}, {16, WITE}, {17, WITE}, {18, WITE}, {19, WITE}, {20, WITE}, {21, WITE}, {22, WITE},

        {23, WITE}, {24, WITE}, {25, WITE}, {26, WITE}, {27, WITE}, {28, WITE}, {29, WITE}, {30, WITE},                 {31, WITE}, {32, WITE}, {33, WITE}, {34, WITE}, {35, WITE}, {36, WITE}, {37, WITE}, {39, WITE}, {40, WITE},

        {41, WITE}, {42, WITE}, {43, WITE}, {44, WITE}, {46, WITE}, {47, WITE}, {49, WITE}, {50, WITE},                 {52, WITE}, {53, WITE}, {55, WITE}, {56, WITE}, {58, WITE}, {59, WITE}, {60, WITE}, {61, WITE},

        {62, WITE}, {63, WITE}, {64, WITE}, {65, WITE}, {66, WITE}, {67, WITE}, {68, WITE}, {69, WITE},                 {70, WITE}, {71, WITE}, {72, WITE}, {73, WITE}, {74, WITE}, {75, WITE}, {76, WITE}, {77, WITE},

        {78, WITE}, {79, WITE}, {80, WITE}, {81, WITE}, {82, WITE}, {83, WITE}, {84, WITE},                              {85, WITE}, {86, WITE}, {88, WITE}, {89, WITE}, {91, WITE}, {92, WITE}, {94, WITE}

    },

    // symbol layer
    [_SYMBOLS] = {
        // backlight
        {0, ____},{1, ____},{2, ____},{3, ____},{4, ____},{5, ____}, {38, ____}, {45, ____}, {48, ____}, {51, ____}, {54, ____}, {57, ____}, {87, ____}, {90, ____}, {93, ____}, {96, ____},

        // keys
        {6, WITE}, {7, WITE}, {8, WITE}, {9, WITE}, {10, WITE}, {11, WITE}, {12, WITE}, {13, WITE}, {14, WITE},        {15, WITE}, {16, WITE}, {17, WITE}, {18, WITE}, {19, WITE}, {20, WITE}, {21, WITE}, {22, WITE},

        {23, WITE}, {24, WITE}, {25, WITE}, {26, WITE}, {27, WITE}, {28, WITE}, {29, WITE}, {30, WITE},                 {31, WITE}, {32, WITE}, {33, WITE}, {34, WITE}, {35, WITE}, {36, WITE}, {37, WITE}, {39, WITE}, {40, WITE},

        {41, WITE}, {42, WITE}, {43, WITE}, {44, WITE}, {46, WITE}, {47, WITE}, {49, WITE}, {50, WITE},                 {52, WITE}, {53, WITE}, {55, WITE}, {56, WITE}, {58, WITE}, {59, WITE}, {60, WITE}, {61, WITE},

        {62, WITE}, {63, WITE}, {64, WITE}, {65, WITE}, {66, WITE}, {67, WITE}, {68, WITE}, {69, WITE},                 {70, WITE}, {71, WITE}, {72, WITE}, {73, WITE}, {74, WITE}, {75, WITE}, {76, WITE}, {77, WITE},

        {78, WITE}, {79, WITE}, {80, WITE}, {81, WITE}, {82, WITE}, {83, WITE}, {84, WITE},                              {85, WITE}, {86, WITE}, {88, WITE}, {89, WITE}, {91, WITE}, {92, WITE}, {94, WITE}

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

bool HSV_matrix_indicators_user(void) {
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
