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
static int ng8[] = {31, 0};
static int ng9[] = {0, 0};
static int ng10[] = {1, 0};
static unsigned int ng11[] = {7U, 0U};



static void Always_35_0(char *t0)
{
    char t8[8];
    char t40[8];
    char t48[8];
    char t53[8];
    char t57[8];
    char t92[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t54;
    char *t55;
    char *t56;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t90;
    char *t91;
    char *t93;
    char *t94;
    char *t95;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(37, ng0);
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

LAB20:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(40, ng0);

LAB24:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t5, 32, t7, 32);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 4294967295U);
    if (t13 != 0)
        goto LAB28;

LAB26:    if (*((unsigned int *)t7) == 0)
        goto LAB25;

LAB27:    t14 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t14) = 1;

LAB28:    t15 = (t8 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t8);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB29;

LAB30:
LAB31:    goto LAB23;

LAB9:    xsi_set_current_line(48, ng0);

LAB32:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 32, t5, 32, t7, 32);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 4294967295U);
    if (t13 != 0)
        goto LAB36;

LAB34:    if (*((unsigned int *)t7) == 0)
        goto LAB33;

LAB35:    t14 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t14) = 1;

LAB36:    t15 = (t8 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t8);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB37;

LAB38:
LAB39:    goto LAB23;

LAB11:    xsi_set_current_line(56, ng0);

LAB40:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 & t10);
    *((unsigned int *)t8) = t11;
    t4 = (t5 + 4);
    t14 = (t7 + 4);
    t15 = (t8 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t14);
    t16 = (t12 | t13);
    *((unsigned int *)t15) = t16;
    t17 = *((unsigned int *)t15);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB41;

LAB42:
LAB43:    t39 = (t0 + 1768);
    xsi_vlogvar_assign_value(t39, t8, 0, 0, 32);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 4294967295U);
    if (t13 != 0)
        goto LAB47;

LAB45:    if (*((unsigned int *)t7) == 0)
        goto LAB44;

LAB46:    t14 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t14) = 1;

LAB47:    t15 = (t8 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t8);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB48;

LAB49:
LAB50:    goto LAB23;

LAB13:    xsi_set_current_line(64, ng0);

LAB51:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 | t10);
    *((unsigned int *)t8) = t11;
    t4 = (t5 + 4);
    t14 = (t7 + 4);
    t15 = (t8 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t14);
    t16 = (t12 | t13);
    *((unsigned int *)t15) = t16;
    t17 = *((unsigned int *)t15);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB52;

LAB53:
LAB54:    t39 = (t0 + 1768);
    xsi_vlogvar_assign_value(t39, t8, 0, 0, 32);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 4294967295U);
    if (t13 != 0)
        goto LAB58;

LAB56:    if (*((unsigned int *)t7) == 0)
        goto LAB55;

LAB57:    t14 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t14) = 1;

LAB58:    t15 = (t8 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t8);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB59;

LAB60:
LAB61:    goto LAB23;

LAB15:    xsi_set_current_line(72, ng0);

LAB62:    xsi_set_current_line(73, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    *((unsigned int *)t8) = t11;
    t4 = (t5 + 4);
    t14 = (t7 + 4);
    t15 = (t8 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t14);
    t16 = (t12 | t13);
    *((unsigned int *)t15) = t16;
    t17 = *((unsigned int *)t15);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB63;

LAB64:
LAB65:    t21 = (t0 + 1768);
    xsi_vlogvar_assign_value(t21, t8, 0, 0, 32);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 4294967295U);
    if (t13 != 0)
        goto LAB69;

LAB67:    if (*((unsigned int *)t7) == 0)
        goto LAB66;

LAB68:    t14 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t14) = 1;

LAB69:    t15 = (t8 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t8);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB70;

LAB71:
LAB72:    goto LAB23;

LAB17:    xsi_set_current_line(80, ng0);

LAB73:    xsi_set_current_line(81, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 | t10);
    *((unsigned int *)t40) = t11;
    t4 = (t5 + 4);
    t14 = (t7 + 4);
    t15 = (t40 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t14);
    t16 = (t12 | t13);
    *((unsigned int *)t15) = t16;
    t17 = *((unsigned int *)t15);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB74;

LAB75:
LAB76:    memset(t8, 0, 8);
    t39 = (t8 + 4);
    t41 = (t40 + 4);
    t35 = *((unsigned int *)t40);
    t36 = (~(t35));
    *((unsigned int *)t8) = t36;
    *((unsigned int *)t39) = 0;
    if (*((unsigned int *)t41) != 0)
        goto LAB78;

