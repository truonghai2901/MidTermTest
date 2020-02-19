#include  "Dice1.h"
#include "Game.h"
DICE1::DICE1()
{
	TheTextureManager::Instance()->load("../Assets/textures/1.png",
		"1", TheGame::Instance()->getRenderer());

	// measure size by querying the texture
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("1");
	setWidth(size.x);
	setHeight(size.y);

	setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.5f, 435.0f));
	setIsColliding(false);
	setType(GameObjectType::PLANE);
	setVelocity(glm::vec2(0.0f, 0.0f));
}

DICE1::~DICE1()
{
}

void DICE1::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("plane", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}

void DICE1::update()
{
}

void DICE1::clean()
{
}
