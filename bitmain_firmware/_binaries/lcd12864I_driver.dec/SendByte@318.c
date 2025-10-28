int __fastcall SendByte(int a1)
{
  int v2; // r4
  int v3; // r0
  int result; // r0

  v2 = 0;
  do
  {
    set_sclk(0);
    v3 = ((unsigned int)(a1 << v2++) >> 7) & 1;
    set_sid(v3);
    arm_delay_ops[1](107374);
    set_sclk(1);
    arm_delay_ops[1](107374);
    result = set_sclk(0);
  }
  while ( v2 != 8 );
  return result;
}
