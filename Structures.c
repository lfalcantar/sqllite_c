//
//  Structures.c
//  sqlLite
//
//  Created by NOOB-LAB on 11/10/17.
//  Copyright © 2017 Luis Alcantar. All rights reserved.
//
#include <stdlib.h>
#include "Structures.h"


InputBuffer* new_input_buffer(void) {
    InputBuffer* input_buffer = malloc(sizeof(InputBuffer));
    input_buffer->buffer = NULL;
    input_buffer->buffer_length = 0;
    input_buffer->input_length = 0;
    
    return input_buffer;
    
}


