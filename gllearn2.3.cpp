#include "stdafx.h"
/*
#include<gl/glut.h>

//////////////////////////使用OpenGL和GLUT生成动画////////////////////////////////////////////////

//初始化方块位置和大小
GLfloat x1 = 0.0f;
GLfloat y1 = 0.0f;
GLfloat rsize = 25;

//在x和y方向的步进大小
GLfloat xstep = 1.0f;
GLfloat ystep = 1.0f;

//保存窗口宽度和高度
GLfloat windowWidth;
GLfloat windowHight;


void RenderScene() {
	//用当前的清除颜色清除窗口
	glClear(GL_COLOR_BUFFER_BIT);

	//设置当前绘图颜色为红色
	glColor3f(1.0f, 0.0f, 0.0f);

	//绘制一个填充矩形 原点为屏幕中心点 参数为两对坐标点 ，第一对对应的是左上角坐标，第2对对应的是右下角坐标
	glRectf(x1, y1, x1+rsize,y1-rsize);


	//刷新绘图命令并进行交换 配合双缓冲使用
	glutSwapBuffers();

}

//设置渲染状态
void SetupRC() {

	//设置清除颜色为蓝色
	glClearColor(0.0f, 0.0f, 1.0f, 1.0f);

}

//当空闲时调用GLUT函数库调用(窗口没有大小变化和移动的时候 回调)
void TimerFunction(int value) {
	//在到达左边或右边的时候翻转方向
	if (x1 + rsize > windowWidth || x1 < -windowWidth)
		xstep = -xstep;

	//在达到顶边或底边时翻转 运动方向
	if (y1 > windowHight || y1 - rsize < -windowHight )
		ystep = -ystep;

	//实际移动的方块
	x1 = x1 + xstep;
	y1 = y1 + ystep;

	//检测边界 这是为了防止方块在反弹时 窗口变小使方块出现在新的裁减区域外
	if (x1 + rsize  > (windowWidth + xstep))
		x1 = (windowWidth  - 1) - rsize;
	else if (x1 < -windowWidth - xstep)
		x1 = -windowWidth - 1;

	if (y1 > (windowHight + ystep))
		y1 = windowHight - 1;
	else if (y1 < -(windowHight - rsize + ystep))
		y1 = -windowHight + rsize - 1;

	//新的坐标重新绘制场景
	glutPostRedisplay();

	//这个函数只会触发一次 ，为了产生连续的动作 在计时器中重新设置
	glutTimerFunc(33, TimerFunction, 1);

}	



//当窗口改变大小的时候 由GLUT函数库回调
void ChangeSize(GLsizei w, GLsizei h) {
	GLfloat aspectRatio;

	//防止零除
	if (h == 0)
		h = 1;

	//设置视口大小为窗口大小 第1对参数 指定了窗口内部视口的左下角  第二对参数指定了窗口的 面积（像素单位）
	glViewport(0, 0, w, h);

	//重新设置坐标系
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	//建立裁减区域（左 右 底 顶 近 远）六个方向
	aspectRatio = (GLfloat)w / (GLfloat)h;
	if (w < h)
	{
		windowWidth = 100;
		windowHight = 100 / aspectRatio;

		//改变原来的投影区域  定义实际可视区的
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
	//双缓冲模式
	glutInitDisplayMode(GLUT_DOUBLE| GLUT_RGB);

	glutCreateWindow("Bounce");
	//设置显示回调
	glutDisplayFunc(RenderScene);
	//设置窗口大小改变 回调
	glutReshapeFunc(ChangeSize);
	glutTimerFunc(33, TimerFunction, 1);

	SetupRC();

	glutMainLoop();
}


*/