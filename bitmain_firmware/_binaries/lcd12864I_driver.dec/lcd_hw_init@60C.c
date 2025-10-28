int __fastcall lcd_hw_init(int a1)
{
  int v1; // r4
  int v2; // r4
  int v3; // r4
  int v4; // r4
  int v5; // r4
  int v6; // r4
  int v7; // r4
  int v8; // r4
  int v9; // r4
  int result; // r0

  enable_gpios(a1);
  set_cs_direction(1);
  set_cs(0);
  set_sclk_direction(1);
  set_sclk(0);
  set_sid_direction(1);
  set_sid(0);
  set_reset_direction(1);
  set_reset(0);
  v1 = 101;
  while ( --v1 )
    arm_delay_ops[1](107374000);
  set_reset(1);
  v2 = 101;
  while ( --v2 )
    arm_delay_ops[1](107374000);
  SendCommad(48);
  v3 = 11;
  while ( --v3 )
    arm_delay_ops[1](107374000);
  v4 = 11;
  printk(&unk_B89);
  SendCommad(6);
  while ( --v4 )
    arm_delay_ops[1](107374000);
  v5 = 11;
  printk(&unk_B9E);
  SendCommad(15);
  while ( --v5 )
    arm_delay_ops[1](107374000);
  v6 = 11;
  printk(&unk_BB2);
  SendCommad(1);
  while ( --v6 )
    arm_delay_ops[1](107374000);
  v7 = 11;
  printk(&unk_BC5);
  SendCommad(2);
  while ( --v7 )
    arm_delay_ops[1](107374000);
  v8 = 11;
  printk(&unk_BD7);
  SendCommad(128);
  while ( --v8 )
    arm_delay_ops[1](107374000);
  v9 = 101;
  for ( result = printk(&unk_BEC); --v9; result = ((int (__fastcall *)(int))arm_delay_ops[1])(107374000) )
    ;
  return result;
}
