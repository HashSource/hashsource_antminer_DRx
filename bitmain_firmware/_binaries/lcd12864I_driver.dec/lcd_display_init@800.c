int lcd_display_init()
{
  int v0; // r4
  int v1; // r4
  int v2; // r4
  int v3; // r4
  int v4; // r4
  int result; // r0

  SendCommad(48);
  v0 = 11;
  while ( --v0 )
    arm_delay_ops[1](107374000);
  v1 = 11;
  printk(&unk_B89);
  SendCommad(48);
  while ( --v1 )
    arm_delay_ops[1](107374000);
  v2 = 11;
  printk(&unk_B89);
  SendCommad(12);
  while ( --v2 )
    arm_delay_ops[1](107374000);
  v3 = 11;
  printk(&unk_BB2);
  SendCommad(1);
  while ( --v3 )
    arm_delay_ops[1](107374000);
  v4 = 101;
  for ( result = printk(&unk_BC5); --v4; result = ((int (__fastcall *)(int))arm_delay_ops[1])(107374000) )
    ;
  return result;
}
