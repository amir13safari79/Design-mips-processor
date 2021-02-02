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
static const char *ng0 = "D:/electrical engineering/computer Architecture/project/phase1/verilog code/CA_Project_Phase1/DataMemory.v";
static const char *ng1 = "memfile.dat";
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {1, 0};



static void Initial_39_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 2704);
    xsi_vlogfile_readmemh(ng1, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Always_43_1(char *t0)
{
    char t6[8];
    char t16[8];
    char t23[8];
    char t84[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t85;

LAB0:    t1 = (t0 + 3872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 4440);
    *((int *)t2) = 1;
    t3 = (t0 + 3904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 472);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t4, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(50, ng0);

LAB9:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1504U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t13 = (t7 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t7);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t13);
    t27 = (t11 ^ t12);
    t28 = (t10 | t27);
    t29 = *((unsigned int *)t5);
    t30 = *((unsigned int *)t13);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t34 = (t28 & t32);
    if (t34 != 0)
        goto LAB11;

LAB10:    if (t31 != 0)
        goto LAB12;

LAB13:    t15 = (t6 + 4);
    t35 = *((unsigned int *)t15);
    t36 = (~(t35));
    t37 = *((unsigned int *)t6);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t13 = (t7 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t7);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t13);
    t27 = (t11 ^ t12);
    t28 = (t10 | t27);
    t29 = *((unsigned int *)t5);
    t30 = *((unsigned int *)t13);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t34 = (t28 & t32);
    if (t34 != 0)
        goto LAB21;

LAB18:    if (t31 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t6) = 1;

LAB21:    t15 = (t0 + 2384);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 1504U);
    t20 = *((char **)t19);
    memset(t16, 0, 8);
    t19 = (t18 + 4);
    t21 = (t20 + 4);
    t35 = *((unsigned int *)t18);
    t36 = *((unsigned int *)t20);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t19);
    t39 = *((unsigned int *)t21);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t19);
    t43 = *((unsigned int *)t21);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB25;

LAB22:    if (t44 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t16) = 1;

LAB25:    t47 = *((unsigned int *)t6);
    t48 = *((unsigned int *)t16);
    t49 = (t47 & t48);
    *((unsigned int *)t23) = t49;
    t24 = (t6 + 4);
    t25 = (t16 + 4);
    t26 = (t23 + 4);
    t50 = *((unsigned int *)t24);
    t51 = *((unsigned int *)t25);
    t52 = (t50 | t51);
    *((unsigned int *)t26) = t52;
    t53 = *((unsigned int *)t26);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB26;

LAB27:
LAB28:    t74 = (t23 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t23);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t13 = (t7 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t7);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t13);
    t27 = (t11 ^ t12);
    t28 = (t10 | t27);
    t29 = *((unsigned int *)t5);
    t30 = *((unsigned int *)t13);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t34 = (t28 & t32);
    if (t34 != 0)
        goto LAB34;

LAB33:    if (t31 != 0)
        goto LAB35;

LAB36:    t15 = (t0 + 2384);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 1504U);
    t20 = *((char **)t19);
    memset(t16, 0, 8);
    t19 = (t18 + 4);
    t21 = (t20 + 4);
    t35 = *((unsigned int *)t18);
    t36 = *((unsigned int *)t20);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t19);
    t39 = *((unsigned int *)t21);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t19);
    t43 = *((unsigned int *)t21);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB40;

LAB37:    if (t44 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t16) = 1;

LAB40:    t47 = *((unsigned int *)t6);
    t48 = *((unsigned int *)t16);
    t49 = (t47 & t48);
    *((unsigned int *)t23) = t49;
    t24 = (t6 + 4);
    t25 = (t16 + 4);
    t26 = (t23 + 4);
    t50 = *((unsigned int *)t24);
    t51 = *((unsigned int *)t25);
    t52 = (t50 | t51);
    *((unsigned int *)t26) = t52;
    t53 = *((unsigned int *)t26);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB41;

LAB42:
LAB43:    t74 = (t23 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t23);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB44;

LAB45:
LAB46:
LAB31:
LAB16:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(45, ng0);

LAB8:    xsi_set_current_line(46, ng0);
    t13 = (t0 + 2704);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 2704);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2704);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t24 = (t0 + 1504U);
    t25 = *((char **)t24);
    memset(t23, 0, 8);
    t24 = (t23 + 4);
    t26 = (t25 + 4);
    t27 = *((unsigned int *)t25);
    t28 = (t27 >> 2);
    *((unsigned int *)t23) = t28;
    t29 = *((unsigned int *)t26);
    t30 = (t29 >> 2);
    *((unsigned int *)t24) = t30;
    t31 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t31 & 1073741823U);
    t32 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t32 & 1073741823U);
    xsi_vlog_generic_get_array_select_value(t16, 32, t15, t19, t22, 2, 1, t23, 30, 2);
    t33 = (t0 + 2064);
    xsi_vlogvar_wait_assign_value(t33, t16, 0, 0, 32, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB7;

LAB11:    *((unsigned int *)t6) = 1;
    goto LAB13;

LAB12:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(52, ng0);

LAB17:    xsi_set_current_line(53, ng0);
    t17 = (t0 + 1504U);
    t18 = *((char **)t17);
    t17 = (t0 + 2384);
    xsi_vlogvar_wait_assign_value(t17, t18, 0, 0, 32, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB16;

LAB20:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB21;

LAB24:    t22 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB25;

LAB26:    t55 = *((unsigned int *)t23);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t23) = (t55 | t56);
    t33 = (t6 + 4);
    t57 = (t16 + 4);
    t58 = *((unsigned int *)t6);
    t59 = (~(t58));
    t60 = *((unsigned int *)t33);
    t61 = (~(t60));
    t62 = *((unsigned int *)t16);
    t63 = (~(t62));
    t64 = *((unsigned int *)t57);
    t65 = (~(t64));
    t66 = (t59 & t61);
    t67 = (t63 & t65);
    t68 = (~(t66));
    t69 = (~(t67));
    t70 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t70 & t68);
    t71 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t71 & t69);
    t72 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t72 & t68);
    t73 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t73 & t69);
    goto LAB28;

