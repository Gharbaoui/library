let's you want to change the programm behevior
shims is the way you do it just google shims in software

shim: is simple peace of code between your programm and libraries used by the programm

LD_PRELOAD=./libshim.so ./exuctable


to debug shim functions using gdb

gdb ./out
set environment LD_PRELOAD=./libshim.so
break function_name
