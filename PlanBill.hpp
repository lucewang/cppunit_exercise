#pragma once
#include "Plan.hpp"

class PlanBill
{
public:
	PlanBill(Plan& p_plan);
	
	float getBill();
	void setLineNumber(int p_lineNumber);

private:

	Plan m_plan;	
	int m_lineNumber;

}