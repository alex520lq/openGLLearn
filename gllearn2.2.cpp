#include "stdafx.h"

/*#include<gl/glut.h>

void RenderScene() {
	//�õ�ǰ�������ɫ�������
	glClear(GL_COLOR_BUFFER_BIT);

	//���õ�ǰ��ͼ��ɫΪ��ɫ
	glColor3f(1.0f, 0.0f, 0.0f);
	 
	//����һ�������� ԭ��Ϊ��Ļ���ĵ� ����Ϊ��������� ����һ�Զ�Ӧ�������Ͻ����꣬��2�Զ�Ӧ�������½�����
	glRectf(-25.0f, 25.0f, 25.0f, -25.0f);
	

	//ˢ�»�ͼ����
	glFlush();

}

//������Ⱦ״̬
void SetupRC() {

	//���������ɫΪ��ɫ
	glClearColor(0.0f, 0.0f, 1.0f,1.0f);

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
		//�ı�ԭ����ͶӰ����  ����ʵ�ʿ�������
		glOrtho(-100.0, 100.0, -100 / aspectRatio, 100.0 / aspectRatio, 1.0, -1.0);
	else
		glOrtho(-100.0 *aspectRatio, 100.0*aspectRatio, -100 , 100.0 , 1.0, -1.0);

	glMatrixMode(GL_MODELVIEW);

	glLoadIdentity();

}
void main() {
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	glutCreateWindow("GLRect");
	//������ʾ�ص�
	glutDisplayFunc(RenderScene);
    //���ô��ڴ�С�ı� �ص�
	glutReshapeFunc(ChangeSize);


	SetupRC();

	glutMainLoop();
}

*/
