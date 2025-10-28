unsigned int __fastcall sub_4EF18(unsigned int a1)
{
  int v2; // lr
  int v3; // r12
  int v4; // r1
  int v5; // r4
  unsigned __int16 v7; // [sp+4h] [bp-10h] BYREF
  unsigned __int16 v8; // [sp+6h] [bp-Eh]
  char v9; // [sp+8h] [bp-Ch]
  char v10; // [sp+9h] [bp-Bh]
  unsigned __int8 v11; // [sp+Ah] [bp-Ah]
  unsigned __int8 v12; // [sp+Bh] [bp-9h]
  unsigned __int8 v13; // [sp+Ch] [bp-8h]

  sub_4E8EC(a1, (int)&v7);
  v2 = v11;
  v3 = v13 - 86400 + (_DWORD)&loc_15180 * v8;
  v4 = 15 * v12;
  v9 = 1;
  v8 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v10 = 1;
  v5 = v3 + 3600 * v2 + 4 * v4;
  if ( sub_4ECD0(&v7) + v5 != a1 )
    off_7C9FC("calyearstart.c", 49, 3, "(ntp_u_int32_t)(caltontp(&jt) + delta) == (ntp_u_int32_t)ntp_time");
  return a1 - v5;
}
