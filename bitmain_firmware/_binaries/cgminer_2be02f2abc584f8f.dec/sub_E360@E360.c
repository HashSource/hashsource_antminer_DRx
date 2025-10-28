bool sub_E360()
{
  struct tm *v1; // r0
  int v2; // r4
  time_t v3; // [sp+4h] [bp-Ch] BYREF
  time_t v4[2]; // [sp+8h] [bp-8h] BYREF

  if ( !byte_7993C && !byte_796B8 )
    return 1;
  sub_2FE30(v4);
  v3 = v4[0];
  v1 = localtime(&v3);
  v2 = (int)v1;
  if ( !byte_7993C )
    return sub_BD38((int)v1, (int)&unk_796BC);
  if ( byte_796B8 )
  {
    if ( sub_BD38((int)&unk_79940, (int)&unk_796BC) )
      return sub_BD38(v2, (int)&unk_796BC) && !sub_BD38(v2, (int)&unk_79940);
    else
      return !sub_BD38(v2, (int)&unk_79940) || sub_BD38(v2, (int)&unk_796BC);
  }
  else if ( sub_BD38((int)v1, (int)&unk_79940) )
  {
    return 0;
  }
  else
  {
    byte_7993C = 0;
    return 1;
  }
}
