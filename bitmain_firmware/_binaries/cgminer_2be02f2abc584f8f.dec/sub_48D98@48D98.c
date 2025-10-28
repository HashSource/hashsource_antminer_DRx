void __fastcall sub_48D98(int a1)
{
  _BYTE *v2; // r7
  __int16 *v3; // r4
  int v4; // r6
  int v5; // r8
  int v6; // r2
  int v7; // r3
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
  {
    snprintf(s, 0x800u, "%d %s", a1, "calibration_sensor_offset_chain");
    sub_3F1C0(5, s, 0);
  }
  if ( *((_BYTE *)&unk_93504 + a1 + 8) == 1 )
  {
    v2 = (char *)&unk_78BE8 + 3 * a1;
    v3 = (__int16 *)((char *)&unk_93504 + 64 * a1 + 288);
    v4 = 0;
    do
    {
      LOBYTE(v5) = 11;
      do
      {
        sub_48488(a1, v4, 1, 26738944);
        sub_48488(a1, v4, 0, 26738688);
        if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
        {
          snprintf(s, 0x800u, "chain:%d local:%d remote:%d", a1, *v3, v3[1]);
          sub_3F1C0(5, s, 0);
        }
        *v2 = *(_BYTE *)v3 + *v2 - *((_BYTE *)v3 + 2);
        sub_48AC4(a1, v4);
        v6 = *v3;
        v7 = v6 - v3[1];
        if ( v7 < 0 )
          v7 = v3[1] - v6;
        if ( v7 <= 2 )
          break;
        v5 = (unsigned __int8)(v5 - 1);
      }
      while ( v5 );
      v4 = (unsigned __int8)(v4 + 1);
      ++v2;
      v3 += 4;
    }
    while ( v4 != 2 );
  }
}
