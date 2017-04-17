#pragma once
#include <vector>
#include "window.h"

class GUISystem
{
public:
	GUISystem(Window window);



private:
	std::shared_ptr<sf::RenderWindow> m_window;

	void addControlPanel();
};