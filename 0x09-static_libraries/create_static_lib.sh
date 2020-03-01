#!/bin/bash
ar -rc liball.a *.o
gcc main.c -L. -lliball
