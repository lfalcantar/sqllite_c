//
//  ExecuteStatements.h
//  sqlLite
//
//  Created by NOOB-LAB on 11/12/17.
//  Copyright © 2017 Luis Alcantar. All rights reserved.
//

#ifndef ExecuteStatements_h
#define ExecuteStatements_h

#include <stdio.h>
#include "Structures.h"
#include "Enumerations.h"
#include "PageContainer.h"

PrepareResult prepare_statement(InputBuffer* input_buffer, Statement* statement);
ExecuteResult execute_statement(Statement* statement, Table* table);



#endif /* ExecuteStatements_h */
