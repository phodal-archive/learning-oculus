# learning-oculus

brew install anttweakbar freeimage


export CC=/usr/local/Cellar/gcc5/5.2.0/bin/gcc-5
export CXX=/usr/local/Cellar/gcc5/5.2.0/bin/g++-5


alias gcc='gcc-5'
alias cc='gcc-5'
alias g++='g++-5'
alias c++='c++-5'

export CXXFLAGS=-stdlib=libc++
export CXXFLAGS=-stdlib=libstdc++

export CC=/usr/bin/clang
export CXX=/usr/bin/clang++

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

cc -framework GLUT -framework OpenGL -framework Cocoa test-oglplus.cpp -o test

export PATH=/Library/Frameworks/GTK+.framework/Resources/bin:$PATH