#include "gui_window.h"

GUIWindow::GUIWindow()
{
	m_width = DEFAULT_WIDTH;
	m_height = DEFAULT_HEIGHT;
	m_posX = DEFAULT_POSX;
	m_posY = DEFAULT_POSY;

	m_windowRect.setSize(sf::Vector2f(m_width, m_height));
	m_windowRect.setPosition(sf::Vector2f(m_posX, m_posY));
}

GUIWindow::GUIWindow(float width, float height)
{
	m_width = width;
	m_height = width;
	m_posX = DEFAULT_POSX;
	m_posY = DEFAULT_POSY;

	m_windowRect.setSize(sf::Vector2f(m_width, m_height));
	m_windowRect.setPosition(sf::Vector2f(m_posX, m_posY));
}

GUIWindow::GUIWindow(float width, float height, float posX, float posY)
{
	m_width = width;
	m_height = width;
	m_posX = posX;
	m_posY = posY;

	m_windowRect.setSize(sf::Vector2f(m_width, m_height));
	m_windowRect.setPosition(sf::Vector2f(m_posX, m_posY));
}

float GUIWindow::getWidth()
{
	return m_width;
}

float GUIWindow::getHeight()
{
	return m_height;
}

void GUIWindow::setWidth(float width)
{
	m_width = width;
	m_windowRect.setSize(sf::Vector2f(m_width, m_height));
}

void GUIWindow::setHeight(float height)
{
	m_height = height;
	m_windowRect.setSize(sf::Vector2f(m_width, m_height));
}

float GUIWindow::getPosX()
{
	return m_posX;
}

float GUIWindow::getPosY()
{
	return m_posY;
}

void GUIWindow::setPosX(float posX)
{
	m_posX = posX;
	m_windowRect.setPosition(sf::Vector2f(m_posX, m_posY));
}

void GUIWindow::setPosY(float posY)
{
	m_posY = posY;
	m_windowRect.setPosition(sf::Vector2f(m_posX, m_posY));
}

sf::RectangleShape GUIWindow::getWindowShape()
{
	return m_windowRect;
}
