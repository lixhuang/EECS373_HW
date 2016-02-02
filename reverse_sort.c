#include "sort.h"

int compare(const void*a, const void* b)
{
	return *(int*)b - *(int*)a;
}
