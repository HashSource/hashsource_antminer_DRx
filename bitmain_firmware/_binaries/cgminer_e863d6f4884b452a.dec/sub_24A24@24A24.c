void __fastcall sub_24A24(int a1)
{
  _DWORD *v2; // r5
  int v3; // r3
  int v4; // r0
  int v5; // r6
  double v6; // d5
  double v7; // d6
  double v8; // d7
  double v9; // d4
  double v10; // d5
  double v11; // d7
  double v12; // d6
  double v13; // d7
  double v14; // d5
  int v15; // r3
  int v16; // r4
  int v17; // r3
  int v18; // r4
  pthread_t newthread; // [sp+14h] [bp-804h] BYREF
  char s[2048]; // [sp+18h] [bp-800h] BYREF

  if ( !*(_DWORD *)(a1 + 76) )
  {
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
    {
      strcpy(s, "Get A Error Data To Push!DROP!\r\n");
      sub_343C4(4, s, 0);
    }
    return;
  }
  v2 = *(_DWORD **)(a1 + 316);
  sub_2A69C(a1 + 496);
  if ( byte_6DDB1 )
  {
    v5 = *(_DWORD *)(sub_1DD14(*(_DWORD *)(a1 + 312)) + 36);
    if ( !pthread_mutex_lock(&stru_73A00) )
    {
      v6 = dbl_73790;
      ++*(_DWORD *)(v5 + 36);
      v7 = dbl_72D90;
      ++*((_QWORD *)v2 + 1);
      v8 = *(double *)(v5 + 200);
      v9 = *(double *)(a1 + 440);
      dbl_73790 = v6 + 1.0;
      *(double *)(v5 + 200) = v8 + v9;
      v10 = *(double *)(a1 + 440);
      v11 = *((double *)v2 + 9) + v10;
      dbl_72D90 = v7 + v10;
      *((double *)v2 + 9) = v11;
      if ( !pthread_mutex_unlock(&stru_73A00) )
      {
        off_6CB70();
        if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
        {
          snprintf(
            s,
            0x800u,
            "Accepted %s %d benchmark share nonce %08x",
            *(const char **)(*(_DWORD *)(v5 + 4) + 8),
            *(_DWORD *)(v5 + 8),
            *(_DWORD *)(a1 + 76));
          sub_343C4(7, s, 0);
        }
        return;
      }
      v17 = *_errno_location();
      v18 = 8789;
      goto LABEL_64;
    }
    v15 = *_errno_location();
    v16 = 8782;
LABEL_61:
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", v15, "cgminer.c", "submit_work_async", v16);
    goto LABEL_62;
  }
  if ( sub_201D4(a1, 1) )
  {
    v3 = (unsigned __int8)byte_6FA71;
    if ( byte_6CAA9 )
    {
      if ( !byte_6FA71 || !byte_73320 && !byte_6FA70 && dword_6D35C <= 6 )
        goto LABEL_46;
      snprintf(s, 0x800u, "Pool %d stale share detected, submitting as user requested", *v2);
      goto LABEL_45;
    }
    if ( *((_BYTE *)v2 + 104) )
    {
      if ( !byte_6FA71 || !byte_73320 && !byte_6FA70 && dword_6D35C <= 6 )
        goto LABEL_46;
      snprintf(s, 0x800u, "Pool %d stale share detected, submitting as pool requested", *v2);
LABEL_45:
      sub_343C4(7, s, 0);
      v3 = (unsigned __int8)byte_6FA71;
LABEL_46:
      *(_BYTE *)(a1 + 337) = 1;
      goto LABEL_10;
    }
    if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
    {
      snprintf(s, 0x800u, "Pool %d stale share detected, discarding", *v2);
      sub_343C4(7, s, 0);
    }
    sub_1FFF0("discard", (_DWORD *)a1);
    if ( !pthread_mutex_lock(&stru_73A00) )
    {
      v12 = *((double *)v2 + 11);
      v13 = dbl_739F8;
      ++v2[31];
      v14 = *(double *)(a1 + 440);
      ++*(_QWORD *)&dword_72C38;
      *((double *)v2 + 11) = v12 + v14;
      dbl_739F8 = v13 + v14;
      if ( !pthread_mutex_unlock(&stru_73A00) )
      {
        off_6CB70();
LABEL_23:
        sub_19F2C((void **)a1);
        j_free((void *)a1);
        return;
      }
      v17 = *_errno_location();
      v18 = 8812;
LABEL_64:
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
        v17,
        "cgminer.c",
        "submit_work_async",
        v18);
LABEL_62:
      sub_343C4(3, s, 1);
      sub_1B070(1, 1);
    }
    v15 = *_errno_location();
    v16 = 8807;
    goto LABEL_61;
  }
  v3 = (unsigned __int8)byte_6FA71;
LABEL_10:
  if ( *(_BYTE *)(a1 + 340) && (v4 = v2[186]) != 0 )
  {
    if ( v3 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
    {
      snprintf(s, 0x800u, "Pushing pool %d work to stratum queue", *v2);
      sub_343C4(7, s, 0);
      v4 = v2[186];
    }
    if ( !sub_2A278(v4, a1) )
    {
      if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
      {
        strcpy(s, "Discarding work from removed pool");
        sub_343C4(7, s, 0);
      }
      goto LABEL_23;
    }
  }
  else
  {
    if ( v3 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
    {
      strcpy(s, "Pushing submit work to work thread");
      sub_343C4(7, s, 0);
    }
    if ( pthread_create(&newthread, 0, (void *(*)(void *))sub_172F0, (void *)a1) )
    {
      strcpy(s, "Failed to create submit_work_thread");
      sub_343C4(3, s, 1);
      sub_1B070(1, 1);
    }
  }
}
