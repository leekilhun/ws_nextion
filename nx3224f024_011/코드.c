buff_size.val=usize
if(buff_size.val>1)
{
  if(u[0]==1&&u[0]==nDatCnt.val&&buff_size.val==33)
  {
    ucopy cc_mot1_dat_pos_0,1,4,0
    ucopy cc_mot1_dat_vel_0,5,4,0
    ucopy cc_mot1_dat_pos_1,9,4,0
    ucopy cc_mot1_dat_vel_1,13,4,0
    ucopy cc_mot1_dat_pos_2,17,4,0
    ucopy cc_mot1_dat_vel_2,21,4,0
    ucopy cc_mot1_dat_pos_3,25,4,0
    ucopy cc_mot1_dat_vel_3,29,4,0
    code_c
    buff_size.val=usize
    page_main.isConn.val+=1
    while(buff_size.val>0)
    {
      buff_size.val=usize
    }
    printh 66 03 ff ff ff //ok resp
    nDatCnt.val=9
  }
  if(u[0]==9&&u[0]==nDatCnt.val&&buff_size.val==33)
  {
    ucopy cc_mot1_dat_pos_4,1,4,0
    ucopy cc_mot1_dat_vel_4,5,4,0
    ucopy cc_mot1_dat_pos_5,9,4,0
    ucopy cc_mot1_dat_vel_5,13,4,0
    ucopy cc_mot1_dat_pos_6,17,4,0
    ucopy cc_mot1_dat_vel_6,21,4,0
    ucopy cc_mot1_dat_pos_7,25,4,0
    ucopy cc_mot1_dat_vel_7,29,4,0
    code_c
    buff_size.val=usize
    page_main.isConn.val+=1
    while(buff_size.val>0)
    {
      buff_size.val=usize
    }
    printh 66 93 ff ff ff //ok resp
    nDatCnt.val=6
  }
  if(u[0]==6&&u[0]==nDatCnt.val&&buff_size.val==33)
  {
    ucopy cc_in_out_reg,1,4,0
    ucopy cc_fm_in_out_reg,5,4,0
    code_c
    buff_size.val=usize
    page_main.isConn.val+=1
    while(buff_size.val>0)
    {
      buff_size.val=usize
    }
    printh 66 13 ff ff ff //ok resp
    nDatCnt.val=7
  }
  if(u[0]==7&&u[0]==nDatCnt.val&&buff_size.val==33)
  {
    ucopy cc_mcu_state_reg,1,4,0
    code_c
    buff_size.val=usize
    page_main.isConn.val+=1
    while(buff_size.val>0)
    {
      buff_size.val=usize
    }
    printh 66 33 ff ff ff //ok resp
    nDatCnt.val=8
  }
  if(u[0]==8&&u[0]==nDatCnt.val&&buff_size.val==33)
  {
    ucopy cc_mot1_act_pos,1,4,0
    ucopy cc_mot1_act_vel,5,4,0
    ucopy cc_mcu_state_reg,9,4,0
    code_c
    buff_size.val=usize
    page_main.isConn.val+=1
    while(buff_size.val>0)
    {
      buff_size.val=usize
    }
    printh 66 43 ff ff ff //ok resp
    nDatCnt.val=1
  }
  if(buff_size.val>33)
  {
    code_c
    buff_size.val=usize
    while(buff_size.val>0)
    {
      buff_size.val=usize
    }
    nDatCnt.val=1
    printh 66 f3 ff ff ff //
  }
}
