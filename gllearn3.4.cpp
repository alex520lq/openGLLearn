#include "stdafx.h"
/*
#include<gl/glut.h>
#include <cmath>

#define  GL_PI  3.1415f
// ���Ƴ�������ʾ�ص�������
void RenderScene()
{
	// �洢����ͽǶ�
	GLfloat x, y, z, angle;

	glBegin(GL_LINES);

	z = 0;
	for (angle = 0.0f;angle <= GL_PI;angle += (GL_PI) / 10.0f)
	{	
		//Բ���ϰ��
		x = 50.0f*sin(angle);
		y = 50.0f*cos(angle);
		glVertex3f(x, y, z);

		//Բ���°��
		x = 50.0f*sin(angle + GL_PI);
		y= 50.0f*cos(angle + GL_PI);
		glVertex3f(x, y, z);

	}
		glEnd();

	// ˢ�»�ͼ�����ʱ����δִ�е�OpenGL���ִ��
	glFlush();

}
//������Ⱦ״̬
void SetupRC() {

	//���������ɫΪ��ɫ
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

	glColor3f(0.0f, 1.0f, 0.0f);
}

//�����ڸı��С��ʱ�� ��GLUT������ص�
void ChangeSize(GLsizei w, GLsizei h) {
	GLfloat aspectRatio;
	GLfloat nRange = 100;
	//��ֹ���
	if (h == 0)
		h = 1;

	//�����ӿڴ�СΪ���ڴ�С ��1�Բ��� ָ���˴����ڲ��ӿڵ����½�  �ڶ��Բ���ָ���˴��ڵ� ��������ص�λ��
	glViewport(0, 0, w, h);

	//������������ϵ
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	//�����ü������� �� �� �� �� Զ����������
	aspectRatio = (GLfloat)w / (GLfloat)h;
	if (w < h)
		//�ı�ԭ����ͶӰ����  ����ʵ�ʿ������� ע�� �������
		glOrtho(-nRange, nRange, -nRange / aspectRatio, nRange / aspectRatio, nRange, -nRange);
	else
		glOrtho(-nRange *aspectRatio, nRange*aspectRatio, -nRange, nRange, nRange, -nRange);

	glMatrixMode(GL_MODELVIEW);

	glLoadIdentity();

}
void main() {
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	glutCreateWindow("GLRect");
	// ���ô��ڵĳ�ʼ��С
	glutInitWindowSize(480, 320);
	//������ʾ�ص�
	glutDisplayFunc(RenderScene);
	//���ô��ڴ�С�ı� �ص�
	glutReshapeFunc(ChangeSize);

	SetupRC();

	glutMainLoop();
}
*/