LAB77:    t44 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t44 & 4294967295U);
    t45 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t45 & 4294967295U);
    t46 = (t0 + 1768);
    xsi_vlogvar_assign_value(t46, t8, 0, 0, 32);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 4294967295U);
    if (t13 != 0)
        goto LAB82;

LAB80:    if (*((unsigned int *)t7) == 0)
        goto LAB79;

LAB81:    t14 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t14) = 1;

LAB82:    t15 = (t8 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t8);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB83;

LAB84:
LAB85:    goto LAB23;

LAB19:    xsi_set_current_line(88, ng0);

LAB86:    xsi_set_current_line(89, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1008U);
    t7 = (t4 + 72U);
    t14 = *((char **)t7);
    t15 = ((char*)((ng8)));
    xsi_vlog_generic_get_index_select_value(t8, 32, t5, t14, 2, t15, 32, 1);
    t21 = ((char*)((ng9)));
    memset(t40, 0, 8);
    t22 = (t8 + 4);
    t39 = (t21 + 4);
    t9 = *((unsigned int *)t8);
    t10 = *((unsigned int *)t21);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t22);
    t13 = *((unsigned int *)t39);
    t16 = (t12 ^ t13);
    t17 = (t11 | t16);
    t18 = *((unsigned int *)t22);
    t19 = *((unsigned int *)t39);
    t20 = (t18 | t19);
    t23 = (~(t20));
    t24 = (t17 & t23);
    if (t24 != 0)
        goto LAB90;

LAB87:    if (t20 != 0)
        goto LAB89;

LAB88:    *((unsigned int *)t40) = 1;

LAB90:    t46 = (t0 + 1208U);
    t47 = *((char **)t46);
    t46 = (t0 + 1168U);
    t49 = (t46 + 72U);
    t50 = *((char **)t49);
    t51 = ((char*)((ng8)));
    xsi_vlog_generic_get_index_select_value(t48, 32, t47, t50, 2, t51, 32, 1);
    t52 = ((char*)((ng9)));
    memset(t53, 0, 8);
    t54 = (t48 + 4);
    t55 = (t52 + 4);
    t25 = *((unsigned int *)t48);
    t26 = *((unsigned int *)t52);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t54);
    t29 = *((unsigned int *)t55);
    t30 = (t28 ^ t29);
    t33 = (t27 | t30);
    t34 = *((unsigned int *)t54);
    t35 = *((unsigned int *)t55);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB94;

LAB91:    if (t36 != 0)
        goto LAB93;

LAB92:    *((unsigned int *)t53) = 1;

LAB94:    t42 = *((unsigned int *)t40);
    t43 = *((unsigned int *)t53);
    t44 = (t42 & t43);
    *((unsigned int *)t57) = t44;
    t58 = (t40 + 4);
    t59 = (t53 + 4);
    t60 = (t57 + 4);
    t45 = *((unsigned int *)t58);
    t61 = *((unsigned int *)t59);
    t62 = (t45 | t61);
    *((unsigned int *)t60) = t62;
    t63 = *((unsigned int *)t60);
    t64 = (t63 != 0);
    if (t64 == 1)
        goto LAB95;

LAB96:
LAB97:    t83 = (t57 + 4);
    t84 = *((unsigned int *)t83);
    t85 = (~(t84));
    t86 = *((unsigned int *)t57);
    t87 = (t86 & t85);
    t88 = (t87 != 0);
    if (t88 > 0)
        goto LAB98;

LAB99:
LAB100:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t2 = (t0 + 1008U);
    t5 = (t2 + 72U);
    t7 = *((char **)t5);
    t14 = ((char*)((ng8)));
    xsi_vlog_generic_get_index_select_value(t8, 32, t4, t7, 2, t14, 32, 1);
    t15 = ((char*)((ng10)));
    memset(t40, 0, 8);
    t21 = (t8 + 4);
    t22 = (t15 + 4);
    t9 = *((unsigned int *)t8);
    t10 = *((unsigned int *)t15);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t21);
    t13 = *((unsigned int *)t22);
    t16 = (t12 ^ t13);
    t17 = (t11 | t16);
    t18 = *((unsigned int *)t21);
    t19 = *((unsigned int *)t22);
    t20 = (t18 | t19);
    t23 = (~(t20));
    t24 = (t17 & t23);
    if (t24 != 0)
        goto LAB109;

LAB106:    if (t20 != 0)
        goto LAB108;

