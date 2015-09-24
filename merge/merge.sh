#!/bin/bash

OUT="merged.tmp"
echo "" > $OUT

for i in *.txt;
do
    echo merging $i
    cat $i >> $OUT
    rm $i
done

mv $OUT ${OUT%.*}.txt
echo merged to ${OUT%.*}.txt
