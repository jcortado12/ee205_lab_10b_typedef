///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10b_typedef - EE 205 - Spr 2022
///
/// @file addCats.h
/// @version 1.0
///
/// @author Jordan Cortado <jcortado@hawaii.edu>
/// @date   30_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#include "catDatabase.h"


extern bool addCat (
        const char name[],
        const enum Gender gender,
        const enum Breed breed,
        const bool isFixed,
        const Weight weight,
        const enum Color collarColor1,
        const enum Color collarColor2,
        const unsigned long long license
);
