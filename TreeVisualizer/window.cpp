#include "window.h"

Window::Window(int width, int height, std::string title)
{
	m_width = width;
	m_height = height;
	m_title = title;
	m_fullscreen = false;
	m_enforcedFPS = 0;

	m_window = std::make_unique<sf::RenderWindow>(sf::VideoMode(m_width, m_height), m_title, sf::Style::Close);
}

bool Window::isVsyncEnabled()
{
	return m_vSync;
}

bool Window::isFullscreen()
{
	return m_fullscreen;
}

bool Window::isOpen()
{
	return m_window->isOpen();
}

void Window::enableVsync(bool enable)
{
	m_window->setVerticalSyncEnabled(enable);
}

void Window::setFramerate(int fps)
{
	m_window->setFramerateLimit(fps);
	m_enforcedFPS = fps;
}

void Window::setFullscreen(bool enable)
{
	if (enable)
	{
		if (!m_fullscreen)
		{
			m_window->create(sf::VideoMode::getDesktopMode(), m_title, sf::Style::None);
			m_window->setFramerateLimit(m_enforcedFPS);
			m_fullscreen = true;
		}
	}
	else
	{
		if (m_fullscreen)
		{
			m_window->create(sf::VideoMode(m_width, m_height), m_title, sf::Style::Close);
			m_window->setFramerateLimit(m_enforcedFPS);
			m_fullscreen = false;
		}
	}
}

void Window::setBackgroundColor(sf::Color color)
{
	return; //unimplemented
}

int Window::getWidth()
{
	return m_width;
}

int Window::getHeight()
{
	return m_height;
}

std::string Window::getTitle()
{
	return m_title;
}

void Window::setWidth(int width)
{
	m_width = width;

	m_window->setSize(sf::Vector2u(m_width, m_height));
}

void Window::setHeight(int height)
{
	m_height = height;

	m_window->setSize(sf::Vector2u(m_width, m_height));
}

void Window::setTitle(std::string title)
{
	m_title = title;

	m_window->setTitle(m_title);
}

void Window::drawNode(Node node)
{
	m_window->draw(node.getShape());
}

void Window::update()
{
	sf::Event windowEvent;
	m_window->pollEvent(windowEvent);
	if (windowEvent.type == sf::Event::Closed)
		m_window->close();

	if (windowEvent.type == sf::Event::KeyPressed)
	{
		switch (windowEvent.key.code)
		{
		case sf::Keyboard::F:
			if (m_fullscreen)
				setFullscreen(false);
			else
				setFullscreen(true);
			break;

		case sf::Keyboard::Escape:
			m_window->close();
			break;

		default:
			break;
		}
	}

	m_window->display();
	m_window->clear(sf::Color::Black);
}
