#include <windows.h>
//#define GLUT_DISABLE_ATEXIT_HACK
#include <GL/glut.h>
 
void display() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
   glClear(GL_COLOR_BUFFER_BIT);
 
   // Draw a Red 1x1 Square centered at origin
   glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(-0.5f, -0.5f);
      glVertex2f( 0.5f, -0.5f);
      glVertex2f( 0.5f,  0.5f);
      glVertex2f(-0.5f,  0.5f);
   glEnd();
 
   glFlush();
}
 
int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutCreateWindow("OpenGL Setup Test");
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutDisplayFunc(display);
   glutMainLoop();
   return 0;
}
