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
static const char *ng0 = "K:/Comp3211/Project/project1/register_file.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_2615964831_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned char t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;

LAB0:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 7328U);
    t3 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t2, t1);
    t4 = (t0 + 2888U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    *((int *)t4) = t3;
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 7344U);
    t3 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t2, t1);
    t4 = (t0 + 3008U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    *((int *)t4) = t3;
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 7360U);
    t3 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t2, t1);
    t4 = (t0 + 3128U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    *((int *)t4) = t3;
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t7 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t7 == 1)
        goto LAB9;

LAB10:    t6 = (unsigned char)0;

LAB11:    if (t6 != 0)
        goto LAB7;

LAB8:
LAB3:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 8036);
    t4 = (t0 + 2768U);
    t5 = *((char **)t4);
    t3 = (0 - 0);
    t10 = (t3 * 1);
    t15 = (16U * t10);
    t16 = (0 + t15);
    t4 = (t5 + t16);
    memcpy(t4, t1, 16U);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 2768U);
    t2 = *((char **)t1);
    t1 = (t0 + 2888U);
    t4 = *((char **)t1);
    t3 = *((int *)t4);
    t14 = (t3 - 0);
    t10 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t3);
    t15 = (16U * t10);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t5 = (t0 + 4512);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t17 = *((char **)t12);
    memcpy(t17, t1, 16U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 2768U);
    t2 = *((char **)t1);
    t1 = (t0 + 3008U);
    t4 = *((char **)t1);
    t3 = *((int *)t4);
    t14 = (t3 - 0);
    t10 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t3);
    t15 = (16U * t10);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t5 = (t0 + 4576);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t17 = *((char **)t12);
    memcpy(t17, t1, 16U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 2768U);
    t2 = *((char **)t1);
    t1 = (t0 + 4640);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    memcpy(t11, t2, 256U);
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 4432);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(66, ng0);
    t1 = xsi_get_transient_memory(256U);
    memset(t1, 0, 256U);
    t4 = t1;
    t5 = (t0 + 8020);
    t9 = (16U != 0);
    if (t9 == 1)
        goto LAB5;

LAB6:    t11 = (t0 + 2768U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    memcpy(t11, t1, 256U);
    goto LAB3;

LAB5:    t10 = (256U / 16U);
    xsi_mem_set_data(t4, t5, 16U, t10);
    goto LAB6;

LAB7:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1992U);
    t5 = *((char **)t2);
    t2 = (t0 + 2768U);
    t8 = *((char **)t2);
    t2 = (t0 + 3128U);
    t11 = *((char **)t2);
    t3 = *((int *)t11);
    t14 = (t3 - 0);
    t10 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t3);
    t15 = (16U * t10);
    t16 = (0 + t15);
    t2 = (t8 + t16);
    memcpy(t2, t5, 16U);
    goto LAB3;

LAB9:    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t9 = *((unsigned char *)t4);
    t13 = (t9 == (unsigned char)3);
    t6 = t13;
    goto LAB11;

}


extern void work_a_2615964831_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2615964831_3212880686_p_0};
	xsi_register_didat("work_a_2615964831_3212880686", "isim/single_cycle_core_testbench_isim_beh.exe.sim/work/a_2615964831_3212880686.didat");
	xsi_register_executes(pe);
}
