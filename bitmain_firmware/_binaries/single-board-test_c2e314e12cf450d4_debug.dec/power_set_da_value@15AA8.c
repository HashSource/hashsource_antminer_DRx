bool __fastcall power_set_da_value(unsigned __int8 a1)
{
  unsigned __int8 v2[32]; // [sp+24h] [bp+Ch] BYREF
  int v3; // [sp+44h] [bp+2Ch] BYREF
  int v4; // [sp+48h] [bp+30h]
  unsigned __int16 i; // [sp+4Ch] [bp+34h]
  __int16 v6; // [sp+4Eh] [bp+36h]

  v3 = -2096715179;
  memset(v2, 0, sizeof(v2));
  v6 = 0;
  v4 = a1;
  for ( i = 2; i <= 5u; ++i )
    v6 += *((unsigned __int8 *)&v3 + i);
  HIWORD(v4) = v6;
  printf(
    "%s, %02x, %02x, %02x, %02x, %02x, %02x, %02x, %02x\n",
    "power_set_da_value",
    (unsigned __int8)v3,
    BYTE1(v3),
    BYTE2(v3),
    HIBYTE(v3),
    (unsigned __int8)v4,
    BYTE1(v4),
    (unsigned __int8)v6,
    HIBYTE(v6));
  return power_send_cmd((unsigned __int8 *)&v3, 8u, v2, 8u);
}
