#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#define PI          3.141516
#include<math.h>

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)


glLineWidth(.5);
	// 0.285714286

	//green
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 1.0f, 0.0f); // Red
	glVertex2f(-1.0f, 1.0f);    // x, y
	glVertex2f(1.0f, 1.0f);
	glVertex2f(1.0f, 0.714285714f);    // x, y
	glVertex2f(-1.0f, 0.714285714f);    // x, y
	   // x, y
	glEnd();
	//Yellow
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-1.0f, 0.714285714f);    // x, y
	glVertex2f(1.0f, 0.714285714f);    // x, y
	glVertex2f(1.0f, 0.428571428);    // x, y
	glVertex2f(-1.0f, 0.428571428);    // x, y
	   // x, y
	glEnd();

	//Red
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(-1.0f, 0.428571428);    // x, y
	glVertex2f(1.0f, 0.428571428);    // x, y
	glVertex2f(1.0f, 0.142857142);    // x, y
	glVertex2f(-1.0f, 0.142857142);    // x, y
	   // x, y
	glEnd();

	//black
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-1.0f, 0.142857142);    // x, y
	glVertex2f(1.0f, 0.142857142);    // x, y
	glVertex2f(1.0f, -0.142857142);    // x, y
	glVertex2f(-1.0f, -0.142857142);    // x, y
	   // x, y
	glEnd();

	//Red
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(-1.0f, -0.428571428);    // x, y
	glVertex2f(1.0f, -0.428571428);    // x, y
	glVertex2f(1.0f, -0.142857142);    // x, y
	glVertex2f(-1.0f, -0.142857142);    // x, y
	   // x, y
	glEnd();

	//Yellow
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-1.0f, -0.714285714f);    // x, y
	glVertex2f(1.0f, -0.714285714f);    // x, y
	glVertex2f(1.0f, -0.428571428);    // x, y
	glVertex2f(-1.0f, -0.428571428);    // x, y
	   // x, y
	glEnd();

	//green
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 1.0f, 0.0f); // Red
	glVertex2f(-1.0f, -1.0f);    // x, y
	glVertex2f(1.0f, -1.0f);
	glVertex2f(1.0f, -0.714285714f);    // x, y
	glVertex2f(-1.0f, -0.714285714f);    // x, y
	   // x, y
	glEnd();

	//Triangle
	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red

	glVertex2f(-1.0f, 1.0f);    // x, y
	glVertex2f(-0.25f, 0.0f);
	glVertex2f(-1.0f,  -1.0f);

	glEnd();

	// Triangle border
	glLineWidth(15);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-1.0f, 1.0f);    // x, y
	glVertex2f(-0.25f, 0.0f);    // x, y

	glEnd();

	// Triangle border
	glLineWidth(15);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-1.0f, -1.0f);    // x, y
	glVertex2f(-0.25f, 0.0f);    // x, y

	glEnd();

	// star
	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red

	glVertex2f(-0.90f, 0.0f);    // x, y
	glVertex2f(-0.625f, 0.142857142f);
	glVertex2f(-0.625f, -0.142857142f);

	glEnd();

	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red

	glVertex2f(-0.35f, 0.0f);    // x, y
	glVertex2f(-0.625f, 0.142857142f);
	glVertex2f(-0.625f, -0.142857142f);

	glEnd();

	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red

	glVertex2f(-0.482142858f, 0.0f);    // x, y
	glVertex2f(-0.767857142, 0.0f);    // x, y
	glVertex2f(-0.625f, 0.35f);

	glEnd();

	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red

	glVertex2f(-0.482142858f, 0.0f);    // x, y
	glVertex2f(-0.767857142, 0.0f);    // x, y
	glVertex2f(-0.625f, 0.35f);

	glEnd();

	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red

	glVertex2f(-0.482142858f, 0.0f);    // x, y
	glVertex2f(-0.767857142, 0.0f);    // x, y
	glVertex2f(-0.625f, 0.35f);

	glEnd();

	// Bird

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.75f, -0.1f);    // x, y
	glVertex2f(-0.50f, -0.1f);    // x, y
	glVertex2f(-0.50f, -0.2f);    // x, y
	glVertex2f(-0.75f, -0.2f);    // x, y
	   // x, y
	glEnd();

	glLineWidth(2.5);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.75f, -0.1f);    // x, y
	glVertex2f(-0.50f, -0.1f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.50f, -0.1f);    // x, y
	glVertex2f(-0.50f, -0.2f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.50f, -0.2f);    // x, y
	glVertex2f(-0.75f, -0.2f);    // x, y
	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.75f, -0.2f);    // x, y
	glVertex2f(-0.75f, -0.1f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.675f, -0.2f);    // x, y
	glVertex2f(-0.675f, -0.1f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.675f, -0.15f);    // x, y
	glVertex2f(-0.50, -0.15f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.675f, -0.125f);    // x, y
	glVertex2f(-0.665, -0.15f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.665f, -0.15f);    // x, y
	glVertex2f(-0.655f, -0.125f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.655f, -0.125f);    // x, y
	glVertex2f(-0.645, -0.15f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.645f, -0.15f);    // x, y
	glVertex2f(-0.635f, -0.125f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.635f, -0.125f);    // x, y
	glVertex2f(-0.625, -0.15f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.625f, -0.15f);    // x, y
	glVertex2f(-0.615f, -0.125f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.615f, -0.125f);    // x, y
	glVertex2f(-0.605, -0.15f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.605f, -0.15f);    // x, y
	glVertex2f(-0.595f, -0.125f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.595f, -0.125f);    // x, y
	glVertex2f(-0.585f, -0.15f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.585f, -0.15f);    // x, y
	glVertex2f(-0.575f, -0.125f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.575f, -0.125f);    // x, y
	glVertex2f(-0.565f, -0.15f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.565f, -0.15f);    // x, y
	glVertex2f(-0.555f, -0.125f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.555f, -0.125f);    // x, y
	glVertex2f(-0.545f, -0.15f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.545f, -0.15f);    // x, y
	glVertex2f(-0.535f, -0.125f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.535f, -0.125f);    // x, y
	glVertex2f(-0.525f, -0.15f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.525f, -0.15f);    // x, y
	glVertex2f(-0.515f, -0.125f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.515f, -0.125f);    // x, y
	glVertex2f(-0.505f, -0.15f);    // x, y

	glEnd();





	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.75f, -0.1f);    // x, y
	glVertex2f(-0.50f, -0.1f);    // x, y
	glVertex2f(-0.475f, -0.025f);    // x, y
	glVertex2f(-0.775f, -0.025f);    // x, y
	   // x, y
	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.75f, -0.1f);    // x, y
	glVertex2f(-0.50f, -0.1f);    // x, y

	glEnd();


	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.50f, -0.1f);    // x, y
	glVertex2f(-0.475f, -0.025f);    // x, y

	glEnd();


	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.475f, -0.025f);    // x, y
	glVertex2f(-0.775f, -0.025f);    // x, y

	glEnd();


	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.775f, -0.025f);    // x, y
	glVertex2f(-0.75f, -0.1f);    // x, y

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.775f, -0.025f);    // x, y
	glVertex2f(-0.475f, -0.025f);    // x, y
	glVertex2f(-0.45f, 0.0f);    // x, y
	glVertex2f(-0.80f, 0.0f);    // x, y
	   // x, y
	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.775f, -0.025f);    // x, y
	glVertex2f(-0.475f, -0.025f);    // x, y
	glEnd();


	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.475f, -0.025f);    // x, y
	glVertex2f(-0.45f, 0.0f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.45f, 0.0f);    // x, y
	glVertex2f(-0.80f, 0.0f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.80f, 0.0f);    // x, y
	glVertex2f(-0.775f, -0.025f);    // x, y

	glEnd();

	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 0.0f); // Red

	glVertex2f(-0.80f, 0.0f);    // x, y
	glVertex2f(-0.80f, 0.50f);
	glVertex2f(-0.45f, 0.0f);    // x, y


	glEnd();




	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.45f, 0.0f);    // x, y

	glVertex2f(-0.70f, 0.125f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.45f, 0.0f);    // x, y

	glVertex2f(-0.70f, 0.125f);    // x, y

	glEnd();



	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.80f, 0.0f);    // x, y
	glVertex2f(-0.80f, 0.50f);

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.80f, 0.50f);
	glVertex2f(-0.45f, 0.0f);    // x, y

	glEnd();




	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.45f, 0.0f);    // x, y

	glVertex2f(-0.80f, 0.0f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.45f, 0.0f);    // x, y

	glVertex2f(-0.70f, 0.125f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.70f, 0.125f);    // x, y

	glVertex2f(-0.70f, 0.175f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.75f, 0.10f);    // x, y

	glVertex2f(-0.775f, 0.00f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.75f, 0.10f);    // x, y

	glVertex2f(-0.75f, 0.15f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.70f, 0.05f);    // x, y

	glVertex2f(-0.725f, 0.00f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.70f, 0.05f);    // x, y

	glVertex2f(-0.69f, 0.115f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.70f, 0.05f);    // x, y

	glVertex2f(-0.69f, 0.115f);    // x, y

	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.70f, 0.05f);    // x, y

	glVertex2f(-0.68f, 0.05f);    // x, y

	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red


	glVertex2f(-0.68f, 0.05f);    // x, y
	glVertex2f(-0.67f, 0.1f);    // x, y

	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red


	glVertex2f(-0.68f, 0.05f);    // x,
	glVertex2f(-0.66f, 0.05f);    // x, y

	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red


	glVertex2f(-0.66f, 0.05f);    // x,
	glVertex2f(-0.65f, 0.1f);    // x, y

	glEnd();







	glBegin (GL_TRIANGLE_FAN);
    GLfloat p1=-0.775; GLfloat q1= 0.475f; GLfloat r1 = 0.0625f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;
    glColor3ub ( 255, 255,  0);
    glVertex2f (p1,q1);
    for(int i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();

    glBegin (GL_TRIANGLE_FAN);
    p1=-0.790;q1= 0.480f;r1 = 0.01f;
    tringle2=40;

    tp2 =2.0f * PI  ;
    glColor3ub ( 0, 0,  0);
    glVertex2f (p1,q1);
    for(int i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();

    glBegin (GL_TRIANGLE_FAN);
    p1=-0.790;q1= 0.480f;r1 = 0.01f;
    tringle2=40;

    tp2 =2.0f * PI  ;
    glColor3ub ( 0, 0,  0);
    glVertex2f (p1,q1);
    for(int i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();

    glBegin (GL_TRIANGLE_FAN);
    p1=-0.65;q1= -0.060f;r1 = 0.020f;
    tringle2=40;

    tp2 =2.0f * PI  ;
    glColor3ub ( 0, 0,  0);
    glVertex2f (p1,q1);
    for(int i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();

    glBegin (GL_TRIANGLE_FAN);
    p1=-0.6;q1= -0.060f;r1 = 0.020f;
    tringle2=40;

    tp2 =2.0f * PI  ;
    glColor3ub ( 0, 0,  0);
    glVertex2f (p1,q1);
    for(int i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();

    glBegin (GL_TRIANGLE_FAN);
    p1=-0.6;q1= -0.060f;r1 = 0.010f;
    tringle2=40;

    tp2 =2.0f * PI  ;
    glColor3ub ( 255, 255,  0);
    glVertex2f (p1,q1);
    for(int i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();

    glBegin (GL_TRIANGLE_FAN);
    p1=-0.65;q1= -0.060f;r1 = 0.010f;
    tringle2=40;

    tp2 =2.0f * PI  ;
    glColor3ub ( 255, 255,  0);
    glVertex2f (p1,q1);
    for(int i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();


    glLineWidth(2.5);
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(-0.775f, 0.550f);    // x, y
	glVertex2f(-0.695f, 0.550f);
glVertex2f(-0.695f, 0.40f);    // x, y

	glVertex2f(-0.735f, 0.40f);    // x, y


	glEnd();


    glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.80f, 0.40f);    // x, y

	glVertex2f(-0.825f, 0.475f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.825f, 0.475f);    // x, y

	glVertex2f(-0.850f, 0.480f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.850f, 0.480f);    // x, y

	glVertex2f(-0.825f, 0.495f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red


	glVertex2f(-0.825f, 0.495f);    // x, y
	glVertex2f(-0.815f, 0.535f);    // x, y

	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red



	glVertex2f(-0.815f, 0.535f);    // x, y
glVertex2f(-0.765f, 0.535f);    // x, y
	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red



glVertex2f(-0.765f, 0.535f);    // x, y
glVertex2f(-0.735f, 0.410f);    // x, y
	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red



glVertex2f(-0.735f, 0.410f);    // x, y
glVertex2f(-0.80f, 0.40f);    // x, y
	glEnd();








	// Draw a Red 1x1 Square centered at origin

	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutInitWindowSize(1280, 720);   // Set the window's initial width & height
        //glutInitWindowPosition (100, 200);
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