LAB107:    *((unsigned int *)t40) = 1;

LAB109:    t41 = (t0 + 1208U);
    t46 = *((char **)t41);
    t41 = (t0 + 1168U);
    t47 = (t41 + 72U);
    t49 = *((char **)t47);
    t50 = ((char*)((ng8)));
    xsi_vlog_generic_get_index_select_value(t48, 32, t46, t49, 2, t50, 32, 1);
    t51 = ((char*)((ng9)));
    memset(t53, 0, 8);
    t52 = (t48 + 4);
    t54 = (t51 + 4);
    t25 = *((unsigned int *)t48);
    t26 = *((unsigned int *)t51);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t52);
    t29 = *((unsigned int *)t54);
    t30 = (t28 ^ t29);
    t33 = (t27 | t30);
    t34 = *((unsigned int *)t52);
    t35 = *((unsigned int *)t54);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB113;

LAB110:    if (t36 != 0)
        goto LAB112;

LAB111:    *((unsigned int *)t53) = 1;

LAB113:    t42 = *((unsigned int *)t40);
    t43 = *((unsigned int *)t53);
    t44 = (t42 & t43);
    *((unsigned int *)t57) = t44;
    t56 = (t40 + 4);
    t58 = (t53 + 4);
    t59 = (t57 + 4);
    t45 = *((unsigned int *)t56);
    t61 = *((unsigned int *)t58);
    t62 = (t45 | t61);
    *((unsigned int *)t59) = t62;
    t63 = *((unsigned int *)t59);
    t64 = (t63 != 0);
    if (t64 == 1)
        goto LAB114;

LAB115:
LAB116:    t68 = (t57 + 4);
    t84 = *((unsigned int *)t68);
    t85 = (~(t84));
    t86 = *((unsigned int *)t57);
    t87 = (t86 & t85);
    t88 = (t87 != 0);
    if (t88 > 0)
        goto LAB117;

LAB118:
LAB119:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t2 = (t0 + 1008U);
    t5 = (t2 + 72U);
    t7 = *((char **)t5);
    t14 = ((char*)((ng8)));
    xsi_vlog_generic_get_index_select_value(t8, 32, t4, t7, 2, t14, 32, 1);
    t15 = ((char*)((ng9)));
    memset(t40, 0, 8);
    t21 = (t8 + 4);
    t22 = (t15 + 4);
    t9 = *((unsigned int *)t8);
    t10 = *((unsigned int *)t15);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t21);
    t13 = *((unsigned int *)t22);
    t16 = (t12 ^ t13);
    t17 = (t11 | t16);
    t18 = *((unsigned int *)t21);
    t19 = *((unsigned int *)t22);
    t20 = (t18 | t19);
    t23 = (~(t20));
    t24 = (t17 & t23);
    if (t24 != 0)
        goto LAB123;

LAB120:    if (t20 != 0)
        goto LAB122;

LAB121:    *((unsigned int *)t40) = 1;

LAB123:    t41 = (t0 + 1208U);
    t46 = *((char **)t41);
    t41 = (t0 + 1168U);
    t47 = (t41 + 72U);
    t49 = *((char **)t47);
    t50 = ((char*)((ng8)));
    xsi_vlog_generic_get_index_select_value(t48, 32, t46, t49, 2, t50, 32, 1);
    t51 = ((char*)((ng10)));
    memset(t53, 0, 8);
    t52 = (t48 + 4);
    t54 = (t51 + 4);
    t25 = *((unsigned int *)t48);
    t26 = *((unsigned int *)t51);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t52);
    t29 = *((unsigned int *)t54);
    t30 = (t28 ^ t29);
    t33 = (t27 | t30);
    t34 = *((unsigned int *)t52);
    t35 = *((unsigned int *)t54);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB127;

LAB124:    if (t36 != 0)
        goto LAB126;

LAB125:    *((unsigned int *)t53) = 1;

LAB127:    t42 = *((unsigned int *)t40);
    t43 = *((unsigned int *)t53);
    t44 = (t42 & t43);
    *((unsigned int *)t57) = t44;
    t56 = (t40 + 4);
    t58 = (t53 + 4);
    t59 = (t57 + 4);
    t45 = *((unsigned int *)t56);
    t61 = *((unsigned int *)t58);
    t62 = (t45 | t61);
    *((unsigned int *)t59) = t62;
    t63 = *((unsigned int *)t59);
    t64 = (t63 != 0);
    if (t64 == 1)
        goto LAB128;

