#include "xparameters.h"
#include "xil_io.h"
#include "cordic_iterativa_ip.h"

//====================================================

int main (void)
{
   int i,j;

   xil_printf("-- Start of the Program --\r\n");

   while (1)
   {
        CORDIC_ITERATIVA_IP_mWriteReg(XPAR_CORDIC_ITERATIVA_IP_0_S00_AXI_BASEADDR CORDIC_ITERATIVA_IP_S00_AXI_SLV_REG3_OFFSET, 0);
        CORDIC_ITERATIVA_IP_mWriteReg(XPAR_CORDIC_ITERATIVA_IP_0_S00_AXI_BASEADDR CORDIC_ITERATIVA_IP_S00_AXI_SLV_REG0_OFFSET, 1000);
        CORDIC_ITERATIVA_IP_mWriteReg(XPAR_CORDIC_ITERATIVA_IP_0_S00_AXI_BASEADDR CORDIC_ITERATIVA_IP_S00_AXI_SLV_REG1_OFFSET, 0);
        CORDIC_ITERATIVA_IP_mWriteReg(XPAR_CORDIC_ITERATIVA_IP_0_S00_AXI_BASEADDR CORDIC_ITERATIVA_IP_S00_AXI_SLV_REG2_OFFSET, 43690);
        CORDIC_ITERATIVA_IP_mWriteReg(XPAR_CORDIC_ITERATIVA_IP_0_S00_AXI_BASEADDR CORDIC_ITERATIVA_IP_S00_AXI_SLV_REG3_OFFSET, 1);
        for(j=0; i<10; j++) {
            for (i=0; i<9999999; i++);
        }

        CORDIC_ITERATIVA_IP_mWriteReg(XPAR_CORDIC_ITERATIVA_IP_0_S00_AXI_BASEADDR, CORDIC_ITERATIVA_IP_S00_AXI_SLV_REG3_OFFSET, 0);
        CORDIC_ITERATIVA_IP_mWriteReg(XPAR_CORDIC_ITERATIVA_IP_0_S00_AXI_BASEADDR, CORDIC_ITERATIVA_IP_S00_AXI_SLV_REG0_OFFSET, 824);
        CORDIC_ITERATIVA_IP_mWriteReg(XPAR_CORDIC_ITERATIVA_IP_0_S00_AXI_BASEADDR, CORDIC_ITERATIVA_IP_S00_AXI_SLV_REG1_OFFSET, 1427);
        CORDIC_ITERATIVA_IP_mWriteReg(XPAR_CORDIC_ITERATIVA_IP_0_S00_AXI_BASEADDR, CORDIC_ITERATIVA_IP_S00_AXI_SLV_REG2_OFFSET, 21845);
        CORDIC_ITERATIVA_IP_mWriteReg(XPAR_CORDIC_ITERATIVA_IP_0_S00_AXI_BASEADDR, CORDIC_ITERATIVA_IP_S00_AXI_SLV_REG3_OFFSET, 1);
        for(j=0; i<10; j++) {
            for (i=0; i<9999999; i++);
        }


        CORDIC_ITERATIVA_IP_mWriteReg(XPAR_CORDIC_ITERATIVA_IP_0_S00_AXI_BASEADDR, CORDIC_ITERATIVA_IP_S00_AXI_SLV_REG3_OFFSET, 0);
        CORDIC_ITERATIVA_IP_mWriteReg(XPAR_CORDIC_ITERATIVA_IP_0_S00_AXI_BASEADDR, CORDIC_ITERATIVA_IP_S00_AXI_SLV_REG0_OFFSET, 1000);
        CORDIC_ITERATIVA_IP_mWriteReg(XPAR_CORDIC_ITERATIVA_IP_0_S00_AXI_BASEADDR, CORDIC_ITERATIVA_IP_S00_AXI_SLV_REG1_OFFSET, 0);
        CORDIC_ITERATIVA_IP_mWriteReg(XPAR_CORDIC_ITERATIVA_IP_0_S00_AXI_BASEADDR, CORDIC_ITERATIVA_IP_S00_AXI_SLV_REG2_OFFSET, 32768);
        CORDIC_ITERATIVA_IP_mWriteReg(XPAR_CORDIC_ITERATIVA_IP_0_S00_AXI_BASEADDR, CORDIC_ITERATIVA_IP_S00_AXI_SLV_REG3_OFFSET, 1);
        for(j=0; i<10; j++) {
            for (i=0; i<9999999; i++);
        }


        CORDIC_ITERATIVA_IP_mWriteReg(XPAR_CORDIC_ITERATIVA_IP_0_S00_AXI_BASEADDR, CORDIC_ITERATIVA_IP_S00_AXI_SLV_REG3_OFFSET, 0);
        CORDIC_ITERATIVA_IP_mWriteReg(XPAR_CORDIC_ITERATIVA_IP_0_S00_AXI_BASEADDR, CORDIC_ITERATIVA_IP_S00_AXI_SLV_REG0_OFFSET, -5000);
        CORDIC_ITERATIVA_IP_mWriteReg(XPAR_CORDIC_ITERATIVA_IP_0_S00_AXI_BASEADDR, CORDIC_ITERATIVA_IP_S00_AXI_SLV_REG1_OFFSET, -5000);
        CORDIC_ITERATIVA_IP_mWriteReg(XPAR_CORDIC_ITERATIVA_IP_0_S00_AXI_BASEADDR, CORDIC_ITERATIVA_IP_S00_AXI_SLV_REG2_OFFSET, 131072);
        CORDIC_ITERATIVA_IP_mWriteReg(XPAR_CORDIC_ITERATIVA_IP_0_S00_AXI_BASEADDR, CORDIC_ITERATIVA_IP_S00_AXI_SLV_REG3_OFFSET, 1);
        for(j=0; i<10; j++) {
            for (i=0; i<9999999; i++);
        }
   }
}
