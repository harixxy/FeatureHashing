/*
 * This file is part of FeatureHashing
 * Copyright (C) 2014-2015 Wush Wu
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of  MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __HASHED_MODEL_MATRIX_HPP__
#define __HASHED_MODEL_MATRIX_HPP__

#include <cstring>
#include <memory>
#include <boost/detail/endian.hpp>
#include <Rcpp.h>
#include "hash_function.h"
#include "vector_converter.h"
#include <boost/progress.hpp>

typedef std::map< std::string, std::string > NameClassMapping;
typedef std::vector< std::string > StrVec;

#endif //__HASHED_MODEL_MATRIX_HPP__