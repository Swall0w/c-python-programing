## C-PYTHON Programing

## How to Build

    gcc -fPIC -o hello.o -c hello.c
    gcc -fPIC -I/usr/include/python -o helloWrap.o -c helloWrap.c
    gcc -shared hello.o helloWrap.o -o hellomodule.so
