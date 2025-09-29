  .syntax unified
  .cpu cortex-m4
  .fpu softvfp
  .thumb

.global  g_pfnVectorsM4

    .section  .text.Reset_HandlerM4
  .weak  Reset_HandlerM4
  .type  Reset_HandlerM4, %function
Reset_HandlerM4:
    b .
.size  Reset_HandlerM4, .-Reset_HandlerM4

/******************************************************************************
*
* The minimal vector table for a Cortex M. Note that the proper constructs
* must be placed on this to ensure that it ends up at physical address
* 0x0000.0000.
*
*******************************************************************************/
   .section  .isr_vectorM4,"a",%progbits
  .type  g_pfnVectorsM4, %object


g_pfnVectorsM4:
  .word  0x10048000
  .word  Reset_Handler

  .size  g_pfnVectorsM4, .-g_pfnVectorsM4

