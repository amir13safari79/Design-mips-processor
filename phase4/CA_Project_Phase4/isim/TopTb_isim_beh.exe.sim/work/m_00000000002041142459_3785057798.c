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
static const char *ng0 = "D:/electrical engineering/computer Architecture/project/phase4/CA_Project_Phase4/Processor.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {6, 0};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {1U, 0U};
static int ng6[] = {7, 0};
static int ng7[] = {3, 0};
static int ng8[] = {4, 0};
static int ng9[] = {5, 0};



static void Always_37_0(char *t0)
{
    char t4[8];
    char t5[8];
    char t26[8];
    char t38[8];
    char t47[8];
    char t62[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    int t69;
    int t70;
    int t71;
    int t72;
    int t73;
    int t74;
    int t75;
    int t76;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3576);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t6 = (t0 + 1208U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t6) != 0)
        goto LAB8;

LAB9:    t14 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB10;

LAB11:    t19 = *((unsigned int *)t5);
    t20 = (~(t19));
    t21 = *((unsigned int *)t14);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t14) > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t5) > 0)
        goto LAB16;

LAB17:    memcpy(t4, t47, 8);

LAB18:    t61 = (t0 + 1928);
    t63 = (t0 + 1928);
    t64 = (t63 + 72U);
    t65 = *((char **)t64);
    t66 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t62, t65, 2, t66, 32, 1);
    t67 = (t62 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (!(t68));
    if (t69 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t2) != 0)
        goto LAB26;

LAB27:    t7 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t7);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB28;

LAB29:    t19 = *((unsigned int *)t5);
    t20 = (~(t19));
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t7) > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t5) > 0)
        goto LAB34;

LAB35:    memcpy(t4, t26, 8);

LAB36:    t27 = (t0 + 1928);
    t28 = (t0 + 1928);
    t35 = (t28 + 72U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng3)));
    t39 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t38, t47, t62, ((int*)(t36)), 2, t37, 32, 1, t39, 32, 1);
    t40 = (t38 + 4);
    t41 = *((unsigned int *)t40);
    t69 = (!(t41));
    t51 = (t47 + 4);
    t42 = *((unsigned int *)t51);
    t70 = (!(t42));
    t71 = (t69 && t70);
    t52 = (t62 + 4);
    t43 = *((unsigned int *)t52);
    t72 = (!(t43));
    t73 = (t71 && t72);
    if (t73 == 1)
        goto LAB37;

LAB38:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t2) != 0)
        goto LAB41;

LAB42:    t7 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t7);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB43;

LAB44:    t19 = *((unsigned int *)t5);
    t20 = (~(t19));
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t7) > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t5) > 0)
        goto LAB49;

LAB50:    memcpy(t4, t26, 8);

LAB51:    t27 = (t0 + 1928);
    t28 = (t0 + 1928);
    t35 = (t28 + 72U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t38, t36, 2, t37, 32, 1);
    t39 = (t38 + 4);
    t41 = *((unsigned int *)t39);
    t69 = (!(t41));
    if (t69 == 1)
        goto LAB52;

LAB53:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t2) != 0)
        goto LAB56;

LAB57:    t7 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t7);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB58;

LAB59:    t19 = *((unsigned int *)t5);
    t20 = (~(t19));
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t7) > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t5) > 0)
        goto LAB64;

LAB65:    memcpy(t4, t38, 8);

LAB66:    t40 = (t0 + 1768);
    t51 = (t0 + 1768);
    t52 = (t51 + 72U);
    t53 = *((char **)t52);
    t61 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t47, t53, 2, t61, 32, 1);
    t63 = (t47 + 4);
    t55 = *((unsigned int *)t63);
    t69 = (!(t55));
    if (t69 == 1)
        goto LAB70;

LAB71:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t2) != 0)
        goto LAB74;

LAB75:    t7 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t7);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB76;

LAB77:    t19 = *((unsigned int *)t5);
    t20 = (~(t19));
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t7) > 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t5) > 0)
        goto LAB82;

LAB83:    memcpy(t4, t26, 8);

LAB84:    t27 = (t0 + 1768);
    t28 = (t0 + 1768);
    t35 = (t28 + 72U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng7)));
    t39 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t38, t47, t62, ((int*)(t36)), 2, t37, 32, 1, t39, 32, 1);
    t40 = (t38 + 4);
    t41 = *((unsigned int *)t40);
    t69 = (!(t41));
    t51 = (t47 + 4);
    t42 = *((unsigned int *)t51);
    t70 = (!(t42));
    t71 = (t69 && t70);
    t52 = (t62 + 4);
    t43 = *((unsigned int *)t52);
    t72 = (!(t43));
    t73 = (t71 && t72);
    if (t73 == 1)
        goto LAB85;

LAB86:    t53 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t53, t4, 3, 0, 1, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    t6 = (t0 + 1768);
    t7 = (t6 + 72U);
    t13 = *((char **)t7);
    t14 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t4, t13, 2, t14, 32, 1);
    t18 = (t4 + 4);
    t8 = *((unsigned int *)t18);
    t69 = (!(t8));
    if (t69 == 1)
        goto LAB87;

