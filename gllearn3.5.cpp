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

	GLfloat sizes[2]; //存储坐标和角度
	GLfloat step;	  //存储搜指出的点大小增量
	GLfloat curSize;  //存储当前点大小

	// OpenGL命令，清除颜色缓冲区（使用当前设置的颜色）
	glClear(GL_COLOR_BUFFER_BIT);

	// 保存矩阵状态并旋转
	glPushMatrix();
	glRotatef(50, 1.0f, 0.0f, 0.0f); //指定旋转方向
	glRotatef(50, 0.0f, 1.0f, 0.0f);//


	//获得受支持 的点大小范围和步进值
	glGetFloatv(GL_POINT_SIZE_RANGE, sizes);
	glGetFloatv(GL_POINT_SIZE_GRANULARITY, &step);
	curSize = sizes[0];

	// 开始绘制顶点图元
	// 设置Z轴的起始位置
	z = -50.0f;
	//
	glBegin(GL_LINE_STRIP);
	for (angle = 0.0f; angle <= (2.0f * GL_PI * 3.0f); angle += 0.1f) {
		//计算X、Y坐标
		x = 50.0f * sin(angle);
		y = 50.0f * cos(angle);

		//设置点大小 要在 glbegin外面 设置
		glPointSize(curSize);

		//指定顶点位置
		
		glVertex3f(x, y, z);
		

		//对Z坐标值稍作修改，在下一个顶点使用
		z += 0.5f;
		curSize += step;
	}
	glEnd();
	// 恢复矩阵状态
	glPopMatrix();
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

	glutCreateWindow("Alex OpenGL learn ");
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