LAB29:    xsi_set_current_line(58, ng0);

LAB32:    xsi_set_current_line(59, ng0);
    t80 = ((char*)((ng3)));
    t81 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t81, t80, 0, 0, 1, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2704);
    t7 = (t5 + 72U);
    t13 = *((char **)t7);
    t14 = (t0 + 2704);
    t15 = (t14 + 64U);
    t17 = *((char **)t15);
    t18 = (t0 + 1504U);
    t19 = *((char **)t18);
    memset(t16, 0, 8);
    t18 = (t16 + 4);
    t20 = (t19 + 4);
    t8 = *((unsigned int *)t19);
    t9 = (t8 >> 2);
    *((unsigned int *)t16) = t9;
    t10 = *((unsigned int *)t20);
    t11 = (t10 >> 2);
    *((unsigned int *)t18) = t11;
    t12 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t12 & 1073741823U);
    t27 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t27 & 1073741823U);
    xsi_vlog_generic_get_array_select_value(t6, 32, t4, t13, t17, 2, 1, t16, 30, 2);
    t21 = (t0 + 2064);
    xsi_vlogvar_wait_assign_value(t21, t6, 0, 0, 32, 0LL);
    goto LAB31;

LAB34:    *((unsigned int *)t6) = 1;
    goto LAB36;

LAB35:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB36;

LAB39:    t22 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB40;

LAB41:    t55 = *((unsigned int *)t23);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t23) = (t55 | t56);
    t33 = (t6 + 4);
    t57 = (t16 + 4);
    t58 = *((unsigned int *)t6);
    t59 = (~(t58));
    t60 = *((unsigned int *)t33);
    t61 = (~(t60));
    t62 = *((unsigned int *)t16);
    t63 = (~(t62));
    t64 = *((unsigned int *)t57);
    t65 = (~(t64));
    t66 = (t59 & t61);
    t67 = (t63 & t65);
    t68 = (~(t66));
    t69 = (~(t67));
    t70 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t70 & t68);
    t71 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t71 & t69);
    t72 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t72 & t68);
    t73 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t73 & t69);
    goto LAB43;

LAB44:    xsi_set_current_line(63, ng0);
    t80 = (t0 + 2544);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    t83 = ((char*)((ng5)));
    memset(t84, 0, 8);
    xsi_vlog_unsigned_add(t84, 32, t82, 2, t83, 32);
    t85 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t85, t84, 0, 0, 2, 0LL);
    goto LAB46;

}

static void Always_66_2(char *t0)
{
    char t13[8];
    char t14[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    int t33;
    char *t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    int t40;
    int t41;

LAB0:    t1 = (t0 + 4120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 4456);
    *((int *)t2) = 1;
    t3 = (t0 + 4152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(67, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(68, ng0);
    t11 = (t0 + 1664U);
    t12 = *((char **)t11);
    t11 = (t0 + 2704);
    t15 = (t0 + 2704);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 2704);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t22 = (t0 + 1504U);
    t23 = *((char **)t22);
    memset(t21, 0, 8);
    t22 = (t21 + 4);
    t24 = (t23 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (t25 >> 2);
    *((unsigned int *)t21) = t26;
    t27 = *((unsigned int *)t24);
    t28 = (t27 >> 2);
    *((unsigned int *)t22) = t28;
    t29 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t29 & 1073741823U);
    t30 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t30 & 1073741823U);
    xsi_vlog_generic_convert_array_indices(t13, t14, t17, t20, 2, 1, t21, 30, 2);
    t31 = (t13 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t14 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB8;

LAB9:    goto LAB7;

LAB8:    t38 = *((unsigned int *)t13);
    t39 = *((unsigned int *)t14);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t14), t41, 0LL);
    goto LAB9;

}


extern void work_m_00000000001429687628_2461264495_init()
{
	static char *pe[] = {(void *)Initial_39_0,(void *)Always_43_1,(void *)Always_66_2};
	xsi_register_didat("work_m_00000000001429687628_2461264495", "isim/DataMemory_isim_beh.exe.sim/work/m_00000000001429687628_2461264495.didat");
	xsi_register_executes(pe);
}