LAB88:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB89;

LAB90:    if (*((unsigned int *)t2) != 0)
        goto LAB91;

LAB92:    t7 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t7);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB93;

LAB94:    t19 = *((unsigned int *)t5);
    t20 = (~(t19));
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t7) > 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t5) > 0)
        goto LAB99;

LAB100:    memcpy(t4, t23, 8);

LAB101:    t24 = (t0 + 1768);
    t25 = (t0 + 1768);
    t27 = (t25 + 72U);
    t28 = *((char **)t27);
    t35 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t26, t28, 2, t35, 32, 1);
    t36 = (t26 + 4);
    t29 = *((unsigned int *)t36);
    t69 = (!(t29));
    if (t69 == 1)
        goto LAB102;

LAB103:    goto LAB2;

LAB6:    *((unsigned int *)t5) = 1;
    goto LAB9;

LAB8:    t13 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB9;

LAB10:    t18 = ((char*)((ng1)));
    goto LAB11;

LAB12:    t23 = (t0 + 1928);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t26, 0, 8);
    t27 = (t26 + 4);
    t28 = (t25 + 4);
    t29 = *((unsigned int *)t25);
    t30 = (t29 >> 7);
    t31 = (t30 & 1);
    *((unsigned int *)t26) = t31;
    t32 = *((unsigned int *)t28);
    t33 = (t32 >> 7);
    t34 = (t33 & 1);
    *((unsigned int *)t27) = t34;
    t35 = (t0 + 1928);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memset(t38, 0, 8);
    t39 = (t38 + 4);
    t40 = (t37 + 4);
    t41 = *((unsigned int *)t37);
    t42 = (t41 >> 6);
    t43 = (t42 & 1);
    *((unsigned int *)t38) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 >> 6);
    t46 = (t45 & 1);
    *((unsigned int *)t39) = t46;
    t48 = *((unsigned int *)t26);
    t49 = *((unsigned int *)t38);
    t50 = (t48 ^ t49);
    *((unsigned int *)t47) = t50;
    t51 = (t26 + 4);
    t52 = (t38 + 4);
    t53 = (t47 + 4);
    t54 = *((unsigned int *)t51);
    t55 = *((unsigned int *)t52);
    t56 = (t54 | t55);
    *((unsigned int *)t53) = t56;
    t57 = *((unsigned int *)t53);
    t58 = (t57 != 0);
    if (t58 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB13;

LAB14:    xsi_vlog_unsigned_bit_combine(t4, 1, t18, 1, t47, 1);
    goto LAB18;

LAB16:    memcpy(t4, t18, 8);
    goto LAB18;

LAB19:    t59 = *((unsigned int *)t47);
    t60 = *((unsigned int *)t53);
    *((unsigned int *)t47) = (t59 | t60);
    goto LAB21;

LAB22:    xsi_vlogvar_wait_assign_value(t61, t4, 0, *((unsigned int *)t62), 1, 0LL);
    goto LAB23;

LAB24:    *((unsigned int *)t5) = 1;
    goto LAB27;

LAB26:    t6 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB27;

LAB28:    t13 = ((char*)((ng1)));
    goto LAB29;

LAB30:    t14 = (t0 + 1928);
    t18 = (t14 + 56U);
    t23 = *((char **)t18);
    memset(t26, 0, 8);
    t24 = (t26 + 4);
    t25 = (t23 + 4);
    t29 = *((unsigned int *)t23);
    t30 = (t29 >> 0);
    *((unsigned int *)t26) = t30;
    t31 = *((unsigned int *)t25);
    t32 = (t31 >> 0);
    *((unsigned int *)t24) = t32;
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 & 63U);
    t34 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t34 & 63U);
    goto LAB31;

LAB32:    xsi_vlog_unsigned_bit_combine(t4, 6, t13, 6, t26, 6);
    goto LAB36;

LAB34:    memcpy(t4, t13, 8);
    goto LAB36;

LAB37:    t44 = *((unsigned int *)t62);
    t74 = (t44 + 0);
    t45 = *((unsigned int *)t38);
    t46 = *((unsigned int *)t47);
    t75 = (t45 - t46);
    t76 = (t75 + 1);
    xsi_vlogvar_wait_assign_value(t27, t4, t74, *((unsigned int *)t47), t76, 0LL);
    goto LAB38;

LAB39:    *((unsigned int *)t5) = 1;
    goto LAB42;

LAB41:    t6 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB42;

LAB43:    t13 = ((char*)((ng5)));
    goto LAB44;

LAB45:    t14 = (t0 + 1928);
    t18 = (t14 + 56U);
    t23 = *((char **)t18);
    memset(t26, 0, 8);
    t24 = (t26 + 4);
    t25 = (t23 + 4);
    t29 = *((unsigned int *)t23);
    t30 = (t29 >> 6);
    t31 = (t30 & 1);
    *((unsigned int *)t26) = t31;
    t32 = *((unsigned int *)t25);
    t33 = (t32 >> 6);
    t34 = (t33 & 1);
    *((unsigned int *)t24) = t34;
    goto LAB46;

