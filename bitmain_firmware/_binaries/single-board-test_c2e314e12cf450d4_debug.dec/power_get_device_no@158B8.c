int power_get_device_no()
{
  int result; // r0
  int v1; // [sp+0h] [bp+0h] BYREF
  int v2; // [sp+4h] [bp+4h]
  int v3; // [sp+8h] [bp+8h]
  int v4; // [sp+Ch] [bp+Ch]
  int v5; // [sp+10h] [bp+10h]
  int v6; // [sp+14h] [bp+14h]
  int v7; // [sp+18h] [bp+18h]
  int v8; // [sp+1Ch] [bp+1Ch]
  int v9; // [sp+20h] [bp+20h] BYREF
  __int16 v10; // [sp+24h] [bp+24h]

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
  result = power_send_cmd((unsigned __int8 *)&v9, 6u, (unsigned __int8 *)&v1, 8u);
  if ( result )
    return printf("power device no is %02x %02x\n", BYTE1(v2), (unsigned __int8)v2);
  return result;
}
