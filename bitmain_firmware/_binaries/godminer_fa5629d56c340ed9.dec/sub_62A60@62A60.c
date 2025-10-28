int sub_62A60()
{
  int v0; // r8
  __int64 v1; // r0
  int *v2; // r5
  int v3; // t1
  _DWORD *updated; // r4
  int v5; // lr
  int v6; // r12
  int v7; // r2
  int v9; // [sp+4h] [bp-4h] BYREF

  v0 = 0;
  v9 = 0;
  LODWORD(v1) = get_all_created_runtime(&v9);
  if ( v9 > 0 )
  {
    v2 = (int *)(v1 - 4);
    do
    {
      while ( 1 )
      {
        v3 = v2[1];
        ++v2;
        ++v0;
        updated = update_hashrate(
                    v3,
                    (int)&byte_1985E0[216 * *(_DWORD *)(v3 + 252)],
                    &dword_197FE0[24 * *(_DWORD *)(v3 + 252)]);
        v1 = *(_QWORD *)updated;
        if ( *(_QWORD *)updated )
          break;
        if ( v9 <= v0 )
          return v1;
      }
      subject_notify_all(dword_199364, *v2);
      LODWORD(v1) = updated[3];
      v5 = updated[1];
      v6 = updated[2];
      *((_QWORD *)updated + 1) = 0;
      HIDWORD(v1) = *updated;
      updated[1] = v5 & ~(_DWORD)v1;
      v7 = v9;
      *updated = HIDWORD(v1) & ~v6;
    }
    while ( v7 > v0 );
  }
  return v1;
}
