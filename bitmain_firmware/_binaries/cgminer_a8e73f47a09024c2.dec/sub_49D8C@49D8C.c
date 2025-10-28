void sub_49D8C()
{
  char s[2040]; // [sp+8h] [bp-82Ch] BYREF
  int v1; // [sp+808h] [bp-2Ch] BYREF
  int v2; // [sp+80Ch] [bp-28h]
  int v3; // [sp+810h] [bp-24h]
  int v4; // [sp+814h] [bp-20h]
  int v5; // [sp+818h] [bp-1Ch]
  int v6; // [sp+81Ch] [bp-18h]
  int v7; // [sp+820h] [bp-14h]
  int v8; // [sp+824h] [bp-10h]
  int v9; // [sp+828h] [bp-Ch] BYREF
  __int16 v10; // [sp+82Ch] [bp-8h]

  v9 = 33860181;
  v10 = 6;
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
    snprintf(s, 0x800u, "power device no is %02x %02x\n", BYTE1(v2), (unsigned __int8)v2);
    sub_3F178(5, s, 0);
  }
}
