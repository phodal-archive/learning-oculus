# learning-oculus

```
brew install anttweakbar freeimage
```

```
export CC=/usr/local/Cellar/gcc5/5.2.0/bin/gcc-5
export CXX=/usr/local/Cellar/gcc5/5.2.0/bin/g++-5
```

```
alias gcc='gcc-5'
alias cc='gcc-5'
alias g++='g++-5'
alias c++='c++-5'
```

```
export CXXFLAGS=-stdlib=libc++
export CXXFLAGS=-stdlib=libstdc++
```

```
export CC=/usr/bin/clang
export CXX=/usr/bin/clang++
```

```
#include <OpenGL/gl3.h>
#include <GLUT/glut.h>
#include <stdio.h>

int main(int argc, char* argv[]){
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_3_2_CORE_PROFILE);
    glutCreateWindow("Test");

    int major = 0, minor = 0;
    glGetIntegerv(GL_MAJOR_VERSION, &major);
    glGetIntegerv(GL_MINOR_VERSION, &minor);

    printf("GL %i.%i", major,minor);

    return 0;
}
```

```
cc -framework GLUT -framework OpenGL -framework Cocoa test-oglplus.cpp -o test
```

The package containing clang is llvm but simply installing it with

    brew install llvm

doesn't build the clang binaries.

    brew info llvm 
    
revealed the options (and more)

    --with-asan
     Include support for -faddress-sanitizer (from compiler-rt)
    --with-clang
     Build Clang C/ObjC/C++ frontend

and

    brew install llvm --with-clang --with-asan 
    
lead to a working clang installation.
But it was

    $ clang --version
    clang version 3.3

Reading through the formular (brew edit llvm or at https://github.com/mxcl/..../llvm.rb) I discovered that there is a head section, which gets the sources directly from the repository.

Reading the brew documentation (there is actually a man page :-) I ended up with

    brew info llvm --with-clang --with-asan --HEAD 
    
giving me
    $ clang --version
    clang version 3.4 

```
export PATH=/Library/Frameworks/GTK+.framework/Resources/bin:$PATH
```
