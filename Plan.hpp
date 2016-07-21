#pragma once

class Plan
{
	virtual float getBasicRate() = 0;
	virtual float getAdditionalRate() = 0;
};

class GoldPlan : public Plan
{
	float getBasicRate() {return 49.95};
	float getAdditionalRate() {return 14.5};	
};

class SilverPlan : public Plan
{
	float getBasicRate() {return 29.95};
	float getAdditionalRate() {return 21.5};		
};