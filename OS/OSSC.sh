#!/bin/bash

echo "Enter your name:"
read name

echo "Hello $name"
echo "Welcome to Shell Scripting"

echo "Enter two numbers:"
read a
read b

sum=$((a+b))

echo "Sum = $sum"