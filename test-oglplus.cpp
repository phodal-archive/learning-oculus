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