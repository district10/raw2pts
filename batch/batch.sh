#!/bin/bash

for i in *.raw;
do
    o=${i%.*}.txt
    echo "$i => $o"
    ../raw2pts $i $o
done
