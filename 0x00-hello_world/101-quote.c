#!/bin/bash
gcc -s -masm=intel $CFILE -o 'echo $CFILE | cut -d. -f1'.s
