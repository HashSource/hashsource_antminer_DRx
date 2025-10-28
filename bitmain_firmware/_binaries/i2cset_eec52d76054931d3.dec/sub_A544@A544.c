int __fastcall sub_A544(int a1)
{
  int v2; // r0
  char s[8]; // [sp+4h] [bp-8h] BYREF

  if ( !fgets(s, 2, (FILE *)stdin) )
    return 0;
  if ( s[0] == 89 )
    goto LABEL_13;
  if ( (unsigned __int8)s[0] <= 0x59u )
  {
    if ( s[0] != 78 )
      goto LABEL_5;
    goto LABEL_14;
  }
  if ( s[0] == 110 )
  {
LABEL_14:
    a1 = 0;
LABEL_8:
    while ( 1 )
    {
      v2 = fgetc((FILE *)stdin);
      if ( v2 == -1 )
        break;
      s[0] = v2;
      if ( (unsigned __int8)v2 == 10 )
        return a1;
    }
    return 0;
  }
  if ( s[0] == 121 )
  {
LABEL_13:
    a1 = 1;
    goto LABEL_8;
  }
LABEL_5:
  if ( s[0] != 10 )
    goto LABEL_8;
  return a1;
}
