void sub_4A018()
{
  char v0[2048]; // [sp+0h] [bp-82Ch] BYREF
  int v1; // [sp+800h] [bp-2Ch] BYREF
  int v2; // [sp+804h] [bp-28h]
  int v3; // [sp+808h] [bp-24h]
  int v4; // [sp+80Ch] [bp-20h]
  int v5; // [sp+810h] [bp-1Ch]
  int v6; // [sp+814h] [bp-18h]
  int v7; // [sp+818h] [bp-14h]
  int v8; // [sp+81Ch] [bp-10h]
  int v9; // [sp+820h] [bp-Ch] BYREF
  __int16 v10; // [sp+824h] [bp-8h]

  v9 = 67414613;
  v10 = 8;
  v1 = 0;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( sub_49A5C((unsigned __int8 *)&v9, 6, (unsigned __int8 *)&v1, 8u) && (byte_7FE78 || byte_7CC60 || dword_7A52C > 4) )
  {
    snprintf(v0, 0x800u, "power get adc value is %02x\n", (unsigned __int8)v2);
    sub_3F178(5, v0, 0);
  }
}
