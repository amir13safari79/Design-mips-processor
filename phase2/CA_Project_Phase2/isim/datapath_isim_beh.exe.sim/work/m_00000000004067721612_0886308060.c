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
static const char *ng0 = "D:/electrical engineering/computer Architecture/project/phase2/CA_Project_Phase2/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static int ng9[] = {0, 0};



static void Always_29_0(char *t0)
{
    char t8[8];
    char t26[8];
    char t27[16];
    char t28[16];
    char t29[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(34, ng0);

LAB24:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t5, 32, t7, 32);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t7 = (t8 + 4);
    t9 = (t5 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (~(t10));
    *((unsigned int *)t8) = t11;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB26;

LAB25:    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 4294967295U);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 4294967295U);
    t18 = (t8 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (~(t19));
    t21 = *((unsigned int *)t8);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB27;

LAB28:
LAB29:    goto LAB23;

LAB9:    xsi_set_current_line(42, ng0);

LAB30:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_signed_minus(t8, 32, t5, 32, t7, 32);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t7 = (t8 + 4);
    t9 = (t5 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (~(t10));
    *((unsigned int *)t8) = t11;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB32;

LAB31:    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 4294967295U);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 4294967295U);
    t18 = (t8 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (~(t19));
    t21 = *((unsigned int *)t8);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB33;

LAB34:
LAB35:    goto LAB23;

LAB11:    xsi_set_current_line(50, ng0);

LAB36:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_signed_bit_and(t8, 32, t5, 32, t7, 32);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t7 = (t8 + 4);
    t9 = (t5 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (~(t10));
    *((unsigned int *)t8) = t11;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB38;

LAB37:    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 4294967295U);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 4294967295U);
    t18 = (t8 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (~(t19));
    t21 = *((unsigned int *)t8);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB39;

LAB40:
LAB41:    goto LAB23;

LAB13:    xsi_set_current_line(58, ng0);

LAB42:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_signed_bit_or(t8, 32, t5, 32, t7, 32);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t7 = (t8 + 4);
    t9 = (t5 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (~(t10));
    *((unsigned int *)t8) = t11;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB44;

LAB43:    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 4294967295U);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 4294967295U);
    t18 = (t8 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (~(t19));
    t21 = *((unsigned int *)t8);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB45;

LAB46:
LAB47:    goto LAB23;

LAB15:    xsi_set_current_line(66, ng0);

LAB48:    xsi_set_current_line(67, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_signed_bit_xor(t8, 32, t5, 32, t7, 32);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t7 = (t8 + 4);
    t9 = (t5 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (~(t10));
    *((unsigned int *)t8) = t11;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB50;

LAB49:    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 4294967295U);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 4294967295U);
    t18 = (t8 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (~(t19));
    t21 = *((unsigned int *)t8);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB51;

LAB52:
LAB53:    goto LAB23;

LAB17:    xsi_set_current_line(74, ng0);

LAB54:    xsi_set_current_line(75, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t26, 0, 8);
    xsi_vlog_signed_bit_or(t26, 32, t5, 32, t7, 32);
    memset(t8, 0, 8);
    t4 = (t8 + 4);
    t9 = (t26 + 4);
    memcpy(t8, t26, 8);
    t10 = *((unsigned int *)t8);
    t11 = (~(t10));
    t12 = *((unsigned int *)t4);
    t13 = (t11 | t12);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 4294967295U);
    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 4294967295U);
    t18 = (t0 + 1768);
    xsi_vlogvar_assign_value(t18, t8, 0, 0, 32);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t7 = (t8 + 4);
    t9 = (t5 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (~(t10));
    *((unsigned int *)t8) = t11;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB56;

LAB55:    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 4294967295U);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 4294967295U);
    t18 = (t8 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (~(t19));
    t21 = *((unsigned int *)t8);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB57;

LAB58:
LAB59:    goto LAB23;

LAB19:    xsi_set_current_line(82, ng0);

LAB60:    xsi_set_current_line(83, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t5, 32, t7, 32);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t7 = (t8 + 4);
    t9 = (t5 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (~(t10));
    *((unsigned int *)t8) = t11;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB62;

LAB61:    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 4294967295U);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 4294967295U);
    t18 = (t8 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (~(t19));
    t21 = *((unsigned int *)t8);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB63;

LAB64:
LAB65:    goto LAB23;

LAB21:    xsi_set_current_line(90, ng0);

LAB66:    xsi_set_current_line(91, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng9)));
    xsi_vlogtype_concat(t27, 64, 64, 2U, t4, 32, t5, 32);
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    t7 = ((char*)((ng9)));
    xsi_vlogtype_concat(t28, 64, 64, 2U, t7, 32, t9, 32);
    xsi_vlog_unsigned_less(t29, 64, t27, 64, t28, 64);
    t18 = (t0 + 1768);
    xsi_vlogvar_assign_value(t18, t29, 0, 0, 32);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t7 = (t8 + 4);
    t9 = (t5 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (~(t10));
    *((unsigned int *)t8) = t11;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB68;

LAB67:    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 4294967295U);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 4294967295U);
    t18 = (t8 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (~(t19));
    t21 = *((unsigned int *)t8);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB69;

LAB70:
LAB71:    goto LAB23;

LAB26:    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t9);
    *((unsigned int *)t8) = (t12 | t13);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t7) = (t14 | t15);
    goto LAB25;

