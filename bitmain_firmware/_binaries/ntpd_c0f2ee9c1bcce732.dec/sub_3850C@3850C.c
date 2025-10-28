int __fastcall sub_3850C(int a1, int a2)
{
  int v3; // r4
  int v4; // r6
  int *v5; // r5
  bool v6; // zf
  int v7; // r2
  unsigned int v8; // r10
  int v9; // r8
  int v10; // r9
  int v11; // r11
  int v12; // r3
  int v13; // r10
  int v14; // r9
  int v15; // r10
  int v16; // lr
  int v17; // r12
  struct tm *v18; // r0
  int v19; // r2
  int tm_sec; // r1
  int tm_min; // r12
  int tm_yday; // r3
  time_t v24; // [sp+4h] [bp-10h]
  time_t v25; // [sp+Ch] [bp-8h] BYREF

  v3 = *(_DWORD *)(a2 + 60);
  v4 = *(_DWORD *)(v3 + 28);
  v5 = *(int **)v4;
  v6 = *(_DWORD *)v4 == 0;
  ++*(_DWORD *)(v4 + 4);
  if ( !v6 || (v5 = (int *)sub_383D8(a1), (*(_DWORD *)v4 = v5) != 0) )
  {
    if ( v5[9] )
    {
      v7 = *v5;
      if ( !*v5 || v7 == 1 )
      {
        v8 = v5[5];
        v9 = 1000 * v5[3];
        v10 = (unsigned __int8)v8;
        v11 = BYTE1(v8);
        v12 = v5[4] - 2085978496;
        v13 = HIWORD(v8) & 0xF;
        v24 = v5[2];
      }
      else
      {
        v9 = 0;
        v13 = 0;
        sub_4FE78(3, "SHM: bad mode found in shared memory: %d", v7);
        v11 = 0;
        v12 = -2085978496;
        v10 = 0;
        v24 = 0;
      }
      v14 = dword_7C59C[v10];
      v15 = dword_7C15C[v13];
      v16 = dword_7C19C[v11];
      v17 = *(_DWORD *)(v3 + 760);
      v5[9] = 0;
      *(_DWORD *)(v3 + 216) = v12;
      *(_DWORD *)(v3 + 760) = v17 + 1;
      *(_DWORD *)(v3 + 220) = v16 + v14 + v15;
      v25 = v24;
      v18 = gmtime(&v25);
      v19 = v5[7];
      tm_sec = v18->tm_sec;
      tm_min = v18->tm_min;
      tm_yday = v18->tm_yday;
      *(_DWORD *)(v3 + 180) = v18->tm_hour;
      *(_DWORD *)(v3 + 184) = tm_min;
      *(_DWORD *)(v3 + 176) = tm_yday + 1;
      *(_DWORD *)(v3 + 188) = tm_sec;
      *(_DWORD *)(v3 + 192) = v9;
      *(_BYTE *)(a2 + 71) = v19;
      *(_BYTE *)(v3 + 32) = v5[6];
      if ( sub_27698((_DWORD *)v3) )
      {
        ++*(_DWORD *)(v4 + 8);
        return 1;
      }
      else
      {
        sub_27040(a2, 6);
        ++*(_DWORD *)(v4 + 16);
        return 0;
      }
    }
    else
    {
      sub_27040(a2, 1);
      ++*(_DWORD *)(v4 + 12);
      return 0;
    }
  }
  else
  {
    sub_27040(a2, 3);
    return 0;
  }
}
