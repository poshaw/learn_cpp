# Learn C++

## Overhead

This exersise assumes you are using linux

Clone this to a local machine
``` bash
$ git clone git@github.com:poshaw/learn_cpp.git
```

Make changes to some files
``` bash
$ nvim README.md
```

Commit the changes
``` bash
$ git commit -a -m $(date +%Y%m%d_%H%M)
```

And push these changes back to your repo on github
``` bash
$ git push -u origin main
```

## Hello World

Create a new directory to hold our helloWorld.cpp
``` bash
$ mkdir 01_helloWorld && cd $_
```

Create helloWorld.cpp
``` bash
$ nvim helloWorld.cpp
```

Type the following progam:

helloWorld.cpp
``` cpp
#include<iostream>

int main() {
        // print hello world
        std::cout<<"Hello World!\n";

        return 0;
}
```

We need to compile our program, so let's make a makefile
``` bash
$ nvim makefile
```

makefile
``` make
CC=g++
CFLAGS = -Wall -g
OUTPUT_OPTION=-MMD -MP -o $@
LDLIBS=-lm

SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
DEP=$(SRC:.cpp=.d)

.PHONY: clean

helloWorld: helloWorld.o

-include $(DEP)

clean:
        rm -f *~ core $(OBJ) $(DEP) helloWorld
```

Now compile using the program
``` bash
$ make
```

And run it!
``` bash
$ ./helloWorld
```

If your output shows the following you did it!
``` bash
Hello World!
```
