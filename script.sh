#!/bin/bash

cd ~/space/files/study/etu/semester-1/programming/c/
directories=("$(ls -d */)")

for i in ${directories[@]}; do
    cd $i
    files=("$(ls .)")
    mkdir "sources"; mkdir "compiled"

    for j in ${files[@]}; do
        if echo $j | grep ".c"
        then
            mv $j ./sources
        else
            mv $j ./compiled
        fi
    done

    cd ..
done

