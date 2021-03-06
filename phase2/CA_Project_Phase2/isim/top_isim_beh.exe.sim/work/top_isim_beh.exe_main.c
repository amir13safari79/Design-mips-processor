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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003923276417_1938225339_init();
    work_m_00000000003154733118_0749813570_init();
    work_m_00000000001980008863_2415948724_init();
    work_m_00000000001980008863_2882093864_init();
    work_m_00000000002449144731_0833183191_init();
    work_m_00000000000710794987_0291666555_init();
    work_m_00000000002694797602_3674772129_init();
    work_m_00000000000710794987_0619382263_init();
    work_m_00000000002399717505_2988851832_init();
    work_m_00000000002256335155_0886308060_init();
    work_m_00000000004248801457_3027548060_init();
    work_m_00000000003590828952_3877310806_init();
    work_m_00000000001776957408_1300881431_init();
    work_m_00000000003240545285_1284613198_init();
    work_m_00000000004200352745_3823007873_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000004200352745_3823007873");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
