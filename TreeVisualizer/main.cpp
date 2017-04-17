#include <SFML\Graphics.hpp>
#include "window.h"
#include "gui_system.h"
#include "node.h"
#include <iostream>

int main()
{
	Window window(800, 600, "Tree");
	GUISystem guiSystem(window);
	window.setFramerate(60);
	Node node(100, 100);
	sf::Time time;
	sf::Clock clock;


	bool nodeActivated = true;

	while (window.isOpen())
	{
		window.update();
		window.drawNode(node);

		if (clock.getElapsedTime().asMilliseconds() >= 1000)
		{
			clock.restart();

			if (!nodeActivated)
			{
				nodeActivated = true;
				node.setEnable(nodeActivated);
			}
			else
			{
				nodeActivated = false;
				node.setEnable(nodeActivated);
			}

			std::cout << "Second" << '\n';
		}
		//node.setEnable(false);
	}
}