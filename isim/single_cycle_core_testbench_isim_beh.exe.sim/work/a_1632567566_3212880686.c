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
static const char *ng0 = "K:/Comp3211/Project/project1/data_memory.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_1632567566_3212880686_p_0(char *t0)
{
    char t34[16];
    char t35[16];
    char t39[16];
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;
    int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t36;
    char *t37;
    int t38;
    char *t40;
    int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;

LAB0:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 7008U);
    t3 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t2, t1);
    t4 = (t0 + 2888U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    *((int *)t4) = t3;
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 2888U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t6 = (t3 / 2);
    t1 = (t0 + 2888U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t6;
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t8 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t8 == 1)
        goto LAB7;

LAB8:    t7 = (unsigned char)0;

LAB9:    if (t7 != 0)
        goto LAB5;

LAB6:
LAB3:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 2768U);
    t2 = *((char **)t1);
    t1 = (t0 + 2888U);
    t4 = *((char **)t1);
    t3 = *((int *)t4);
    t6 = (t3 - 0);
    t10 = (t6 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t3);
    t11 = (16U * t10);
    t12 = (0 + t11);
    t1 = (t2 + t12);
    t5 = (t0 + 4272);
    t9 = (t5 + 56U);
    t19 = *((char **)t9);
    t20 = (t19 + 56U);
    t24 = *((char **)t20);
    memcpy(t24, t1, 16U);
    xsi_driver_first_trans_fast(t5);

LAB17:    xsi_set_current_line(116, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 4336);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t9 = (t5 + 56U);
    t19 = *((char **)t9);
    memcpy(t19, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(120, ng0);
    t1 = (t0 + 2768U);
    t2 = *((char **)t1);
    t1 = (t0 + 4400);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t9 = (t5 + 56U);
    t19 = *((char **)t9);
    memcpy(t19, t2, 256U);
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 4192);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 7692);
    t5 = (t0 + 2768U);
    t9 = *((char **)t5);
    t3 = (0 - 0);
    t10 = (t3 * 1);
    t11 = (16U * t10);
    t12 = (0 + t11);
    t5 = (t9 + t12);
    memcpy(t5, t1, 16U);
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 7708);
    t4 = (t0 + 2768U);
    t5 = *((char **)t4);
    t3 = (1 - 0);
    t10 = (t3 * 1);
    t11 = (16U * t10);
    t12 = (0 + t11);
    t4 = (t5 + t12);
    memcpy(t4, t1, 16U);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 7724);
    t4 = (t0 + 2768U);
    t5 = *((char **)t4);
    t3 = (2 - 0);
    t10 = (t3 * 1);
    t11 = (16U * t10);
    t12 = (0 + t11);
    t4 = (t5 + t12);
    memcpy(t4, t1, 16U);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 7740);
    t4 = (t0 + 2768U);
    t5 = *((char **)t4);
    t3 = (3 - 0);
    t10 = (t3 * 1);
    t11 = (16U * t10);
    t12 = (0 + t11);
    t4 = (t5 + t12);
    memcpy(t4, t1, 16U);
    xsi_set_current_line(69, ng0);
    t1 = (t0 + 7756);
    t4 = (t0 + 2768U);
    t5 = *((char **)t4);
    t3 = (4 - 0);
    t10 = (t3 * 1);
    t11 = (16U * t10);
    t12 = (0 + t11);
    t4 = (t5 + t12);
    memcpy(t4, t1, 16U);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 7772);
    t4 = (t0 + 2768U);
    t5 = *((char **)t4);
    t3 = (5 - 0);
    t10 = (t3 * 1);
    t11 = (16U * t10);
    t12 = (0 + t11);
    t4 = (t5 + t12);
    memcpy(t4, t1, 16U);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 7788);
    t4 = (t0 + 2768U);
    t5 = *((char **)t4);
    t3 = (6 - 0);
    t10 = (t3 * 1);
    t11 = (16U * t10);
    t12 = (0 + t11);
    t4 = (t5 + t12);
    memcpy(t4, t1, 16U);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 7804);
    t4 = (t0 + 2768U);
    t5 = *((char **)t4);
    t3 = (7 - 0);
    t10 = (t3 * 1);
    t11 = (16U * t10);
    t12 = (0 + t11);
    t4 = (t5 + t12);
    memcpy(t4, t1, 16U);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 7820);
    t4 = (t0 + 2768U);
    t5 = *((char **)t4);
    t3 = (8 - 0);
    t10 = (t3 * 1);
    t11 = (16U * t10);
    t12 = (0 + t11);
    t4 = (t5 + t12);
    memcpy(t4, t1, 16U);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 7836);
    t4 = (t0 + 2768U);
    t5 = *((char **)t4);
    t3 = (9 - 0);
    t10 = (t3 * 1);
    t11 = (16U * t10);
    t12 = (0 + t11);
    t4 = (t5 + t12);
    memcpy(t4, t1, 16U);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 7852);
    t4 = (t0 + 2768U);
    t5 = *((char **)t4);
    t3 = (10 - 0);
    t10 = (t3 * 1);
    t11 = (16U * t10);
    t12 = (0 + t11);
    t4 = (t5 + t12);
    memcpy(t4, t1, 16U);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 7868);
    t4 = (t0 + 2768U);
    t5 = *((char **)t4);
    t3 = (11 - 0);
    t10 = (t3 * 1);
    t11 = (16U * t10);
    t12 = (0 + t11);
    t4 = (t5 + t12);
    memcpy(t4, t1, 16U);
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 7884);
    t4 = (t0 + 2768U);
    t5 = *((char **)t4);
    t3 = (12 - 0);
    t10 = (t3 * 1);
    t11 = (16U * t10);
    t12 = (0 + t11);
    t4 = (t5 + t12);
    memcpy(t4, t1, 16U);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 7900);
    t4 = (t0 + 2768U);
    t5 = *((char **)t4);
    t3 = (13 - 0);
    t10 = (t3 * 1);
    t11 = (16U * t10);
    t12 = (0 + t11);
    t4 = (t5 + t12);
    memcpy(t4, t1, 16U);
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 7916);
    t4 = (t0 + 2768U);
    t5 = *((char **)t4);
    t3 = (14 - 0);
    t10 = (t3 * 1);
    t11 = (16U * t10);
    t12 = (0 + t11);
    t4 = (t5 + t12);
    memcpy(t4, t1, 16U);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 7932);
    t4 = (t0 + 2768U);
    t5 = *((char **)t4);
    t3 = (15 - 0);
    t10 = (t3 * 1);
    t11 = (16U * t10);
    t12 = (0 + t11);
    t4 = (t5 + t12);
    memcpy(t4, t1, 16U);
    goto LAB3;

