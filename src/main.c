/**
* @license Apache-2.0
*
* Copyright (c) 2018 The Stdlib Authors.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*    http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include "stdlib/math/base/special/abs.h"
#include "stdlib/constants/float64/high_word_abs_mask.h"
#include "stdlib/number/float64/base/to_words.h"

/**
* Computes the absolute value of a double-precision floating-point number.
*
* @param x       number
* @return        absolute value
*
* @example
* double y = stdlib_base_abs( -5.0 );
* // returns 5.0
*/
double stdlib_base_abs( const double x ) {
	stdlib_base_float64_words_t w;
	w.value = x;
	w.words.high &= STDLIB_CONSTANT_FLOAT64_HIGH_WORD_ABS_MASK;
	return w.value;
}
