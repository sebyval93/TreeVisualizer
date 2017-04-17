#pragma once
#include <SFML\Graphics.hpp>

class GUIWindow
{
public:
	GUIWindow();
	GUIWindow(float width, float height);
	GUIWindow(float width, float height, float posX, float posY);

	float getWidth();
	float getHeight();
	void setWidth(float width);
	void setHeight(float width);

	float getPosX();
	float getPosY();
	void setPosX(float posX);
	void setPosY(float posY);

	sf::RectangleShape getWindowShape();

private:
	const float DEFAULT_WIDTH = 200.0f;
	const float DEFAULT_HEIGHT = 200.0f;
	const float DEFAULT_POSX = 100.0f;
	const float DEFAULT_POSY = 100.0f;

	float m_width, m_height;
	float m_posX, m_posY;

	sf::RectangleShape m_windowRect;
};