LAB27:    xsi_set_current_line(37, ng0);
    t24 = ((char*)((ng2)));
    t25 = (t0 + 1928);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 1);
    goto LAB29;

LAB32:    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t9);
    *((unsigned int *)t8) = (t12 | t13);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t7) = (t14 | t15);
    goto LAB31;

LAB33:    xsi_set_current_line(45, ng0);
    t24 = ((char*)((ng2)));
    t25 = (t0 + 1928);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 1);
    goto LAB35;

LAB38:    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t9);
    *((unsigned int *)t8) = (t12 | t13);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t7) = (t14 | t15);
    goto LAB37;

LAB39:    xsi_set_current_line(53, ng0);
    t24 = ((char*)((ng2)));
    t25 = (t0 + 1928);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 1);
    goto LAB41;

LAB44:    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t9);
    *((unsigned int *)t8) = (t12 | t13);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t7) = (t14 | t15);
    goto LAB43;

LAB45:    xsi_set_current_line(61, ng0);
    t24 = ((char*)((ng2)));
    t25 = (t0 + 1928);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 1);
    goto LAB47;

LAB50:    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t9);
    *((unsigned int *)t8) = (t12 | t13);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t7) = (t14 | t15);
    goto LAB49;

LAB51:    xsi_set_current_line(69, ng0);
    t24 = ((char*)((ng2)));
    t25 = (t0 + 1928);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 1);
    goto LAB53;

LAB56:    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t9);
    *((unsigned int *)t8) = (t12 | t13);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t7) = (t14 | t15);
    goto LAB55;

LAB57:    xsi_set_current_line(77, ng0);
    t24 = ((char*)((ng2)));
    t25 = (t0 + 1928);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 1);
    goto LAB59;

LAB62:    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t9);
    *((unsigned int *)t8) = (t12 | t13);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t7) = (t14 | t15);
    goto LAB61;

LAB63:    xsi_set_current_line(85, ng0);
    t24 = ((char*)((ng2)));
    t25 = (t0 + 1928);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 1);
    goto LAB65;

LAB68:    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t9);
    *((unsigned int *)t8) = (t12 | t13);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t7) = (t14 | t15);
    goto LAB67;

LAB69:    xsi_set_current_line(93, ng0);
    t24 = ((char*)((ng2)));
    t25 = (t0 + 1928);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 1);
    goto LAB71;

}


extern void work_m_00000000004067721612_0886308060_init()
{
	static char *pe[] = {(void *)Always_29_0};
	xsi_register_didat("work_m_00000000004067721612_0886308060", "isim/datapath_isim_beh.exe.sim/work/m_00000000004067721612_0886308060.didat");
	xsi_register_executes(pe);
}