LAB47:    xsi_vlog_unsigned_bit_combine(t4, 1, t13, 1, t26, 1);
    goto LAB51;

LAB49:    memcpy(t4, t13, 8);
    goto LAB51;

LAB52:    xsi_vlogvar_wait_assign_value(t27, t4, 0, *((unsigned int *)t38), 1, 0LL);
    goto LAB53;

LAB54:    *((unsigned int *)t5) = 1;
    goto LAB57;

LAB56:    t6 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB57;

LAB58:    t13 = ((char*)((ng1)));
    goto LAB59;

LAB60:    t14 = (t0 + 1768);
    t18 = (t14 + 56U);
    t23 = *((char **)t18);
    memset(t26, 0, 8);
    t24 = (t26 + 4);
    t25 = (t23 + 4);
    t29 = *((unsigned int *)t23);
    t30 = (t29 >> 5);
    t31 = (t30 & 1);
    *((unsigned int *)t26) = t31;
    t32 = *((unsigned int *)t25);
    t33 = (t32 >> 5);
    t34 = (t33 & 1);
    *((unsigned int *)t24) = t34;
    t27 = (t0 + 2088);
    t28 = (t27 + 56U);
    t35 = *((char **)t28);
    t41 = *((unsigned int *)t26);
    t42 = *((unsigned int *)t35);
    t43 = (t41 ^ t42);
    *((unsigned int *)t38) = t43;
    t36 = (t26 + 4);
    t37 = (t35 + 4);
    t39 = (t38 + 4);
    t44 = *((unsigned int *)t36);
    t45 = *((unsigned int *)t37);
    t46 = (t44 | t45);
    *((unsigned int *)t39) = t46;
    t48 = *((unsigned int *)t39);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB67;

LAB68:
LAB69:    goto LAB61;

LAB62:    xsi_vlog_unsigned_bit_combine(t4, 1, t13, 1, t38, 1);
    goto LAB66;

LAB64:    memcpy(t4, t13, 8);
    goto LAB66;

LAB67:    t50 = *((unsigned int *)t38);
    t54 = *((unsigned int *)t39);
    *((unsigned int *)t38) = (t50 | t54);
    goto LAB69;

LAB70:    xsi_vlogvar_wait_assign_value(t40, t4, 0, *((unsigned int *)t47), 1, 0LL);
    goto LAB71;

LAB72:    *((unsigned int *)t5) = 1;
    goto LAB75;

LAB74:    t6 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB75;

LAB76:    t13 = ((char*)((ng1)));
    goto LAB77;

LAB78:    t14 = (t0 + 1768);
    t18 = (t14 + 56U);
    t23 = *((char **)t18);
    memset(t26, 0, 8);
    t24 = (t26 + 4);
    t25 = (t23 + 4);
    t29 = *((unsigned int *)t23);
    t30 = (t29 >> 0);
    *((unsigned int *)t26) = t30;
    t31 = *((unsigned int *)t25);
    t32 = (t31 >> 0);
    *((unsigned int *)t24) = t32;
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 & 15U);
    t34 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t34 & 15U);
    goto LAB79;

LAB80:    xsi_vlog_unsigned_bit_combine(t4, 4, t13, 4, t26, 4);
    goto LAB84;

LAB82:    memcpy(t4, t13, 8);
    goto LAB84;

LAB85:    t44 = *((unsigned int *)t62);
    t74 = (t44 + 0);
    t45 = *((unsigned int *)t38);
    t46 = *((unsigned int *)t47);
    t75 = (t45 - t46);
    t76 = (t75 + 1);
    xsi_vlogvar_wait_assign_value(t27, t4, t74, *((unsigned int *)t47), t76, 0LL);
    goto LAB86;

LAB87:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB88;

LAB89:    *((unsigned int *)t5) = 1;
    goto LAB92;

LAB91:    t6 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB92;

LAB93:    t13 = ((char*)((ng5)));
    goto LAB94;

LAB95:    t14 = (t0 + 2088);
    t18 = (t14 + 56U);
    t23 = *((char **)t18);
    goto LAB96;

LAB97:    xsi_vlog_unsigned_bit_combine(t4, 1, t13, 1, t23, 1);
    goto LAB101;

LAB99:    memcpy(t4, t13, 8);
    goto LAB101;

LAB102:    xsi_vlogvar_wait_assign_value(t24, t4, 0, *((unsigned int *)t26), 1, 0LL);
    goto LAB103;

}

static void Cont_51_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 5);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 5);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 3672);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 3592);
    *((int *)t27) = 1;

LAB1:    return;
}


extern void work_m_00000000002041142459_3785057798_init()
{
	static char *pe[] = {(void *)Always_37_0,(void *)Cont_51_1};
	xsi_register_didat("work_m_00000000002041142459_3785057798", "isim/TopTb_isim_beh.exe.sim/work/m_00000000002041142459_3785057798.didat");
	xsi_register_executes(pe);
}
