#include QMK_KEYBOARD_H
#include "layer_names.h"

extern rgb_config_t rgb_matrix_config;

#define ____    RGB_OFF
#define AZUR    RGB_AZURE
#define BLUE    RGB_BLUE
#define CHAT    RGB_CHARTREUSE
#define CORL    RGB_CORAL
#define CYAN    RGB_CYAN
#define GOLD    RGB_GOLD
#define GOLR    RGB_GOLDENROD
#define GREN    RGB_GREEN
#define MAGN    RGB_MAGENTA
#define ORAG    RGB_ORANGE
#define PINK    RGB_PINK
#define PURP    RGB_PURPLE
#define REDD    RGB_RED
#define SREN    RGB_SPRINGGREEN
#define TEAL    RGB_TEAL
#define TURQ    RGB_TURQUOISE
#define WITE    RGB_WHITE
#define YELW    RGB_YELLOW

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

// uint16_t* find_value_by_index(int layer, int index) {
//     uint16_t* array = malloc(sizeof(uint16_t) * 4);

//     for (int i = 0; i < RGB_MATRIX_LED_COUNT; i ++) {
//         if (pgm_read_byte(&ledmaps[layer][i][0]) == index) {
//             for (int j = 0; j<4; j++) {
//                 array[j] = pgm_read_byte(&ledmaps[layer][i][j]);
//             }
//             break;
//         }
//     }
//     return array;
// }

uint16_t* find_value_by_index(int layer, int index) {
    static uint16_t array[4];  // Use static array to avoid memory allocation issues

    for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
        if (pgm_read_word(&ledmaps[layer][i][0]) == index) {  // Use pgm_read_word
            for (int j = 0; j < 4; j++) {
                array[j] = pgm_read_word(&ledmaps[layer][i][j]);  // Read as word
            }
            return array;
        }
    }
    return NULL;  // Return NULL if index not found
}

// void set_layer_color(int layer) {
//     for(int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
//         uint16_t* ledmap_value = find_value_by_index(layer, i);
//         rgb_matrix_set_color(i, ledmap_value[1], ledmap_value[2], ledmap_value[3]);

//         free(ledmap_value);
//     }
// }

void set_layer_color(int layer) {
    for(int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
        uint16_t* ledmap_value = find_value_by_index(layer, i);
        if (ledmap_value) {  // Check for NULL
            rgb_matrix_set_color(i, ledmap_value[1], ledmap_value[2], ledmap_value[3]);
        }
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
            rgb_matrix_set_color_all(0, 0, 0);
    }
    return true;
}
