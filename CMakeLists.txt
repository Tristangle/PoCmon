cmake_minimum_required(VERSION 3.26)
project(PoCmon C)

set(CMAKE_C_STANDARD 11)

add_executable(PoCmon main.c
        "PoCmon Combat/combat.c"
        combat.h
        "PoCmon Combat/Tours/Tours.c"
        "PoCmon Combat/Tours/Tours.h"
        "PoCmon Combat/Pokemon/Pokemon.c"
        "PoCmon Combat/Pokemon/Pokemon.h"
        "PoCmon Combat/sac.c"
        "PoCmon Combat/sac.h"
)
