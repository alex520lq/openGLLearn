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

	GLfloat sizes[2]; //�洢����ͽǶ�
	GLfloat step;	  //�洢��ָ���ĵ��С����
	GLfloat curSize;  //�洢��ǰ���С

	// OpenGL��������ɫ��������ʹ�õ�ǰ���õ���ɫ��
	glClear(GL_COLOR_BUFFER_BIT);

	// �������״̬����ת
	glPushMatrix();
	glRotatef(50, 1.0f, 0.0f, 0.0f); //ָ����ת����
	glRotatef(50, 0.0f, 1.0f, 0.0f);//


	//�����֧�� �ĵ��С��Χ�Ͳ���ֵ
	glGetFloatv(GL_POINT_SIZE_RANGE, sizes);
	glGetFloatv(GL_POINT_SIZE_GRANULARITY, &step);
	curSize = sizes[0];

	// ��ʼ���ƶ���ͼԪ
	// ����Z�����ʼλ��
	z = -50.0f;
	//
	glBegin(GL_LINE_STRIP);
	for (angle = 0.0f; angle <= (2.0f * GL_PI * 3.0f); angle += 0.1f) {
		//����X��Y����
		x = 50.0f * sin(angle);
		y = 50.0f * cos(angle);

		//���õ��С Ҫ�� glbegin���� ����
		glPointSize(curSize);

		//ָ������λ��
		
		glVertex3f(x, y, z);
		

		//��Z����ֵ�����޸ģ�����һ������ʹ��
		z += 0.5f;
		curSize += step;
	}
	glEnd();
	// �ָ�����״̬
	glPopMatrix();
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

	glutCreateWindow("Alex OpenGL learn ");
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

