//
//  main.cpp
//  JunLin's solarsystem
//
//



#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include "solarsystem.hpp"


#define WINDOW_X_POS 50
#define WINDOW_Y_POS 50
#define WIDTH 700
#define HEIGHT 700

SolarSystem solarsystem;

// 用于注册 GLUT 的回调
void onDisplay(void) {
    solarsystem.onDisplay();
}
void onUpdate(void) {
    solarsystem.onUpdate();
}
void onKeyboard(unsigned char key, int x, int y) {
    solarsystem.onKeyboard(key, x, y);
}

int main(int argc, char*  argv[]) {
	

    glutInit(&argc, argv);
	
	// 此函数指定了使用 RGBA 模式 和 双缓冲窗口
    glutInitDisplayMode(GLUT_RGBA |  GLUT_DOUBLE);
	
    glutInitWindowPosition(WINDOW_X_POS, WINDOW_Y_POS);
    glutCreateWindow("JunLin He's solarsystem!");
	
    glutDisplayFunc(onDisplay);
    glutIdleFunc(onUpdate);
    glutKeyboardFunc(onKeyboard);
	
    glutMainLoop();
    return 0;
}


