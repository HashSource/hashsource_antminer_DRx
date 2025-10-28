void __fastcall sub_2E8C4(int a1)
{
  int v2; // r1
  int v3; // r3
  int v4; // r4
  int v5; // t1
  size_t v6; // r7
  void *v7; // r5
  void *v8; // r0
  int v9; // r5
  int v10; // r4
  _DWORD *v11; // r3
  int v12; // r1
  int v13; // r4
  int v14; // t1

  sub_4FE78(3, "Datum_PTS: Shutdown Datum PTS");
  if ( dword_800B8 <= 0 )
  {
LABEL_7:
    sub_4FE78(3, "Datum_PTS: Could not shut down Datum PTS unit %d", a1);
    return;
  }
  v2 = dword_800B4;
  v3 = *(_DWORD *)dword_800B4;
  if ( *(_DWORD *)(*(_DWORD *)dword_800B4 + 36) != a1 )
  {
    v4 = 0;
    while ( 1 )
    {
      ++v4;
      v6 = 4 * v4;
      if ( v4 == dword_800B8 )
        goto LABEL_7;
      v5 = *(_DWORD *)(v2 + 4);
      v2 += 4;
      v3 = v5;
      if ( *(_DWORD *)(v5 + 36) == a1 )
        goto LABEL_8;
    }
  }
  v6 = 0;
  v4 = 0;
LABEL_8:
  sub_15FF4((int *)(v3 + 4));
  close(*(_DWORD *)(*(_DWORD *)(dword_800B4 + v6) + 32));
  v7 = (void *)dword_800B4;
  free(*(void **)(dword_800B4 + v6));
  if ( dword_800B8 <= 1 )
  {
    free(v7);
    dword_800B4 = 0;
  }
  else
  {
    v8 = (void *)sub_4F524(4 * (dword_800B8 - 1));
    v9 = (int)v8;
    if ( v4 )
      memcpy(v8, (const void *)dword_800B4, v6);
    if ( v4 + 1 < dword_800B8 )
    {
      v10 = 4 * v4;
      v11 = (_DWORD *)(v9 + v10);
      v12 = v9 + 4 * dword_800B8 - 4;
      v13 = dword_800B4 + v10;
      do
      {
        v14 = *(_DWORD *)(v13 + 4);
        v13 += 4;
        *v11++ = v14;
      }
      while ( v11 != (_DWORD *)v12 );
    }
    free((void *)dword_800B4);
    dword_800B4 = v9;
  }
}
