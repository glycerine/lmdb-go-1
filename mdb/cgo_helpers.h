// THE AUTOGENERATED LICENSE. ALL THE RIGHTS ARE RESERVED BY ROBOTS.

// WARNING: This file has automatically been generated on Sun, 28 Feb 2016 23:09:26 MSK.
// By http://git.io/cgogen. DO NOT EDIT.

#include "lmdb.h"
#include <stdlib.h>
#pragma once

#define __CGOGEN 1

// MDB_cmp_func_15aea10f is a proxy for callback MDB_cmp_func.
int MDB_cmp_func_15aea10f(MDB_val* a, MDB_val* b);

// MDB_rel_func_3a9876a5 is a proxy for callback MDB_rel_func.
void MDB_rel_func_3a9876a5(MDB_val* item, void* oldptr, void* newptr, void* relctx);

// MDB_assert_func_635f7c32 is a proxy for callback MDB_assert_func.
void MDB_assert_func_635f7c32(MDB_env* env, char* msg);

// MDB_msg_func_86d0dcef is a proxy for callback MDB_msg_func.
int MDB_msg_func_86d0dcef(char* msg, void* ctx);
