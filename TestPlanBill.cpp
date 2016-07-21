//Task1
#include "PlanBill.hpp"

GetBillOfOneMainLineForGoldPlan(){

	PlanBill planbill(GoldPlan);
	planBill.setLineNum(1);

	EXPECT_EQ(49.95, planBill.getBill());	
}


GetBillOfOneMainLineOneAdditionalForGoldPlan(){

	PlanBill planbill(GoldPlan);
	PlanBill.setLineNum(2);

	EXPECT_EQ(49.95 + 14.5, PlanBill.getBill());
}

GetBillOfOneMainLineForSilverPlan(){

	PlanBill planbill(SilverPlan);
	PlanBill.setLineNum(1);

	EXPECT_EQ(29.95, PlanBill.getBill());
}

GetBillOfOneMainLineOneAdditionalForSilverPlan(){

	PlanBill planbill(SilverPlan);
	PlanBill.setLineNum(3);

	EXPECT_EQ(29.95 + 2*21.5, PlanBill.getBill());
}