LAB129:
LAB130:    t68 = (t57 + 4);
    t84 = *((unsigned int *)t68);
    t85 = (~(t84));
    t86 = *((unsigned int *)t57);
    t87 = (t86 & t85);
    t88 = (t87 != 0);
    if (t88 > 0)
        goto LAB131;

LAB132:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t4 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB135;

LAB134:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB135;

LAB138:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB136;

LAB137:    t15 = (t0 + 1768);
    xsi_vlogvar_assign_value(t15, t8, 0, 0, 32);

LAB133:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 4294967295U);
    if (t13 != 0)
        goto LAB142;

LAB140:    if (*((unsigned int *)t7) == 0)
        goto LAB139;

LAB141:    t14 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t14) = 1;

LAB142:    t15 = (t8 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t8);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB143;

LAB144:
LAB145:    goto LAB23;

LAB21:    xsi_set_current_line(103, ng0);

LAB146:    xsi_set_current_line(104, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    t4 = (t5 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB148;

LAB147:    t14 = (t7 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB148;

LAB151:    if (*((unsigned int *)t5) < *((unsigned int *)t7))
        goto LAB149;

LAB150:    t21 = (t0 + 1768);
    xsi_vlogvar_assign_value(t21, t8, 0, 0, 32);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 1768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 4294967295U);
    if (t13 != 0)
        goto LAB155;

LAB153:    if (*((unsigned int *)t7) == 0)
        goto LAB152;

LAB154:    t14 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t14) = 1;

LAB155:    t15 = (t8 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t8);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB156;

LAB157:
LAB158:    goto LAB23;

LAB25:    *((unsigned int *)t8) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(43, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 1928);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 1);
    goto LAB31;

LAB33:    *((unsigned int *)t8) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(51, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 1928);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 1);
    goto LAB39;

LAB41:    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t15);
    *((unsigned int *)t8) = (t19 | t20);
    t21 = (t5 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t5);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t7);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (~(t29));
    t31 = (t24 & t26);
    t32 = (t28 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t35 & t33);
    t36 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t36 & t34);
    t37 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t37 & t33);
    t38 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t38 & t34);
    goto LAB43;

LAB44:    *((unsigned int *)t8) = 1;
    goto LAB47;

LAB48:    xsi_set_current_line(59, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 1928);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 1);
    goto LAB50;

LAB52:    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t15);
    *((unsigned int *)t8) = (t19 | t20);
    t21 = (t5 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t31 = (t25 & t24);
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t32 = (t28 & t27);
    t29 = (~(t31));
    t30 = (~(t32));
    t33 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t33 & t29);
    t34 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t34 & t30);
    goto LAB54;

LAB55:    *((unsigned int *)t8) = 1;
    goto LAB58;

LAB59:    xsi_set_current_line(67, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 1928);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 1);
    goto LAB61;

LAB63:    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t15);
    *((unsigned int *)t8) = (t19 | t20);
    goto LAB65;

LAB66:    *((unsigned int *)t8) = 1;
    goto LAB69;

LAB70:    xsi_set_current_line(75, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 1928);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 1);
    goto LAB72;

LAB74:    t19 = *((unsigned int *)t40);
    t20 = *((unsigned int *)t15);
    *((unsigned int *)t40) = (t19 | t20);
    t21 = (t5 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t31 = (t25 & t24);
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t32 = (t28 & t27);
    t29 = (~(t31));
    t30 = (~(t32));
    t33 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t33 & t29);
    t34 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t34 & t30);
    goto LAB76;

LAB78:    t37 = *((unsigned int *)t8);
    t38 = *((unsigned int *)t41);
    *((unsigned int *)t8) = (t37 | t38);
    t42 = *((unsigned int *)t39);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t39) = (t42 | t43);
    goto LAB77;

LAB79:    *((unsigned int *)t8) = 1;
    goto LAB82;

LAB83:    xsi_set_current_line(83, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 1928);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 1);
    goto LAB85;

LAB89:    t41 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB90;

LAB93:    t56 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB94;

LAB95:    t65 = *((unsigned int *)t57);
    t66 = *((unsigned int *)t60);
    *((unsigned int *)t57) = (t65 | t66);
    t67 = (t40 + 4);
    t68 = (t53 + 4);
    t69 = *((unsigned int *)t40);
    t70 = (~(t69));
    t71 = *((unsigned int *)t67);
    t72 = (~(t71));
    t73 = *((unsigned int *)t53);
    t74 = (~(t73));
    t75 = *((unsigned int *)t68);
    t76 = (~(t75));
    t31 = (t70 & t72);
    t32 = (t74 & t76);
    t77 = (~(t31));
    t78 = (~(t32));
    t79 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t79 & t77);
    t80 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t80 & t78);
    t81 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t81 & t77);
    t82 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t82 & t78);
    goto LAB97;

