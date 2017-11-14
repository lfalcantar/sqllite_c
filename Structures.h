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
#include "Enumerations.h"

const uint32_t COLUMN_USERNAME_SIZE = 32;
const uint32_t COLUMN_EMAIL_SIZE = 255;

struct Row_t {
    uint32_t id;
    char username[COLUMN_USERNAME_SIZE];
    char email[COLUMN_EMAIL_SIZE];
}; typedef struct Row_t Row;

struct Statement_t {
    StatementType type;
    Row row_to_insert;
}; typedef struct Statement_t Statement;

struct InputBuffer_t {
    char* buffer;
    size_t buffer_length;
    size_t input_length;
};
typedef struct InputBuffer_t InputBuffer;

InputBuffer* new_input_buffer(void);

#endif /* Structures_h */