LAB5:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1512U);
    t5 = *((char **)t2);
    t15 = *((unsigned char *)t5);
    t16 = (t15 == (unsigned char)3);
    if (t16 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 2768U);
    t4 = *((char **)t1);
    t1 = (t0 + 2888U);
    t5 = *((char **)t1);
    t3 = *((int *)t5);
    t6 = (t3 - 0);
    t10 = (t6 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t3);
    t11 = (16U * t10);
    t12 = (0 + t11);
    t1 = (t4 + t12);
    memcpy(t1, t2, 16U);

LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    t7 = t14;
    goto LAB9;

LAB10:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1832U);
    t9 = *((char **)t2);
    t3 = (0 - 11);
    t10 = (t3 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t2 = (t9 + t12);
    t17 = *((unsigned char *)t2);
    t18 = (t17 == (unsigned char)3);
    if (t18 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t10 = (15 - 7);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t1 = (t2 + t12);
    t4 = (t0 + 2768U);
    t5 = *((char **)t4);
    t21 = (15 - 7);
    t22 = (t21 * 1U);
    t4 = (t0 + 2888U);
    t9 = *((char **)t4);
    t3 = *((int *)t9);
    t6 = (t3 - 0);
    t23 = (t6 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t3);
    t26 = (16U * t23);
    t27 = (0 + t26);
    t30 = (t27 + t22);
    t4 = (t5 + t30);
    memcpy(t4, t1, 8U);

LAB14:    goto LAB11;

LAB13:    xsi_set_current_line(87, ng0);
    t19 = (t0 + 1672U);
    t20 = *((char **)t19);
    t21 = (15 - 7);
    t22 = (t21 * 1U);
    t23 = (0 + t22);
    t19 = (t20 + t23);
    t24 = (t0 + 2768U);
    t25 = *((char **)t24);
    t26 = (15 - 15);
    t27 = (t26 * 1U);
    t24 = (t0 + 2888U);
    t28 = *((char **)t24);
    t6 = *((int *)t28);
    t29 = (t6 - 0);
    t30 = (t29 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t6);
    t31 = (16U * t30);
    t32 = (0 + t31);
    t33 = (t32 + t27);
    t24 = (t25 + t33);
    memcpy(t24, t19, 8U);
    goto LAB14;

LAB16:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 1832U);
    t4 = *((char **)t1);
    t3 = (0 - 11);
    t10 = (t3 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t1 = (t4 + t12);
    t13 = *((unsigned char *)t1);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 7956);
    t4 = (t0 + 2768U);
    t5 = *((char **)t4);
    t10 = (15 - 7);
    t11 = (t10 * 1U);
    t4 = (t0 + 2888U);
    t9 = *((char **)t4);
    t3 = *((int *)t9);
    t6 = (t3 - 0);
    t12 = (t6 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t3);
    t21 = (16U * t12);
    t22 = (0 + t21);
    t23 = (t22 + t11);
    t4 = (t5 + t23);
    t20 = ((IEEE_P_2592010699) + 4024);
    t24 = (t35 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = 0;
    t25 = (t24 + 4U);
    *((int *)t25) = 7;
    t25 = (t24 + 8U);
    *((int *)t25) = 1;
    t29 = (7 - 0);
    t26 = (t29 * 1);
    t26 = (t26 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t26;
    t25 = (t39 + 0U);
    t28 = (t25 + 0U);
    *((int *)t28) = 7;
    t28 = (t25 + 4U);
    *((int *)t28) = 0;
    t28 = (t25 + 8U);
    *((int *)t28) = -1;
    t38 = (0 - 7);
    t26 = (t38 * -1);
    t26 = (t26 + 1);
    t28 = (t25 + 12U);
    *((unsigned int *)t28) = t26;
    t19 = xsi_base_array_concat(t19, t34, t20, (char)97, t1, t35, (char)97, t4, t39, (char)101);
    t26 = (8U + 8U);
    t7 = (16U != t26);
    if (t7 == 1)
        goto LAB24;

LAB25:    t28 = (t0 + 4272);
    t36 = (t28 + 56U);
    t37 = *((char **)t36);
    t40 = (t37 + 56U);
    t42 = *((char **)t40);
    memcpy(t42, t19, 16U);
    xsi_driver_first_trans_fast(t28);

LAB20:    goto LAB17;

LAB19:    xsi_set_current_line(107, ng0);
    t5 = (t0 + 7948);
    t19 = (t0 + 2768U);
    t20 = *((char **)t19);
    t21 = (15 - 15);
    t22 = (t21 * 1U);
    t19 = (t0 + 2888U);
    t24 = *((char **)t19);
    t6 = *((int *)t24);
    t29 = (t6 - 0);
    t23 = (t29 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t6);
    t26 = (16U * t23);
    t27 = (0 + t26);
    t30 = (t27 + t22);
    t19 = (t20 + t30);
    t28 = ((IEEE_P_2592010699) + 4024);
    t36 = (t35 + 0U);
    t37 = (t36 + 0U);
    *((int *)t37) = 0;
    t37 = (t36 + 4U);
    *((int *)t37) = 7;
    t37 = (t36 + 8U);
    *((int *)t37) = 1;
    t38 = (7 - 0);
    t31 = (t38 * 1);
    t31 = (t31 + 1);
    t37 = (t36 + 12U);
    *((unsigned int *)t37) = t31;
    t37 = (t39 + 0U);
    t40 = (t37 + 0U);
    *((int *)t40) = 15;
    t40 = (t37 + 4U);
    *((int *)t40) = 8;
    t40 = (t37 + 8U);
    *((int *)t40) = -1;
    t41 = (8 - 15);
    t31 = (t41 * -1);
    t31 = (t31 + 1);
    t40 = (t37 + 12U);
    *((unsigned int *)t40) = t31;
    t25 = xsi_base_array_concat(t25, t34, t28, (char)97, t5, t35, (char)97, t19, t39, (char)101);
    t31 = (8U + 8U);
    t15 = (16U != t31);
    if (t15 == 1)
        goto LAB22;

LAB23:    t40 = (t0 + 4272);
    t42 = (t40 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memcpy(t45, t25, 16U);
    xsi_driver_first_trans_fast(t40);
    goto LAB20;

LAB22:    xsi_size_not_matching(16U, t31, 0);
    goto LAB23;

LAB24:    xsi_size_not_matching(16U, t26, 0);
    goto LAB25;

}


extern void work_a_1632567566_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1632567566_3212880686_p_0};
	xsi_register_didat("work_a_1632567566_3212880686", "isim/single_cycle_core_testbench_isim_beh.exe.sim/work/a_1632567566_3212880686.didat");
	xsi_register_executes(pe);
}
