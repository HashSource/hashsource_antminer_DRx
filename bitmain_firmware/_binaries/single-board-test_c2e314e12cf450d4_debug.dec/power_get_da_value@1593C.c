int power_get_da_value()
{
  _BOOL4 v0; // r3
  int v2; // [sp+0h] [bp+0h] BYREF
  int v3; // [sp+4h] [bp+4h]
  int v4; // [sp+8h] [bp+8h]
  int v5; // [sp+Ch] [bp+Ch]
  int v6; // [sp+10h] [bp+10h]
  int v7; // [sp+14h] [bp+14h]
  int v8; // [sp+18h] [bp+18h]
  int v9; // [sp+1Ch] [bp+1Ch]
  int v10; // [sp+20h] [bp+20h] BYREF
  __int16 v11; // [sp+24h] [bp+24h]

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
  v0 = power_send_cmd((unsigned __int8 *)&v10, 6u, (unsigned __int8 *)&v2, 8u);
  if ( v0 )
  {
    printf("power get da value is %02x\n", (unsigned __int8)v3);
    return (unsigned __int8)v3;
  }
  return v0;
}
