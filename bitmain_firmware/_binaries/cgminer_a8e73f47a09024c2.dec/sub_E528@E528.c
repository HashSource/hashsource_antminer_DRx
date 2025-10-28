bool sub_E528()
{
  struct tm *v1; // r0
  int v2; // r4
  time_t v3; // [sp+4h] [bp-Ch] BYREF
  time_t v4[2]; // [sp+8h] [bp-8h] BYREF

  if ( !byte_80A1C && !byte_80798 )
    return 1;
  sub_30050(v4);
  v3 = v4[0];
  v1 = localtime(&v3);
  v2 = (int)v1;
  if ( !byte_80A1C )
    return sub_BF00((int)v1, (int)&unk_8079C);
  if ( byte_80798 )
  {
    if ( sub_BF00((int)&unk_80A20, (int)&unk_8079C) )
      return sub_BF00(v2, (int)&unk_8079C) && !sub_BF00(v2, (int)&unk_80A20);
    else
      return !sub_BF00(v2, (int)&unk_80A20) || sub_BF00(v2, (int)&unk_8079C);
  }
  else if ( sub_BF00((int)v1, (int)&unk_80A20) )
  {
    return 0;
  }
  else
  {
    byte_80A1C = 0;
    return 1;
  }
}
