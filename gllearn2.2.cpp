#include "stdafx.h"

/*#include<gl/glut.h>

void RenderScene() {
	//用当前的清除颜色清除窗口
	glClear(GL_COLOR_BUFFER_BIT);

	//设置当前绘图颜色为红色
	glColor3f(1.0f, 0.0f, 0.0f);
	 
	//绘制一个填充矩形 原点为屏幕中心点 参数为两对坐标点 ，第一对对应的是左上角坐标，第2对对应的是右下角坐标
	glRectf(-25.0f, 25.0f, 25.0f, -25.0f);
	

	//刷新绘图命令
	glFlush();

}

//设置渲染状态
void SetupRC() {

	//设置清除颜色为蓝色
	glClearColor(0.0f, 0.0f, 1.0f,1.0f);

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
		//改变原来的投影区域  定义实际可视区的
		glOrtho(-100.0, 100.0, -100 / aspectRatio, 100.0 / aspectRatio, 1.0, -1.0);
	else
		glOrtho(-100.0 *aspectRatio, 100.0*aspectRatio, -100 , 100.0 , 1.0, -1.0);

	glMatrixMode(GL_MODELVIEW);

	glLoadIdentity();

}
void main() {
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	glutCreateWindow("GLRect");
	//设置显示回调
	glutDisplayFunc(RenderScene);
    //设置窗口大小改变 回调
	glutReshapeFunc(ChangeSize);


	SetupRC();

	glutMainLoop();
}

*/
