#include "stdafx.h"
/*
#include<gl/glut.h>

//////////////////////////ʹ��OpenGL��GLUT���ɶ���////////////////////////////////////////////////

//��ʼ������λ�úʹ�С
GLfloat x1 = 0.0f;
GLfloat y1 = 0.0f;
GLfloat rsize = 25;

//��x��y����Ĳ�����С
GLfloat xstep = 1.0f;
GLfloat ystep = 1.0f;

//���洰�ڿ�Ⱥ͸߶�
GLfloat windowWidth;
GLfloat windowHight;


void RenderScene() {
	//�õ�ǰ�������ɫ�������
	glClear(GL_COLOR_BUFFER_BIT);

	//���õ�ǰ��ͼ��ɫΪ��ɫ
	glColor3f(1.0f, 0.0f, 0.0f);

	//����һ�������� ԭ��Ϊ��Ļ���ĵ� ����Ϊ��������� ����һ�Զ�Ӧ�������Ͻ����꣬��2�Զ�Ӧ�������½�����
	glRectf(x1, y1, x1+rsize,y1-rsize);


	//ˢ�»�ͼ������н��� ���˫����ʹ��
	glutSwapBuffers();

}

//������Ⱦ״̬
void SetupRC() {

	//���������ɫΪ��ɫ
	glClearColor(0.0f, 0.0f, 1.0f, 1.0f);

}

//������ʱ����GLUT���������(����û�д�С�仯���ƶ���ʱ�� �ص�)
void TimerFunction(int value) {
	//�ڵ�����߻��ұߵ�ʱ��ת����
	if (x1 + rsize > windowWidth || x1 < -windowWidth)
		xstep = -xstep;

	//�ڴﵽ���߻�ױ�ʱ��ת �˶�����
	if (y1 > windowHight || y1 - rsize < -windowHight )
		ystep = -ystep;

	//ʵ���ƶ��ķ���
	x1 = x1 + xstep;
	y1 = y1 + ystep;

	//���߽� ����Ϊ�˷�ֹ�����ڷ���ʱ ���ڱ�Сʹ����������µĲü�������
	if (x1 + rsize  > (windowWidth + xstep))
		x1 = (windowWidth  - 1) - rsize;
	else if (x1 < -windowWidth - xstep)
		x1 = -windowWidth - 1;

	if (y1 > (windowHight + ystep))
		y1 = windowHight - 1;
	else if (y1 < -(windowHight - rsize + ystep))
		y1 = -windowHight + rsize - 1;

	//�µ��������»��Ƴ���
	glutPostRedisplay();

	//�������ֻ�ᴥ��һ�� ��Ϊ�˲��������Ķ��� �ڼ�ʱ������������
	glutTimerFunc(33, TimerFunction, 1);

}	



//�����ڸı��С��ʱ�� ��GLUT������ص�
void ChangeSize(GLsizei w, GLsizei h) {
	GLfloat aspectRatio;

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
	{
		windowWidth = 100;
		windowHight = 100 / aspectRatio;

		//�ı�ԭ����ͶӰ����  ����ʵ�ʿ�������
		glOrtho(-100.0, 100.0, -windowWidth / aspectRatio, windowHight / aspectRatio, 1.0, -1.0);
	}
	else
		{
		windowHight = 100;
		windowWidth = 100 * aspectRatio;
		glOrtho(-windowWidth *aspectRatio, windowHight*aspectRatio, -100, 100.0, 1.0, -1.0);
	}

	glMatrixMode(GL_MODELVIEW);

	glLoadIdentity();

}
void main() {
	//˫����ģʽ
	glutInitDisplayMode(GLUT_DOUBLE| GLUT_RGB);

	glutCreateWindow("Bounce");
	//������ʾ�ص�
	glutDisplayFunc(RenderScene);
	//���ô��ڴ�С�ı� �ص�
	glutReshapeFunc(ChangeSize);
	glutTimerFunc(33, TimerFunction, 1);

	SetupRC();

	glutMainLoop();
}


*/