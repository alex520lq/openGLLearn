
#include "stdafx.h"
/*
//�汾��ϵ ���÷���һ��
#include <gl/glut.h>

//��ʾ�Զ��� ���ƺ���
void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	//����� ˢ�¶��� Ӧ�ô���滭 
	glFlush();
}

//������Ⱦ״̬

//��ִ����Ⱦ֮ǰӦ���������OpenGL ��ʼ������
//���OpneGL״ֻ̬������һ�Σ���ÿ�ζ�һ��֡������Ⱦ��ʱ����Щ״̬������Ҫ��������

void SetupRC() {
	
	//������һ����ɫ�����峥����
	glClearColor(0.0f, 0.0f, 1.0f, 0.5f);
}


int main()
{
	//��ʼ��GLUT ��ȷ����ʾ��ʽ 
	// GLUT_SINGLE �����崰�� �����еĻ�ͼ������ڱ���ʾ�Ĵ�����ִ�еģ�
	// GLUT_DOUBLE ˫����ģʽ  �����еĻ�ͼ���������һ����������ִ�еģ�Ȼ����ٽ��������ڵ���ͼ����ʾ��

	// GLUT_RGB   ʹ��RGBA��ɫģʽ
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	

	//����Ļ��ʵ�ʴ������� Ψһ����ָ�����ڱ���
	glutCreateWindow("��һ��OpenGL����");

	//��ʾ�ص�����   ��������Ҫ�����ǣ������øú��� (����Opengl��Ⱦ�������õĵط�)
	glutDisplayFunc(myDisplay);

	//������Ⱦ״̬
	SetupRC();


	//��ӡ��ǰƽ̨֧�ֵ����OpenGL�汾 
	printf("OpenGL version supported by this platform (%s): \n",glGetString(GL_VERSION));


	//������GLUT��� һ������ ���᷵�أ�ֻ����һ�Σ�ָ���˳�����
	//�������в���ϵͳ�ض�����Ϣ���Լ���������¼�
	glutMainLoop();
}*/