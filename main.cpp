// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "GLFW/glfw3.h"
#include <iostream>

#pragma comment(lib,"opengl32.lib")
#pragma comment(lib,"glfw3dll.lib")

int main()
{

    std::cout << "Hello World!\n";

	GLFWwindow* window;


	if (!glfwInit())
		return -1;
	
	glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);


	window = glfwCreateWindow(640, 480, "Hello World OpenGL", NULL, NULL);
	if (!window)
	{
		std::cerr << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);

	

	std::cout << "GLFW version: " << glfwGetVersionString() << std::endl;
	std::cout << "OpenGL version: " << glGetString(GL_VERSION) << std::endl;

	

	/* Loop until the user closes the window */
	while (!glfwWindowShouldClose(window))
	{
		/* Render here */
		glClear(GL_COLOR_BUFFER_BIT);

		/* Swap front and back buffers */
		glfwSwapBuffers(window);

		/* Poll for and process events */
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}



