#ifndef Input_Data_h
#define Input_Data_h

#include <Arduino.h>

typedef enum {
    TC_UNDEF = 0,
    TC_PRESSED_DOWN,
    TC_RELEASED,
} input_state;
/*!
 * @brief The class which contains the input data
 */
typedef struct _input_data {
  int key;
  int x;
  int y;
  int dx;
  int dy;
  input_state state;

} input_data;
#endif