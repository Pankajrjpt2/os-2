#include <stdio.h>
	#include <stdlib.h>
	double page_fault_rate();
	void userInput(void);
	

	double service_page_fault_empty;
	double service_page_fault_modified;
	double mem_access_time;
	double times_page_modified;
	double effective_access_time;
	double pageFaultRate;
	double service_page_fault_empty_ns;
	double service_page_fault_modified_ns;
	double times_page_modified_per;
		
	

	void main(){
		int swtch;
		
		do{
		
		
		printf("Select the required option \n");
		printf("1.Find the PageFault Rate\n");
		printf("2.Exit");
		scanf("%d",&swtch);
		switch(swtch){
			case 1:userInput();break;
			case 2:exit(0);
		}
		printf("\n\n");
	

	}while(swtch<3);
	}
	void userInput(){
		
		
		printf("\nEnter service Page Fault [Empty|Page is not Modified][in milliseconds]");
		scanf("%lf",&service_page_fault_empty);
		printf("Enter Service Page Fault [Modified Page][in milliseconds]");
	

	}
	

	double page_fault_rate(double servicePageFaultEmpty,double servicePageFaultMod,double memAccess,double timesPages,double effAccess){
		double assume,serve;
		double numErator,denOminator;
		double pageFault;
		 assume = (1- timesPages)*servicePageFaultEmpty;
		 serve = timesPages*servicePageFaultMod;
		 numErator = effAccess - memAccess;
	     denOminator = (assume+serve);
	

		pageFault = numErator/denOminator;
		return pageFault;
	

	

	}
		printf("\nMaximum Acceptable Page Fault rate = %.2e[exponential notation]",pageFaultRate);
	

}
