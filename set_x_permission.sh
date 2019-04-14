#!/bin/bash

#Script that takes a filename as an argument, and if it is a regular file, adds
#executable functionality onto it

if [ "$#" == 1 ]; then
    if [ -e "$1" ]; then
        if [ -f "$1" ]; then
            chmod +x "$1"
        else
            echo "The file you have provided is not a regular file."
        fi
    else
        echo "The file you have provided does not exist."
    fi
else
    echo "Usage: set_x_permisson.sh [filename]. Exiting..."
fi