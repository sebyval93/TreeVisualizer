#include "node.h"

Node::Node(sf::Vector2f pos)
{
	setRadius(25);
	setPos(pos);
	m_nodeShape.setFillColor(sf::Color::White);

	right = nullptr;
	left = nullptr;
}

Node::Node(float posX, float posY)
{
	setPos(posX, posY);
	setRadius(25);
	m_nodeShape.setFillColor(sf::Color::White);

	right = nullptr;
	left = nullptr;
}

void Node::setRadius(float radius)
{
	m_nodeShape.setRadius(radius);
	m_nodeShape.setOrigin(m_nodeShape.getRadius(), m_nodeShape.getRadius());
}

sf::CircleShape Node::getShape()
{
	return m_nodeShape;
}

void Node::setEnable(bool enable)
{
	if (enable)
		m_nodeShape.setFillColor(sf::Color::White);
	else
		m_nodeShape.setFillColor(sf::Color(10, 10, 10, 255));
}

void Node::setPos(sf::Vector2f pos)
{
	m_nodeShape.setPosition(pos.x - m_nodeShape.getRadius(), pos.y - m_nodeShape.getRadius());
	m_nodeShape.setOrigin(getPos().x, getPos().y);
}

void Node::setPos(float posX, float posY)
{
	m_nodeShape.setPosition(posX - m_nodeShape.getRadius(), posY - m_nodeShape.getRadius());
	m_nodeShape.setOrigin(getPos().x, getPos().y);
}

sf::Vector2f Node::getPos()
{
	return m_nodeShape.getPosition();
}

bool Node::isEnabled()
{
	return false;
}
