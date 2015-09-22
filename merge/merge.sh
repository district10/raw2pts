#!/bin/bash

OUT = "../merged.txt"
echo "" > $OUT

for i in *.txt;
do
    echo merging $i
    cat $i >> $OUT
done

echo merged to $OUT
