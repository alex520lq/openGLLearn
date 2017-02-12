
#include "stdafx.h"
/*
//版本关系 和用法不一致
#include <gl/glut.h>

//显示自定义 绘制函数
void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	//放最后 刷新队列 应该处理绘画 
	glFlush();
}

//设置渲染状态

//在执行渲染之前应该完成所有OpenGL 初始化工作
//许多OpneGL状态只能设置一次，当每次对一个帧进行渲染的时，这些状态并不需要重新设置

void SetupRC() {
	
	//设置了一种颜色用于清偿窗口
	glClearColor(0.0f, 0.0f, 1.0f, 0.5f);
}


int main()
{
	//初始化GLUT 并确定显示方式 
	// GLUT_SINGLE 单缓冲窗口 （所有的绘图命令都是在被显示的窗口上执行的）
	// GLUT_DOUBLE 双缓冲模式  （所有的绘图命令都是在另一个缓冲区上执行的，然后快速交换到窗口的视图上显示）

	// GLUT_RGB   使用RGBA颜色模式
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	

	//在屏幕上实际创建窗口 唯一参数指定窗口标题
	glutCreateWindow("第一个OpenGL程序");

	//显示回调函数   当窗口需要绘制是，将调用该函数 (放置Opengl渲染函数调用的地方)
	glutDisplayFunc(myDisplay);

	//设置渲染状态
	SetupRC();


	//打印当前平台支持的最高OpenGL版本 
	printf("OpenGL version supported by this platform (%s): \n",glGetString(GL_VERSION));


	//启动了GLUT框架 一经调用 不会返回，只调用一次，指导退出程序
	//处理所有操作系统特定的消息，以及点击建等事件
	glutMainLoop();
}*/