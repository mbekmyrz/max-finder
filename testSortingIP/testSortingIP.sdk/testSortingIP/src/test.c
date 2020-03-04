/*
 * test.c
 *
 *  Created on: Feb 26, 2020
 *      Author: User
 */

#include <stdio.h>
#include <xil_io.h>
#include "xparameters.h"

int main(){
	int zero = 0;
	Xil_Out32(XPAR_SORTINGIP_0_S00_AXI_BASEADDR+4, zero);
	printf("%i", Xil_In32(XPAR_SORTINGIP_0_S00_AXI_BASEADDR+4));
	int number, result, total;
	printf("Hello to the sorting program! Enter length of sequence: ");
	scanf("%i", &total);
    printf("%i", total);
    printf("\n");
	while (total > 0){
		printf("Enter your number: ");
		scanf("%i", &number);
		printf("%i\n", number);
		Xil_Out32(XPAR_SORTINGIP_0_S00_AXI_BASEADDR, number);
		total--;
	}
	result = Xil_In32(XPAR_SORTINGIP_0_S00_AXI_BASEADDR+4);
	printf("The maximum number in a sequence is: %i", result);
	printf("\n");
}
