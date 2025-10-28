int *sub_266E0()
{
  double v0; // d8
  int v1; // r6
  int v2; // r3
  int v3; // r2
  double v4; // d16
  char i; // r3
  unsigned int v7; // r1
  int v8; // r2
  int v9; // [sp+0h] [bp-1Ch] BYREF
  int v10; // [sp+8h] [bp-14h] BYREF
  unsigned int v11; // [sp+Ch] [bp-10h]
  int v12; // [sp+10h] [bp-Ch] BYREF
  unsigned int v13; // [sp+14h] [bp-8h]

  v0 = 0.02;
  dword_CB4E0 = *(_DWORD *)"INIT";
  v1 = 0;
  dword_CB504 = 0;
  dword_CB470 = 0;
  dword_CB500 = 0;
  dbl_CB4B8 = 0.0;
  byte_CB4B0 = 3;
  byte_CB4FC = 16;
  dbl_CB498 = 0.0;
  dbl_CB4E8 = 0.0;
  sub_4CBA8(&v12);
  while ( 1 )
  {
    sub_4CBA8(&v10);
    v2 = v11;
    if ( v13 )
    {
      v7 = HIWORD(v11) + (-v13 >> 16);
      if ( (((unsigned __int16)v11 + (unsigned __int16)-(__int16)v13) & 0x10000) != 0 )
        ++v7;
      v3 = ~v12 + v10;
      v2 = (unsigned __int16)(v11 - v13) | (v7 << 16);
      if ( (v7 & 0x10000) != 0 )
        ++v3;
      v12 = v10;
      v13 = v11;
      if ( v3 < 0 )
      {
LABEL_19:
        if ( v2 )
        {
          v2 = -v2;
          v8 = ~v3;
        }
        else
        {
          v8 = -v3;
        }
        v4 = -((double)v8 + (double)(unsigned int)v2 * 2.32830644e-10);
        goto LABEL_5;
      }
    }
    else
    {
      v3 = v10 - v12;
      v12 = v10;
      v13 = v11;
      if ( v3 < 0 )
        goto LABEL_19;
    }
    v4 = (double)v3 + (double)(unsigned int)v2 * 2.32830644e-10;
LABEL_5:
    if ( v4 >= 0.0000001 )
    {
      ++v1;
      if ( v4 < v0 )
        v0 = v4;
      if ( v1 > 4 )
        break;
    }
  }
  dbl_C9AD8 = v0;
  sub_4FE78(5, "proto: precision = %.3f usec", v0 * 1000000.0);
  for ( i = 0; v0 <= 1.0; ++i )
    v0 = v0 + v0;
  if ( v0 - 1.0 > 1.0 - v0 * 0.5 )
    --i;
  byte_CB478 = -i;
  sub_4CBA8(&v9);
  dword_CB468 = dword_CB548;
  dword_CB4D0 = 0;
  dword_CB4AC = 0;
  dword_CB4F4 = 0;
  dword_CB4C0 = 0;
  dword_CB4A0 = 0;
  dword_CB474 = 0;
  dword_CB484 = 0;
  dword_CB47C = 0;
  dword_CB4DC = 0;
  dword_CB490 = 0;
  dword_CB4C4 = 0;
  dword_CABC4 = 0;
  dword_CB4F8 = 0;
  byte_CB460[0] = 0;
  byte_CB461 = 32;
  byte_CB465 = -96;
  byte_CB462 = 64;
  byte_CB466 = -64;
  byte_CB463 = 96;
  dbl_CB488 = 0.0;
  byte_CB464 = 0x80;
  byte_CB467 = -32;
  dword_CB46C = 1;
  dword_CB588 = 1;
  dword_CB4D4 = 7;
  return &dword_CB588;
}
