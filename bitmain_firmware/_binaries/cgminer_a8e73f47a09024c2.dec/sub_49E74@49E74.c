int sub_49E74()
{
  int result; // r0
  char v1[2048]; // [sp+0h] [bp-82Ch] BYREF
  int v2; // [sp+800h] [bp-2Ch] BYREF
  int v3; // [sp+804h] [bp-28h]
  int v4; // [sp+808h] [bp-24h]
  int v5; // [sp+80Ch] [bp-20h]
  int v6; // [sp+810h] [bp-1Ch]
  int v7; // [sp+814h] [bp-18h]
  int v8; // [sp+818h] [bp-14h]
  int v9; // [sp+81Ch] [bp-10h]
  int v10; // [sp+820h] [bp-Ch] BYREF
  __int16 v11; // [sp+824h] [bp-8h]

  v10 = 50637397;
  v11 = 7;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  result = sub_49A5C((unsigned __int8 *)&v10, 6, (unsigned __int8 *)&v2, 8u);
  if ( result )
  {
    if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
    {
      snprintf(v1, 0x800u, "power get da value is %02x\n", (unsigned __int8)v3);
      sub_3F178(5, v1, 0);
    }
    return (unsigned __int8)v3;
  }
  return result;
}
