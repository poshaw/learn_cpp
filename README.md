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

Type the following progam
``` cpp
#include<iostream>

int main() {
    // print hello world
    cout<<"Hello World\n";

    return 0;
}
```
