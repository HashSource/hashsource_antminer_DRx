int __fastcall phy_pll_switch(int a1, int a2, int a3, int a4)
{
  char *v8; // r6
  __int16 v9; // r2
  __int16 v10; // t1
  int v12; // [sp+Ch] [bp-4h] BYREF
  char vars0; // [sp+10h] [bp+0h] BYREF

  sub_74494(a1, a3, 82, -1431655766);
  usleep(0x12Cu);
  sub_74494(a1, a3, 83, 16711935);
  if ( check_core_reg_with_expect_data(a1, a2, a3, 83, 0) )
    sub_7493C(a1, a3, 1396180);
  if ( a4 == 1 )
  {
    sub_74494(a1, a3, 86, 137955337);
    usleep(0x64u);
  }
  v8 = (char *)&v12 + 1;
  v9 = 91;
  v12 = 1583176795;
  while ( 1 )
  {
    sub_74494(a1, a3, v9, (a4 << 16) | (a4 << 24) | a4 | (a4 << 8));
    usleep(0x64u);
    if ( v8 == &vars0 )
      break;
    v10 = (unsigned __int8)*v8++;
    v9 = v10;
  }
  sub_74494(a1, a3, 83, 16711935);
  if ( check_core_reg_with_expect_data(a1, a2, a3, 83, 0) )
    sub_7493C(a1, a3, 1396200);
  sub_74494(a1, a3, 82, 0);
  sub_74494(a1, a3, 83, 16711935);
  if ( check_core_reg_with_expect_data(a1, a2, a3, 83, 0) )
    sub_7493C(a1, a3, 1396220);
  sub_74494(a1, a3, 84, -1);
  usleep(0x64u);
  return 0;
}
