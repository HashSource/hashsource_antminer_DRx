int __fastcall sub_27824(_DWORD *a1, const char *a2, signed int a3, _DWORD *a4)
{
  int *v4; // r8
  char *v7; // r11
  unsigned int v8; // r1
  unsigned int v9; // r5
  signed int v10; // r12
  _DWORD *v12; // r9
  char *v13; // r3
  char *v14; // r2
  char v15; // t1
  const char *v16; // r5
  int v17; // r9
  int v18; // r4
  const char *v19; // r0
  unsigned int v20; // r1
  unsigned int v22; // r11
  int v23; // r0
  int v24; // r0
  int v25; // r5
  const char *v26; // r0
  const char *v27; // r0
  unsigned int v28; // r1
  unsigned int v29; // r2
  bool v30; // zf
  int v31; // r2
  unsigned int v32; // r2
  int v33; // r0
  int v35; // [sp+10h] [bp-14h] BYREF
  unsigned int v36; // [sp+14h] [bp-10h]
  int v37; // [sp+18h] [bp-Ch] BYREF
  int v38; // [sp+1Ch] [bp-8h]

  v4 = a1 + 19;
  v7 = (char *)a1 + a1[22] + 88;
  v8 = a1[20];
  v9 = (unsigned int)(v7 + 4);
  v10 = a3;
  v35 = a1[19];
  v36 = v8;
  v12 = a1 + 23;
  if ( v7 + 4 >= (char *)a1 + 100 )
  {
    v22 = (unsigned int)(v7 - 4);
    v23 = sub_4E858(v22, &v37);
    v10 = a3;
    if ( v23 )
    {
      if ( v38 )
      {
        v29 = HIWORD(v36) + ((unsigned int)-v38 >> 16);
        if ( (((unsigned __int16)v36 + (unsigned __int16)-(__int16)v38) & 0x10000) != 0 )
          ++v29;
        v30 = (v29 & 0x10000) == 0;
        v24 = ~v37 + v35;
        v31 = (unsigned __int16)(v36 - v38) | (v29 << 16);
        if ( !v30 )
          ++v24;
        v36 = v31;
        v35 = v24;
      }
      else
      {
        v24 = v35 - v37;
        v35 -= v37;
      }
      if ( v24 )
      {
        v28 = v4[1];
        v35 = *v4;
        v36 = v28;
      }
      else
      {
        if ( dword_7CF4C > 1 )
        {
          v25 = a1[17];
          v26 = (const char *)sub_4FA94();
          printf("refclock_gtlin: fd %d ldisc %s", v25, v26);
          sub_4CBA8(&v35);
          if ( v38 )
          {
            v32 = HIWORD(v36) + ((unsigned int)-v38 >> 16);
            if ( (((unsigned __int16)v36 + (unsigned __int16)-(__int16)v38) & 0x10000) != 0 )
              ++v32;
            v33 = ~v37 + v35;
            v36 = (unsigned __int16)(v36 - v38) | (v32 << 16);
            if ( (v32 & 0x10000) != 0 )
              ++v33;
            v35 = v33;
          }
          else
          {
            v35 -= v37;
          }
          v27 = (const char *)sub_4FA94();
          printf(" sigio %s\n", v27);
          v10 = a3;
        }
        v9 = v22;
        v35 = v37;
        v36 = v38;
      }
    }
  }
  if ( (int)(v9 - (_DWORD)v12) >= v10 )
    v9 = (unsigned int)a1 + v10 + 91;
  if ( v9 <= (unsigned int)v12 )
  {
    v16 = a2;
    v17 = 0;
  }
  else
  {
    v13 = (char *)a1 + 91;
    v14 = (char *)a2;
    do
    {
      v15 = *++v13;
      *v14++ = v15;
    }
    while ( v13 != (char *)(v9 - 1) );
    v16 = &a2[v9 - (_DWORD)a1 - 92];
    v17 = v16 - a2;
  }
  *v16 = 0;
  if ( dword_7CF4C > 1 )
  {
    v18 = a1[17];
    v19 = (const char *)sub_4F124(v35, v36, 0, 6, 0);
    printf("refclock_gtraw: fd %d time %s timecode %d %s\n", v18, v19, v17, a2);
  }
  v20 = v36;
  *a4 = v35;
  a4[1] = v20;
  return v17;
}
