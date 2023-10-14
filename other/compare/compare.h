#include <stddef.h>
#include <stdint.h>
#ifndef COMPARE_H
#define COMPARE_H
int cmp_int8(void* const , void* const );
int cmp_sint8(void* const , void* const );
int cmp_uint8(void* const , void* const );
int cmp_int16(void* const , void* const );
int cmp_uint16(void* const , void* const );
int cmp_int32(void* const , void* const );
int cmp_uint32(void* const , void* const );
int cmp_int64(void* const , void* const );
int cmp_uint64(void* const , void* const );
int cmp_size_t(void* const , void* const );
int cmp_float32(void* const , void* const );
int cmp_float64(void* const , void* const );
int cmp_float128(void* const , void* const );
#endif

