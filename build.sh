#!/bin/bash

echo "Compiling Hexapawn..."

g++ -o Hexapawn -I ./Assets -I ./Engine ./Assets/*.cpp ./Engine/*.cpp 

exit 0
