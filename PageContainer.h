//
//  PageContainer.h
//  sqlLite
//
//  Created by NOOB-LAB on 11/13/17.
//  Copyright © 2017 Luis Alcantar. All rights reserved.
//

#ifndef PageContainer_h
#define PageContainer_h

#include <stdio.h>

extern const uint32_t TABLE_MAX_ROWS;

struct Table_t {
    void* pages[100];
    uint32_t num_rows;
};typedef struct Table_t Table;

Table* new_table(void);

void* row_slot(Table* table, uint32_t row_num);

void serialize_row(Row* source, void* destination);

void deserialize_row(void* source, Row* destination);

void print_row(Row* row);

#endif /* PageContainer_h */
