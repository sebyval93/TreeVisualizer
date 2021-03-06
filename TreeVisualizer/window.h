#pragma once
#include <SFML\Graphics.hpp>
#include <memory>
#include <string>

//#include "gui_system.h"
#include "node.h"

class GUISystem;

class Window
{
public:
	Window(int width, int height, std::string title);

	friend class GUISystem;

	bool isVsyncEnabled();
	bool isFullscreen();
	bool isOpen();

	void enableVsync(bool enable);
	void setFramerate(int fps);
	void setFullscreen(bool enable);
	void setBackgroundColor(sf::Color color);

	int getWidth();
	int getHeight();
	std::string getTitle();

	void setWidth(int width);
	void setHeight(int height);
	void setTitle(std::string title);

	void drawNode(Node node);
	void update();

private:
	std::shared_ptr<sf::RenderWindow> m_window;
	int m_width;
	int m_height;
	std::string m_title;

	bool m_hasEnforcedFPS;
	int m_enforcedFPS;

	bool m_vSync;
	bool m_fullscreen;
};