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

enum ExecuteResult_t {
    EXECUTE_SUCESS,
    EXECUTE_TABLE_FULL
}; typedef enum  ExecuteResult_t ExecuteResult;

enum MetaCommandResult_t
{
    META_COMMAND_SUCCESS,
    META_COMMAND_UNRECOGNIZED_COMMAND
}; typedef enum MetaCommandResult_t MetaCommandResult;

enum PrepareResult_t
{
    PREPARE_SUCCESS,
    PREPARE_SYNTAX_ERROR,
    PREPARE_UNRECOGNIZED_STATEMENT
}; typedef enum PrepareResult_t PrepareResult;

enum StatementType_t
{
    STATEMENT_INSERT,
    STATEMENT_SELECT
}; typedef enum StatementType_t StatementType;

#endif /* Enumerations_h */
