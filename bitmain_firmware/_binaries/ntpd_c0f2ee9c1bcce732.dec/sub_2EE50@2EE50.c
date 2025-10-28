void __fastcall sub_2EE50(int a1)
{
  int v2; // r3
  int v3; // r5
  int v4; // r4
  int v5; // t1

  if ( dword_800B8 <= 0 )
  {
LABEL_7:
    sub_4FE78(3, "Datum_PTS: Could not poll unit %d", a1);
    return;
  }
  v2 = dword_800B4;
  v3 = *(_DWORD *)dword_800B4;
  if ( *(_DWORD *)(*(_DWORD *)dword_800B4 + 36) != a1 )
  {
    v4 = 0;
    while ( ++v4 != dword_800B8 )
    {
      v5 = *(_DWORD *)(v2 + 4);
      v2 += 4;
      v3 = v5;
      if ( *(_DWORD *)(v5 + 36) == a1 )
        goto LABEL_8;
    }
    goto LABEL_7;
  }
  v4 = 0;
LABEL_8:
  if ( write(*(_DWORD *)(v3 + 32), &dword_800AC, 6u) != 6 )
    perror("TIME_REQUEST");
  *(_BYTE *)(v3 + 101) = 0;
  if ( v4 == -1 )
    goto LABEL_7;
}
