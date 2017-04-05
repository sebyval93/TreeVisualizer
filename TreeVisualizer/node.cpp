#include "node.h"

Node::Node(sf::Vector2f pos)
{
	m_node.setPosition(pos);
	m_node.setRadius(25);
	m_node.setFillColor(sf::Color::White);
}

Node::Node(float posX, float posY)
{
	m_node.setPosition(posX, posY);
	m_node.setRadius(25);
	m_node.setFillColor(sf::Color::White);
}

sf::CircleShape Node::getShape()
{
	return m_node;
}

void Node::setEnable(bool enable)
{
	if (enable)
		m_node.setFillColor(sf::Color::White);
	else
		m_node.setFillColor(sf::Color(10, 10, 10, 255));
}

void Node::setPos(sf::Vector2f pos)
{
	m_node.setPosition(pos);
}

void Node::setPos(float posX, float posY)
{
	m_node.setPosition(posX, posY);
}

sf::Vector2f Node::getPos()
{
	return sf::Vector2f();
}

bool Node::isEnabled()
{
	return false;
}
