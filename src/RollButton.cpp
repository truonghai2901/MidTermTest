#include  "RollButton.h"
#include "Game.h"
#include "Util.h"

RollButton::RollButton()

	//call super constructor
	:Button(
		"../Assets/textures/rollButton.png",
		"rollButton",
		ROLL_BUTTON, glm::vec2(400.0f, 300.0f)), m_isClicked(false)
{
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
			m_isClicked = true;
		}
	}
	else
	{
		m_isClicked = false;
	}
	return false;
}


