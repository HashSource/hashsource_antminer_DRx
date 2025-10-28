void __fastcall __noreturn sub_3BC80(unsigned __int8 *a1)
{
  pthread_t v1; // r0
  int v2; // r3
  int v3; // r2
  int v4; // r3
  int v5; // r2
  void **v6; // r6
  void *v7; // r4
  int v8; // r4
  _WORD *v9; // r2
  int v10; // r1
  unsigned int v11; // r3
  int v12; // t1
  int v13; // r4
  unsigned __int8 *v14; // r5
  int v15; // r3
  int v16; // r10
  int v17; // r2
  int i; // r3
  int v19; // r3
  char *v20; // r2
  unsigned int v21; // r1
  int v22; // r1
  _BYTE *v23; // r12
  unsigned int v24; // r2
  char *v25; // r0
  unsigned int v26; // r3
  char v27; // r6
  char v28; // lr
  int v29; // [sp+10h] [bp-94Ch]
  void **src; // [sp+30h] [bp-92Ch]
  int v32; // [sp+34h] [bp-928h]
  int *v33; // [sp+48h] [bp-914h]
  struct timeval v34; // [sp+54h] [bp-908h] BYREF
  struct timeval v35; // [sp+5Ch] [bp-900h] BYREF
  char v36[80]; // [sp+64h] [bp-8F8h] BYREF
  char v37[4]; // [sp+B4h] [bp-8A8h] BYREF
  _BYTE v38[20]; // [sp+F0h] [bp-86Ch] BYREF
  _WORD v39[42]; // [sp+104h] [bp-858h] BYREF
  char v40[2052]; // [sp+158h] [bp-804h] BYREF

  v1 = pthread_self();
  pthread_detach(v1);
  if ( !byte_630C1 )
  {
    v29 = a1[156];
    v33 = *(int **)(a1 + 703);
    v32 = v29 + 40;
    goto LABEL_10;
  }
  if ( byte_632F0 || byte_630C0 || dword_60964 > 6 )
  {
    strcpy(v40, "Start To Fill Work!");
    sub_38438(7, v40, 0);
    v2 = a1[156];
    v33 = *(int **)(a1 + 703);
    if ( !byte_630C1 )
      goto LABEL_9;
    if ( byte_632F0 || byte_630C0 )
    {
LABEL_54:
      v29 = v2;
      v32 = v2 + 40;
      snprintf(v40, 0x800u, "Start To Fill Work!ChainIndex:[%d]", v2);
      sub_38438(7, v40, 0);
      goto LABEL_10;
    }
  }
  else
  {
    v2 = a1[156];
    v33 = *(int **)(a1 + 703);
  }
  if ( dword_60964 <= 6 )
  {
LABEL_9:
    v29 = v2;
    v32 = v2 + 40;
LABEL_10:
    if ( !byte_63150 )
      goto LABEL_50;
    while ( 1 )
    {
      sub_2B13C(&v34);
      v3 = v34.tv_sec - v35.tv_sec;
      v4 = v34.tv_usec - v35.tv_usec;
      if ( v34.tv_usec - v35.tv_usec < 0 )
      {
        --v3;
        v4 += 1000000;
      }
      if ( !byte_630C8[v29] && v4 / 1000 + 1000 * v3 < (unsigned int)(1000 * LODWORD(flt_C4BEC)) )
      {
LABEL_50:
        sub_2B21C();
        goto LABEL_10;
      }
      sub_2B13C(&v35);
      do
      {
        pthread_mutex_lock(&stru_63138);
        v6 = (void **)sub_244C4((int)v33, *v33, v5);
        pthread_mutex_unlock(&stru_63138);
      }
      while ( !v6 );
      v7 = v6[85];
      byte_630C8[v29] = 0;
      src = v6;
      memset(v39, 0, 0x52u);
      v8 = (unsigned __int8)v7 & 0x7F;
      memcpy(v36, v6, sizeof(v36));
      sub_2F560(v36, 80);
      memcpy(&v39[2], &v36[4], 0x4Cu);
      v9 = v39;
      v10 = 32;
      v11 = 0xFFFF;
      LOBYTE(v39[1]) = v8;
      qmemcpy(v39, " P", 2);
      while ( 1 )
      {
        v11 = (unsigned __int16)(*(_WORD *)&aBitmainL3Detec_0[2 * (v10 ^ (v11 >> 8)) + 928] ^ ((_WORD)v11 << 8));
        if ( v9 == (_WORD *)((char *)&v39[39] + 1) )
          break;
        v12 = *((unsigned __int8 *)v9 + 1);
        v9 = (_WORD *)((char *)v9 + 1);
        v10 = v12;
      }
      v13 = v8 + 46;
      v14 = &a1[4 * v13];
      v39[40] = (v11 >> 8) | ((_WORD)v11 << 8);
      pthread_mutex_lock(&stru_63138);
      if ( *(_DWORD *)(v14 + 7) )
      {
        sub_152B8(*(void ***)(v14 + 7));
        v15 = *((_DWORD *)v14 + 2);
        v14[7] = 0;
        *((_DWORD *)v14 + 2) = v15 & 0xFF000000;
      }
      *(_DWORD *)&a1[4 * v13 + 7] = sub_19E18(v6, 0);
      pthread_mutex_unlock(&stru_63138);
      if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
      {
        snprintf(v40, 0x800u, "ChainID[%d] Wirte Work", v29);
        sub_38438(7, v40, 0);
      }
      v16 = 0;
      sub_3BBBC(*(_DWORD *)&a1[4 * v32 + 1], v39, 0x52u);
      byte_630F8 = 1;
      do
      {
        v17 = 1;
        for ( i = 0; i != 60 && i != 77; ++i )
        {
          if ( i == 78 )
          {
            v38[18] = 0;
          }
          else
          {
            v37[i] = 32;
            if ( v17 == 80 )
              goto LABEL_36;
          }
LABEL_33:
          ++v17;
        }
        v37[i] = 124;
        if ( v17 != 80 )
          goto LABEL_33;
LABEL_36:
        v19 = 28;
        v20 = &v36[79];
        do
        {
          v21 = (unsigned int)(v16 * 2) >> v19;
          v19 -= 4;
          *++v20 = aBitmainL3Detec_0[(v21 & 0xF) + 1480];
        }
        while ( v19 != -4 );
        v22 = 0;
        v23 = v38;
        v24 = 0;
        do
        {
          v25 = &v40[(v24 >> 3) + 2048 + v22];
          v22 += 3;
          if ( v24 + v16 * 2 > 0x51 )
            break;
          v26 = *((unsigned __int8 *)&v39[v16] + v24++);
          v27 = aBitmainL3Detec_0[(v26 & 0xF) + 1480];
          v28 = aBitmainL3Detec_0[(v26 >> 4) + 1480];
          if ( v26 - 32 > 0x5E )
            LOBYTE(v26) = 46;
          *(v25 - 2200) = v27;
          *(v25 - 2201) = v28;
          *++v23 = v26;
        }
        while ( v24 != 16 );
        if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
        {
          snprintf(v40, 0x800u, "%s", v37);
          sub_38438(7, v40, 0);
        }
        v16 += 8;
      }
      while ( v16 != 48 );
      sub_2B13C((struct timeval *)&dword_63154);
      sub_2B21C();
      sub_152B8(src);
      if ( !byte_63150 )
        goto LABEL_50;
    }
  }
  goto LABEL_54;
}
