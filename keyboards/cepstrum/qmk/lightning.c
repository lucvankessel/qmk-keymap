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
        {0, ____},{1, ____},{2, ____},{3, ____},{4, ____},{5, ____}, {38, ____}, 45, ____}, {48, ____}, {51, ____}, {54, ____}, {57, ____}, {87, ____}, {90, ____}, {93, ____}, {96, ____},
        
        // keys
        {6, WHITE}, {7, WHITE}, {8, WHITE}, {9, WHITE}, {10, WHITE}, {11, WHITE}, {12, WHITE}, {13, WHITE}, {14, WHITE},        {15, WHITE}, {16, WHITE}, {17, WHITE}, {18, WHITE}, {19, WHITE}, {20, WHITE}, {21, WHITE}, {22, WHITE},
        
        {23, WHITE}, {24, WHITE}, {25, WHITE}, {26, WHITE}, {27, WHITE}, {28, WHITE}, {29, WHITE}, {30, WHITE},                 {31, WHITE}, {32, WHITE}, {33, WHITE}, {34, WHITE}, {35, WHITE}, {36, WHITE}, {37, WHITE}, {39, WHITE}, {40, WHITE},
        
        {41, WHITE}, {42, WHITE}, {43, WHITE}, {44, WHITE}, {46, WHITE}, {47, WHITE}, {49, WHITE}, {50, WHITE},                 {52, WHITE}, {53, WHITE}, {55, WHITE}, {56, WHITE}, {58, WHITE}, {59, WHITE}, {60, WHITE}, {61, WHITE},
        
        {62, WHITE}, {63, WHITE}, {64, WHITE}, {65, WHITE}, {66, WHITE}, {67, WHITE}, {68, WHITE}, {69, WHITE},                 {70, WHITE}, {71, WHITE}, {72, WHITE}, {73, WHITE}, {74, WHITE}, {75, WHITE}, {76, WHITE}, {77, WHITE},
        
        {78, WHITE}, {79, WHITE}, {80, WHITE}, {81, WHITE}, {82, WHITE}, {83, WHITE}, {84, WHITE},                              {85, WHITE}, {86, WHITE}, {88, WHITE}, {89, WHITE}, {91, WHITE}, {92, WHITE}, {94, WHITE},
        
    },


    // nav layer
    [_NAV] = {
        // backlight
        {0, ____},{1, ____},{2, ____},{3, ____},{4, ____},{5, ____}, {38, ____}, 45, ____}, {48, ____}, {51, ____}, {54, ____}, {57, ____}, {87, ____}, {90, ____}, {93, ____}, {96, ____},
        
        // keys
        {6, WHITE}, {7, WHITE}, {8, WHITE}, {9, WHITE}, {10, WHITE}, {11, WHITE}, {12, WHITE}, {13, WHITE}, {14, WHITE},        {15, WHITE}, {16, WHITE}, {17, WHITE}, {18, WHITE}, {19, WHITE}, {20, WHITE}, {21, WHITE}, {22, WHITE},
        
        {23, WHITE}, {24, WHITE}, {25, WHITE}, {26, WHITE}, {27, WHITE}, {28, WHITE}, {29, WHITE}, {30, WHITE},                 {31, WHITE}, {32, WHITE}, {33, WHITE}, {34, WHITE}, {35, WHITE}, {36, WHITE}, {37, WHITE}, {39, WHITE}, {40, WHITE},
        
        {41, WHITE}, {42, WHITE}, {43, WHITE}, {44, WHITE}, {46, WHITE}, {47, WHITE}, {49, WHITE}, {50, WHITE},                 {52, WHITE}, {53, WHITE}, {55, WHITE}, {56, WHITE}, {58, WHITE}, {59, WHITE}, {60, WHITE}, {61, WHITE},
        
        {62, WHITE}, {63, WHITE}, {64, WHITE}, {65, WHITE}, {66, WHITE}, {67, WHITE}, {68, WHITE}, {69, WHITE},                 {70, WHITE}, {71, WHITE}, {72, WHITE}, {73, WHITE}, {74, WHITE}, {75, WHITE}, {76, WHITE}, {77, WHITE},
        
        {78, WHITE}, {79, WHITE}, {80, WHITE}, {81, WHITE}, {82, WHITE}, {83, WHITE}, {84, WHITE},                              {85, WHITE}, {86, WHITE}, {88, WHITE}, {89, WHITE}, {91, WHITE}, {92, WHITE}, {94, WHITE},
        
    },

    // symbol layer
    [_SYMBOLS] = {
        // backlight
        {0, ____},{1, ____},{2, ____},{3, ____},{4, ____},{5, ____}, {38, ____}, 45, ____}, {48, ____}, {51, ____}, {54, ____}, {57, ____}, {87, ____}, {90, ____}, {93, ____}, {96, ____},
        
        // keys
        {6, WHITE}, {7, WHITE}, {8, WHITE}, {9, WHITE}, {10, WHITE}, {11, WHITE}, {12, WHITE}, {13, WHITE}, {14, WHITE},        {15, WHITE}, {16, WHITE}, {17, WHITE}, {18, WHITE}, {19, WHITE}, {20, WHITE}, {21, WHITE}, {22, WHITE},
        
        {23, WHITE}, {24, WHITE}, {25, WHITE}, {26, WHITE}, {27, WHITE}, {28, WHITE}, {29, WHITE}, {30, WHITE},                 {31, WHITE}, {32, WHITE}, {33, WHITE}, {34, WHITE}, {35, WHITE}, {36, WHITE}, {37, WHITE}, {39, WHITE}, {40, WHITE},
        
        {41, WHITE}, {42, WHITE}, {43, WHITE}, {44, WHITE}, {46, WHITE}, {47, WHITE}, {49, WHITE}, {50, WHITE},                 {52, WHITE}, {53, WHITE}, {55, WHITE}, {56, WHITE}, {58, WHITE}, {59, WHITE}, {60, WHITE}, {61, WHITE},
        
        {62, WHITE}, {63, WHITE}, {64, WHITE}, {65, WHITE}, {66, WHITE}, {67, WHITE}, {68, WHITE}, {69, WHITE},                 {70, WHITE}, {71, WHITE}, {72, WHITE}, {73, WHITE}, {74, WHITE}, {75, WHITE}, {76, WHITE}, {77, WHITE},
        
        {78, WHITE}, {79, WHITE}, {80, WHITE}, {81, WHITE}, {82, WHITE}, {83, WHITE}, {84, WHITE},                              {85, WHITE}, {86, WHITE}, {88, WHITE}, {89, WHITE}, {91, WHITE}, {92, WHITE}, {94, WHITE},
        
    }

}

uint16_t* find_value_by_index(int layer, int index) {
    uint16_t* array = malloc(sizeof(uint16_t) * 4);

    for (int = 0; i < RGB_MATRIX_LED_COUNT; i ++) {
        if (pgm_read_byte(&ledmaps[layer][i][0]) == index) {
            for (int j = 0; j<4; j++) {
                array[j] = pgm_read_byte(&ledmaps[layer][i][j]);
            }
            break;
        }
    }
    return array;
}

void set_layer_color(int layer) {
    for(int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
        uint16_t* ledmap_value = find_value_by_index(layer, i)
        rgb_matrix_set_color(i, ledmap_value[1], ledmap_value[2], ledmap_value[3]);
    
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
            rgb_matrix_set_color_all(0, 0, 0);
    }
    return true;
}