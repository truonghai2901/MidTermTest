#pragma once
#ifndef __DICE1__
#define __DICE1__
#include "DisplayObject.h"
class DICE1 : public DisplayObject
{
public:
	DICE1();
	~DICE1();
	void draw() override;
	void update() override;
	void clean() override;
	
};


#endif /* defined (__DICE1__)*/
