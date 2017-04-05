#include <SFML\Graphics.hpp>
#include "window.h"
#include "node.h"

int main()
{
	Window window(800, 600, "Tree");
	window.setFramerate(60);
	Node node(100, 100);

	while (window.isOpen())
	{
		window.update();
		window.drawNode(node);
		node.setEnable(false);
	}
}