int __fastcall sub_434FC(int a1)
{
  int v1; // r4
  int v2; // r1
  _DWORD *v3; // r2
  unsigned int v4; // r3
  int v5; // t1
  _DWORD *v6; // r12
  _DWORD *v7; // r5
  _DWORD *v8; // lr
  int v9; // r1
  int v10; // r2
  int v11; // r3
  _DWORD v13[2]; // [sp+4h] [bp-28h] BYREF
  char v14; // [sp+Ch] [bp-20h]
  char v15; // [sp+Dh] [bp-1Fh]
  __int16 v16; // [sp+Eh] [bp-1Eh]
  char v17; // [sp+10h] [bp-1Ch]
  char v18; // [sp+11h] [bp-1Bh]
  char v19; // [sp+12h] [bp-1Ah]
  char v20[4]; // [sp+13h] [bp-19h] BYREF
  char v21[5]; // [sp+17h] [bp-15h] BYREF
  int v22; // [sp+1Ch] [bp-10h]
  int v23; // [sp+20h] [bp-Ch]
  _DWORD v24[2]; // [sp+24h] [bp-8h] BYREF

  v1 = *(_DWORD *)(*(_DWORD *)(a1 + 36) + 20);
  *(_DWORD *)(v1 + 703) = a1;
  if ( pthread_mutex_init((pthread_mutex_t *)(v1 + 743), 0) )
    sub_B988(3756);
  if ( pthread_mutex_init((pthread_mutex_t *)v1, 0) )
    sub_B988(3757);
  sub_3B068((pthread_rwlock_t *)(v1 + 24));
  v2 = 81;
  v16 = 0;
  v3 = v13;
  v19 = dword_60E44;
  v4 = 255;
  v14 = ~(~(((2 * (byte_63230 & 1)) | 1u) << 30) >> 30);
  v22 = 0;
  v13[1] = &loc_1C200;
  v13[0] = 1572945;
  v15 = 15;
  v17 = 6;
  v18 = 72;
  strcpy(v20, "Pd");
  v20[3] = 7;
  strcpy(v21, "%\n\n");
  v21[4] = 0;
  v23 = 26214404;
  v24[0] = 600;
  while ( 1 )
  {
    LOWORD(v4) = *(_WORD *)&aBitmainL3Detec_0[2 * (v2 ^ (v4 >> 8)) + 928] ^ ((_WORD)v4 << 8);
    if ( v3 == (_DWORD *)((char *)v24 + 1) )
      break;
    v5 = *((unsigned __int8 *)v3 + 1);
    v3 = (_DWORD *)((char *)v3 + 1);
    v2 = v5;
  }
  v6 = (_DWORD *)(v1 + 767);
  v7 = v13;
  HIWORD(v24[0]) = v4;
  do
  {
    v8 = v7;
    v7 += 4;
    v9 = v8[1];
    v10 = v8[2];
    v11 = v8[3];
    *v6 = *v8;
    v6[1] = v9;
    v6[2] = v10;
    v6[3] = v11;
    v6 += 4;
  }
  while ( v8 + 4 != v24 );
  *v6 = *v7;
  sub_42584(v1);
  return 1;
}
