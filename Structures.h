//
//  Structures.h
//  sqlLite
//
//  Created by NOOB-LAB on 11/10/17.
//  Copyright © 2017 Luis Alcantar. All rights reserved.
//

#ifndef Structures_h
#define Structures_h

#include <stdio.h>
#include <stddef.h>

struct InputBuffer_t {
    char* buffer;
    size_t buffer_length;
    size_t input_length;
};
typedef struct InputBuffer_t InputBuffer;

InputBuffer* new_input_buffer(void);

#endif /* Structures_h */
