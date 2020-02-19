#include  "RollButton.h"
#include "Game.h"
#include "Util.h"
#include "Label.h"
#include "Level1Scene.h"


RollButton::RollButton()

	//call super constructor
	:Button(
		"../Assets/textures/rollButton.png",
		"rollButton",
		ROLL_BUTTON, glm::vec2(400.0f, 300.0f)), m_isClicked(false)
{
	//Adding sound manager
	TheSoundManager::Instance()->load("../Assets/audio/yay.ogg", "yay", SOUND_SFX);
}
RollButton::~RollButton()
{
	
}
bool RollButton::ButtonClick()
{
	//Call the Random range function
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if(!m_isClicked)
		{
			int temp1 = Util::RandomRange(1, 6);
		    int temp2 = Util::RandomRange(1, 6);
			std::cout << temp1 << std::endl;
			std::cout << temp2 << std::endl;
			die1 = temp1;
			die2 = temp2;
			//Yay sound
			TheSoundManager::Instance()->playSound("yay", 0);
			m_isClicked = true;
		}
	}
	else
	{
		m_isClicked = false;
	}
	return false;
}



