#include "PlanBill.hpp"

PlanBill::PlanBill(Plan& p_plan)
    : m_plan(p_plan)
{

}

void PlanBill::setLineNumber(int p_lineNumber)
{
	m_lineNumber = p_lineNumber;
}

float PlanBill::getBill()
{	
	float l_bill;

	if(m_lineNumber>1)
		l_bill = m_plan.getBasicRate() + m_plan.getAdditionalRate()*(m_lineNumber-1);
	else if(m_lineNumber==1)
		l_bill = m_plan.getBasicRate();
	else
	{
		std::cout << "Invalid Line Number!" << endl;
		l_bill = -1;
	}

	return l_bill;
}
