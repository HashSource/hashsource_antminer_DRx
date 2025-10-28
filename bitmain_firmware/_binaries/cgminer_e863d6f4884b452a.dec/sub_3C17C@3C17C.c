int __fastcall sub_3C17C(int a1, int a2)
{
  double v2; // d0
  double v3; // d1
  unsigned __int8 v6; // r3
  double v7; // d7
  bool v9; // nf
  double v10; // d10
  int v11; // r4
  char v12; // r2
  char v13; // r3
  unsigned __int8 v14; // [sp+Fh] [bp-805h] BYREF
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  sub_3BF54(&v14);
  if ( v2 != 0.0 )
  {
    v6 = v14;
    if ( v14 )
    {
      v10 = fabs(v3 - v2);
      if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
      {
        snprintf(s, 0x800u, "last_pic_voltage = %d\n", v14);
        sub_343C4(5, s, 0);
        if ( v10 < 0.02 )
        {
          if ( byte_73320 || byte_6FA70 )
            goto LABEL_18;
          goto LABEL_17;
        }
        v6 = v14;
      }
      else if ( v10 < 0.02 )
      {
LABEL_17:
        if ( dword_6D35C <= 4 )
        {
LABEL_19:
          v11 = v14;
          *(_BYTE *)(a1 + 66) = 1;
          return v11;
        }
LABEL_18:
        strcpy(s, "It's very close to target voltage, stop tunning\n");
        sub_343C4(5, s, 0);
        goto LABEL_19;
      }
      if ( a2 )
      {
        v12 = 1;
      }
      else if ( v10 <= 0.25 )
      {
        if ( v10 <= 0.13 )
        {
          if ( v10 <= 0.07 )
          {
            if ( v10 <= 0.03 )
              v12 = 1;
            else
              v12 = 4;
          }
          else
          {
            v12 = 8;
          }
        }
        else
        {
          v12 = 16;
        }
      }
      else
      {
        v12 = 32;
      }
      if ( v3 <= v2 )
        v13 = v6 + v12;
      else
        v13 = v6 - v12;
      v14 = v13;
      sub_3BF78(v13);
      return v14;
    }
  }
  v7 = 1582.35294 - v3 * 166.666667;
  if ( v7 <= 255.0 )
  {
    v9 = v7 < 0.0;
    if ( v7 < 0.0 )
      a2 = 0;
    else
      HIDWORD(v7) = (unsigned int)v7;
    if ( !v9 )
      a2 = BYTE4(v7);
  }
  else
  {
    a2 = 255;
  }
  sub_3BF78(a2);
  return a2;
}
