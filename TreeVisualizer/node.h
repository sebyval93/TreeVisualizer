#pragma once
#include <SFML\Graphics.hpp>

class Node
{
public:
	Node(sf::Vector2f pos);
	Node(float posX, float posY);

	sf::CircleShape getShape();
	void setEnable(bool enable);

	void setPos(sf::Vector2f pos);
	void setPos(float posX, float posY);

	sf::Vector2f getPos();

	bool isEnabled();

	Node *right;
	Node *left;

private:
	sf::CircleShape m_node;
};