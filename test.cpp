// gcc -Wno-deprecated-declarations -o test test.cpp -framework GLUT -framework OpenGL
#include <string.h>
#include <stdlib.h>
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>
#include <stdio.h>

void display()
{
  glutSetCursor(GLUT_CURSOR_LEFT_RIGHT);
  glutPostRedisplay();
}

int main(int argc, char **argv)
{
  char win1[20] = "RUBIK'S CUBE";

  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
  glutInitWindowSize(500, 500);
  glutCreateWindow(win1);
  glutEstablishOverlay();
  glutDisplayFunc(display);
  glutMainLoop();
  // return 0;
}