LAB98:    xsi_set_current_line(90, ng0);
    t89 = (t0 + 1048U);
    t90 = *((char **)t89);
    t89 = (t0 + 1208U);
    t91 = *((char **)t89);
    memset(t92, 0, 8);
    t89 = (t90 + 4);
    if (*((unsigned int *)t89) != 0)
        goto LAB102;

LAB101:    t93 = (t91 + 4);
    if (*((unsigned int *)t93) != 0)
        goto LAB102;

LAB105:    if (*((unsigned int *)t90) < *((unsigned int *)t91))
        goto LAB103;

LAB104:    t95 = (t0 + 1768);
    xsi_vlogvar_assign_value(t95, t92, 0, 0, 32);
    goto LAB100;

LAB102:    t94 = (t92 + 4);
    *((unsigned int *)t92) = 1;
    *((unsigned int *)t94) = 1;
    goto LAB104;

LAB103:    *((unsigned int *)t92) = 1;
    goto LAB104;

LAB108:    t39 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB109;

LAB112:    t55 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB113;

LAB114:    t65 = *((unsigned int *)t57);
    t66 = *((unsigned int *)t59);
    *((unsigned int *)t57) = (t65 | t66);
    t60 = (t40 + 4);
    t67 = (t53 + 4);
    t69 = *((unsigned int *)t40);
    t70 = (~(t69));
    t71 = *((unsigned int *)t60);
    t72 = (~(t71));
    t73 = *((unsigned int *)t53);
    t74 = (~(t73));
    t75 = *((unsigned int *)t67);
    t76 = (~(t75));
    t6 = (t70 & t72);
    t31 = (t74 & t76);
    t77 = (~(t6));
    t78 = (~(t31));
    t79 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t79 & t77);
    t80 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t80 & t78);
    t81 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t81 & t77);
    t82 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t82 & t78);
    goto LAB116;

LAB117:    xsi_set_current_line(92, ng0);
    t83 = ((char*)((ng10)));
    t89 = (t0 + 1768);
    xsi_vlogvar_assign_value(t89, t83, 0, 0, 32);
    goto LAB119;

LAB122:    t39 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB123;

LAB126:    t55 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB127;

LAB128:    t65 = *((unsigned int *)t57);
    t66 = *((unsigned int *)t59);
    *((unsigned int *)t57) = (t65 | t66);
    t60 = (t40 + 4);
    t67 = (t53 + 4);
    t69 = *((unsigned int *)t40);
    t70 = (~(t69));
    t71 = *((unsigned int *)t60);
    t72 = (~(t71));
    t73 = *((unsigned int *)t53);
    t74 = (~(t73));
    t75 = *((unsigned int *)t67);
    t76 = (~(t75));
    t6 = (t70 & t72);
    t31 = (t74 & t76);
    t77 = (~(t6));
    t78 = (~(t31));
    t79 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t79 & t77);
    t80 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t80 & t78);
    t81 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t81 & t77);
    t82 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t82 & t78);
    goto LAB130;

LAB131:    xsi_set_current_line(94, ng0);
    t83 = ((char*)((ng9)));
    t89 = (t0 + 1768);
    xsi_vlogvar_assign_value(t89, t83, 0, 0, 32);
    goto LAB133;

LAB135:    t14 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB137;

LAB136:    *((unsigned int *)t8) = 1;
    goto LAB137;

LAB139:    *((unsigned int *)t8) = 1;
    goto LAB142;

LAB143:    xsi_set_current_line(98, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 1928);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 1);
    goto LAB145;

LAB148:    t15 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB150;

LAB149:    *((unsigned int *)t8) = 1;
    goto LAB150;

LAB152:    *((unsigned int *)t8) = 1;
    goto LAB155;

LAB156:    xsi_set_current_line(106, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 1928);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 1);
    goto LAB158;

}


extern void work_m_00000000004067721612_0886308060_init()
{
	static char *pe[] = {(void *)Always_35_0};
	xsi_register_didat("work_m_00000000004067721612_0886308060", "isim/fib_tb_isim_beh.exe.sim/work/m_00000000004067721612_0886308060.didat");
	xsi_register_executes(pe);
}
