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
    work_m_00000000003154733118_0749813570_init();
    work_m_00000000001980008863_2415948724_init();
    work_m_00000000001980008863_2882093864_init();
    work_m_00000000002449144731_0833183191_init();
    work_m_00000000004055955401_3631796253_init();
    work_m_00000000002694797602_3674772129_init();
    work_m_00000000002399717505_2988851832_init();
    work_m_00000000004067721612_0886308060_init();
    work_m_00000000003631203985_3027548060_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003631203985_3027548060");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}