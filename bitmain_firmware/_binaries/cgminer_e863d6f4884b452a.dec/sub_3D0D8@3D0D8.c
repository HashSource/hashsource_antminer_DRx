void __fastcall sub_3D0D8(int a1)
{
  char *v2; // r4
  _BYTE *v3; // r8
  char v4; // r5
  int v5; // r2
  int v6; // r3
  char v7; // [sp+Ch] [bp-810h]
  int i; // [sp+14h] [bp-808h]
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    snprintf(s, 0x800u, "%d %s", a1, "calibration_sensor_offset_chain");
    sub_343C4(5, s, 0);
  }
  if ( *((_BYTE *)&unk_73ED8 + a1 + 24) == 1 )
  {
    v2 = (char *)&unk_73ED8 + 32 * (__int16)a1;
    v3 = (char *)&unk_72AE0 + 4 * (__int16)a1;
    for ( i = 0; i != 4; ++i )
    {
      v7 = 11;
      do
      {
        sub_3CE70(a1, (unsigned __int8)i, 1, 26738944);
        sub_3CE70(a1, (unsigned __int8)i, 0, 26738688);
        if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
        {
          snprintf(s, 0x800u, "chain:%d local:%d remote:%d", a1, *((__int16 *)v2 + 152), *((__int16 *)v2 + 153));
          sub_343C4(5, s, 0);
        }
        *v3 = *v3 + v2[304] - v2[306];
        sub_3CEE8(a1, (unsigned __int8)i);
        v4 = v7 - 1;
        v5 = *((__int16 *)v2 + 153);
        v6 = *((__int16 *)v2 + 152) - v5;
        if ( v6 < 0 )
          v6 = v5 - *((__int16 *)v2 + 152);
        if ( v6 <= 2 )
          break;
        --v7;
      }
      while ( v4 );
      ++v3;
      v2 += 8;
    }
  }
}
