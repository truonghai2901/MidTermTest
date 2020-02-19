#pragma once
#ifndef __ROLL_BUTTON__
#define __ROLL_BUTTON__
#include "Button.h"
#include "Util.h"
class RollButton : public Button
{
public:
	RollButton();
	~RollButton();

	bool ButtonClick() override;
	int die1;
	int die2;
private:
	bool m_isClicked;
};
#endif /* defined (__ROLL_BUTTON__) */

