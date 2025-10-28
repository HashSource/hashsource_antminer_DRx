void __fastcall sub_4C48C(int a1)
{
  __int16 *v2; // r4
  int i; // r7
  int v4; // r8
  int v5; // r2
  int v6; // r3
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    snprintf(s, 0x800u, "%d %s", a1, "calibration_sensor_offset_chain");
    sub_3F178(5, s, 0);
  }
  if ( *((_BYTE *)&unk_B3AFC + a1 + 24) == 1 )
  {
    v2 = (__int16 *)((char *)&unk_B3AFC + 32 * a1 + 304);
    for ( i = 0; i != 4; ++i )
    {
      LOBYTE(v4) = 11;
      do
      {
        sub_4BAB0(a1, (unsigned __int8)i, 1, 26738944);
        sub_4BAB0(a1, (unsigned __int8)i, 0, 26738688);
        if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
        {
          snprintf(s, 0x800u, "chain:%d local:%d remote:%d", a1, *v2, v2[1]);
          sub_3F178(5, s, 0);
        }
        byte_7FCC4[4 * a1 + i] = *(_BYTE *)v2 + byte_7FCC4[4 * a1 + i] - *((_BYTE *)v2 + 2);
        sub_4C1B4(a1, (unsigned __int8)i);
        v5 = *v2;
        v6 = v5 - v2[1];
        if ( v6 < 0 )
          v6 = v2[1] - v5;
        if ( v6 <= 2 )
          break;
        v4 = (unsigned __int8)(v4 - 1);
      }
      while ( v4 );
      v2 += 4;
    }
  }
}
