//
//  Enumerations.h
//  sqlLite
//
//  Created by NOOB-LAB on 11/12/17.
//  Copyright © 2017 Luis Alcantar. All rights reserved.
//

#ifndef Enumerations_h
#define Enumerations_h

#include <stdio.h>

enum MetaCommandResult_t
{
    META_COMMAND_SUCCESS,
    META_COMMAND_UNRECOGNIZED_COMMAND
}; typedef enum MetaCommandResult_t MetaCommandResult;

enum PrepareResult_t
{
    PREPARE_SUCCESS,
    PREPARE_UNRECOGNIZED_STATEMENT
}; typedef enum PrepareResult_t PrepareResult;

enum StatementType_t
{
    STATEMENT_INSERT,
    STATEMENT_SELECT
}; typedef enum StatementType_t StatementType;

#endif /* Enumerations_h */
