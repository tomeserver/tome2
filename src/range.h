#pragma once

#include "range_fwd.h"
#include "angband.h"

/*
 * Range
 */
struct range_type
{
	s32b min;
	s32b max;
};

void range_init(range_type *range, s32b min, s32b max);
