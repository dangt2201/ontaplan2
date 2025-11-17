#!/bin/bash

# Chương trình kiểm tra số nguyên dương hay âm

read -p "Nhap mot so nguyen: " n

if [ $n -gt 0 ]; then
    echo "$n la so duong."
elif [ $n -lt 0 ]; then
    echo "$n la so am."
else
    echo "So ban nhap la 0."
fi
