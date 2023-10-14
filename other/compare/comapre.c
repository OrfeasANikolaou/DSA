#include "compare.h"
int cmp_int8(void* const a, void* const b){
	char const* A = a;
	char const* B = b;
	if (*A < *B) return -1;
	if (*A > *B) return 1;
	return 0;
}
int cmp_sint8(void* const a, void* const b){
	int8_t const* A = a;
	int8_t const* B = b;
	if (*A < *B) return -1;
	if (*A > *B) return 1;
	return 0;
}
int cmp_uint8(void* const a, void* const b){
	uint8_t const* A = a;
	uint8_t	const* B = b;
	if (*A < *B) return -1;
	if (*A > *B) return 1;
	return 0;
}
int cmp_int16(void* const a, void* const b){
	int16_t const* A = a;
	int16_t	const* B = b;
	if (*A < *B) return -1;
	if (*A > *B) return 1;
	return 0;
}
int cmp_uint16(void* const a, void* const b){
	uint16_t const* A = a;
	uint16_t const* B = b;
	if (*A < *B) return -1;
	if (*A > *B) return 1;
	return 0;
}
int cmp_int32(void* const a, void* const b){
	int32_t const* A = a;
	int32_t const* B = b;
	if (*A < *B) return -1;
	if (*A > *B) return 1;
	return 0;
}
int cmp_uint32(void* const a, void* const b){
	uint32_t const* A = a;
	uint32_t const* B = b;
	if (*A < *B) return -1;
	if (*A > *B) return 1;
	return 0;
}
int cmp_int64(void* const a, void* const b){
	int64_t	const* A = a;
	int64_t	const* B = b;
	if (*A < *B) return -1;
	if (*A > *B) return 1;
	return 0;
}
int cmp_uint64(void* const a, void* const b){
	uint64_t const* A = a;
	uint64_t const* B = b;
	if (*A < *B) return -1;
	if (*A > *B) return 1;
	return 0;
}
int cmp_size_t(void* const a, void* const b){
	size_t const* A = a;
	size_t const* B = b;
	if (*A < *B) return -1;
	if (*A > *B) return 1;
	return 0;
}
int cmp_float32(void* const a, void* const b){
	float const* A = a;
	float const* B = b;
	if (*A < *B) return -1;
	if (*A > *B) return 1;
	return 0;
}
int cmp_float64(void* const a, void* const b){
	double const* A = a;
	double const* B = b;
	if (*A < *B) return -1;
	if (*A > *B) return 1;
	return 0;
}
int cmp_float128(void* const a, void* const b){
	long double	const* A = a;
	long double const* B = b;
	if (*A < *B) return -1;
	if (*A > *B) return 1;
	return 0;
}
