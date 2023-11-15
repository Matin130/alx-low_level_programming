#!/bin/bash
gcc -c library/*.c
ar rc liball.a library/*.o
ranlib liball.a
