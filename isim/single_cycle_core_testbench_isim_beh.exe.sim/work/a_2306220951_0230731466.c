/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "K:/Comp3211/Project/project1/single_cycle_core_testbench.vhw";
extern char *STD_TEXTIO;



static void work_a_2306220951_0230731466_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int64 t4;
    char *t5;
    char *t6;
    char *t7;
    int64 t8;
    double t9;
    int64 t10;
    int64 t11;

LAB0:    t1 = (t0 + 3288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3096);
    xsi_process_wait(t2, t4);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(64, ng0);

LAB8:
LAB9:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1768U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 1768U);
    t5 = *((char **)t2);
    t8 = *((int64 *)t5);
    t2 = (t0 + 1888U);
    t6 = *((char **)t2);
    t9 = *((double *)t6);
    t10 = (t8 * t9);
    t11 = (t4 - t10);
    t2 = (t0 + 3096);
    xsi_process_wait(t2, t11);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB10:;
LAB11:    goto LAB2;

LAB12:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1768U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 1888U);
    t5 = *((char **)t2);
    t9 = *((double *)t5);
    t8 = (t4 * t9);
    t2 = (t0 + 3096);
    xsi_process_wait(t2, t8);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    goto LAB8;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

}

static void work_a_2306220951_0230731466_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int64 t4;
    char *t5;
    char *t6;
    char *t7;
    int64 t8;
    double t9;
    int64 t10;
    int64 t11;

LAB0:    t1 = (t0 + 3536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3344);
    xsi_process_wait(t2, t4);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(75, ng0);

LAB8:
LAB9:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 4232);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1768U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 1768U);
    t5 = *((char **)t2);
    t8 = *((int64 *)t5);
    t2 = (t0 + 2008U);
    t6 = *((char **)t2);
    t9 = *((double *)t6);
    t10 = (t8 * t9);
    t11 = (t4 - t10);
    t2 = (t0 + 3344);
    xsi_process_wait(t2, t11);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB10:;
LAB11:    goto LAB2;

LAB12:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 4232);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1768U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 2008U);
    t5 = *((char **)t2);
    t9 = *((double *)t5);
    t8 = (t4 * t9);
    t2 = (t0 + 3344);
    xsi_process_wait(t2, t8);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    goto LAB8;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

}

static void work_a_2306220951_0230731466_p_2(char *t0)
{
    char t10[16];
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    unsigned char t9;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;

LAB0:    t1 = (t0 + 3784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(86, ng0);
    t3 = (285 * 1000LL);
    t2 = (t0 + 3592);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 4296);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(89, ng0);
    t3 = (285000 * 1000LL);
    t2 = (t0 + 3592);
    xsi_process_wait(t2, t3);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1648U);
    t4 = *((char **)t2);
    t8 = *((int *)t4);
    t9 = (t8 == 0);
    if (t9 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3592);
    t4 = (t0 + 2632U);
    t5 = (t0 + 1648U);
    t6 = *((char **)t5);
    t8 = *((int *)t6);
    std_textio_write5(STD_TEXTIO, t2, t4, t8, (unsigned char)0, 0);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 3592);
    t4 = (t0 + 2632U);
    t5 = (t0 + 7074);
    t7 = (t10 + 0U);
    t11 = (t7 + 0U);
    *((int *)t11) = 1;
    t11 = (t7 + 4U);
    *((int *)t11) = 27;
    t11 = (t7 + 8U);
    *((int *)t11) = 1;
    t8 = (27 - 1);
    t14 = (t8 * 1);
    t14 = (t14 + 1);
    t11 = (t7 + 12U);
    *((unsigned int *)t11) = t14;
    std_textio_write7(STD_TEXTIO, t2, t4, t5, t10, (unsigned char)0, 0);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3592);
    t4 = (t0 + 2456U);
    t5 = (t0 + 2632U);
    std_textio_writeline(STD_TEXTIO, t2, t4, t5);
    xsi_set_current_line(102, ng0);
    if ((unsigned char)0 == 0)
        goto LAB17;

LAB18:
LAB13:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 3592);
    t5 = (t0 + 2632U);
    t6 = (t0 + 6992);
    t11 = (t10 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 1;
    t12 = (t11 + 4U);
    *((int *)t12) = 21;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t13 = (21 - 1);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    std_textio_write7(STD_TEXTIO, t2, t5, t6, t10, (unsigned char)0, 0);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3592);
    t4 = (t0 + 2456U);
    t5 = (t0 + 2632U);
    std_textio_writeline(STD_TEXTIO, t2, t4, t5);
    xsi_set_current_line(94, ng0);
    if ((unsigned char)0 == 0)
        goto LAB15;

LAB16:    goto LAB13;

LAB15:    t2 = (t0 + 7013);
    xsi_report(t2, 61U, (unsigned char)3);
    goto LAB16;

LAB17:    t2 = (t0 + 7101);
    xsi_report(t2, 30U, (unsigned char)3);
    goto LAB18;

}


extern void work_a_2306220951_0230731466_init()
{
	static char *pe[] = {(void *)work_a_2306220951_0230731466_p_0,(void *)work_a_2306220951_0230731466_p_1,(void *)work_a_2306220951_0230731466_p_2};
	xsi_register_didat("work_a_2306220951_0230731466", "isim/single_cycle_core_testbench_isim_beh.exe.sim/work/a_2306220951_0230731466.didat");
	xsi_register_executes(pe);
}
