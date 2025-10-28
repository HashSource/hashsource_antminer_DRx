int __fastcall sub_4A984(int a1, int a2)
{
  double v2; // d0
  double v3; // d1
  int v6; // r4
  double v7; // d16
  char v8; // r3
  unsigned __int8 v9; // r3
  char s[2044]; // [sp+4h] [bp-808h] BYREF
  _BYTE v12[5]; // [sp+807h] [bp-5h] BYREF

  sub_4A710(v12);
  if ( v2 != 0.0 && v12[0] )
  {
    if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
    {
      snprintf(s, 0x800u, "last_pic_voltage = %d\n", v12[0]);
      sub_3F178(5, s, 0);
    }
    v7 = fabs(v3 - v2);
    if ( v7 >= 0.02 )
    {
      if ( a2 )
      {
        v8 = 1;
      }
      else if ( v7 <= 0.25 )
      {
        if ( v7 <= 0.13 )
        {
          if ( v7 <= 0.07 )
          {
            if ( v7 <= 0.03 )
              v8 = 1;
            else
              v8 = 4;
          }
          else
          {
            v8 = 8;
          }
        }
        else
        {
          v8 = 16;
        }
      }
      else
      {
        v8 = 32;
      }
      if ( v3 <= v2 )
        v9 = v8 + v12[0];
      else
        v9 = v12[0] - v8;
      v12[0] = v9;
      sub_4A73C(v9);
      return v12[0];
    }
    else
    {
      if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
      {
        strcpy(s, "It's very close to target voltage, stop tunning\n");
        sub_3F178(5, s, 0);
      }
      *(_BYTE *)(a1 + 66) = 1;
      return v12[0];
    }
  }
  else
  {
    v6 = sub_4A798();
    sub_4A73C(v6);
  }
  return v6;
}
