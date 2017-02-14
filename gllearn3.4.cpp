#include "stdafx.h"
/*
#include<gl/glut.h>
#include <cmath>

#define  GL_PI  3.1415f
// 绘制场景（显示回调函数）
void RenderScene()
{
	// 存储坐标和角度
	GLfloat x, y, z, angle;

	glBegin(GL_LINES);

	z = 0;
	for (angle = 0.0f;angle <= GL_PI;angle += (GL_PI) / 10.0f)
	{	
		//圆的上半点
		x = 50.0f*sin(angle);
		y = 50.0f*cos(angle);
		glVertex3f(x, y, z);

		//圆的下半点
		x = 50.0f*sin(angle + GL_PI);
		y= 50.0f*cos(angle + GL_PI);
		glVertex3f(x, y, z);

	}
		glEnd();

	// 刷新绘图命令，此时所有未执行的OpenGL命令被执行
	glFlush();

}
//设置渲染状态
void SetupRC() {

	//设置清除颜色为蓝色
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

	glColor3f(0.0f, 1.0f, 0.0f);
}

//当窗口改变大小的时候 由GLUT函数库回调
void ChangeSize(GLsizei w, GLsizei h) {
	GLfloat aspectRatio;
	GLfloat nRange = 100;
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
		//改变原来的投影区域  定义实际可视区的 注意 设置深度
		glOrtho(-nRange, nRange, -nRange / aspectRatio, nRange / aspectRatio, nRange, -nRange);
	else
		glOrtho(-nRange *aspectRatio, nRange*aspectRatio, -nRange, nRange, nRange, -nRange);

	glMatrixMode(GL_MODELVIEW);

	glLoadIdentity();

}
void main() {
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	glutCreateWindow("GLRect");
	// 设置窗口的初始大小
	glutInitWindowSize(480, 320);
	//设置显示回调
	glutDisplayFunc(RenderScene);
	//设置窗口大小改变 回调
	glutReshapeFunc(ChangeSize);

	SetupRC();

	glutMainLoop();
}
*/

