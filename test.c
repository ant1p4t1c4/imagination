/* include the library header files */
#include <freeglut.h>

void myDisplay(void)
{
	// clear the screen 
	glClear(GL_COLOR_BUFFER_BIT);

	// insert code 

	glFlush();
}

void main(int argc, char** argv)
{

	// initialize the toolkit
	glutInit(&argc, argv);


	// open the screen window
	glutCreateWindow("window name");
	glutReshapeWindow(1200,600);
	// register redraw function
	glutDisplayFunc(myDisplay);

	// go into a perpetual loop
	glutMainLoop();
}

