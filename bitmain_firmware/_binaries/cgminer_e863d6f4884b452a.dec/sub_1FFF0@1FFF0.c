void __fastcall sub_1FFF0(const char *a1, _DWORD *a2)
{
  int v2; // r6
  int v4; // r11
  int v5; // r10
  char *v6; // r8
  char *v7; // r7
  char *v8; // r9
  signed int v9; // r4
  size_t v10; // r4
  const char *v11; // r4
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  _DWORD *v16; // r4
  int v17; // r1
  int *v18; // r0
  int *v19; // r0
  int v21; // [sp+24h] [bp-C08h]
  char s[1024]; // [sp+28h] [bp-C04h] BYREF
  _DWORD v23[5]; // [sp+428h] [bp-804h] BYREF
  __int16 v24; // [sp+43Ch] [bp-7F0h]

  if ( !dword_6D86C )
    return;
  v2 = a2[78];
  v4 = *(_DWORD *)(sub_1DD14(v2) + 36);
  v5 = a2[79];
  v21 = a2[124];
  v6 = (char *)sub_2826C(a2 + 53, 32);
  v7 = (char *)sub_2826C(a2 + 61, 32);
  v8 = (char *)sub_2826C(a2, 180);
  v9 = snprintf(
         s,
         0x400u,
         "%lu,%s,%s,%s,%s%u,%u,%s,%s\n",
         v21,
         a1,
         v6,
         *(const char **)(v5 + 172),
         *(const char **)(*(_DWORD *)(v4 + 4) + 8),
         *(_DWORD *)(v4 + 8),
         v2,
         v7,
         v8);
  free(v6);
  free(v7);
  free(v8);
  if ( v9 >= 1024 )
  {
    s[1023] = 0;
    goto LABEL_5;
  }
  if ( v9 >= 0 )
  {
LABEL_5:
    if ( pthread_mutex_lock(&stru_6DDD8) )
    {
      v18 = _errno_location();
      snprintf(
        (char *)v23,
        0x800u,
        "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
        *v18,
        "cgminer.c",
        "sharelog",
        935);
    }
    else
    {
      v10 = fwrite(s, v9, 1u, (FILE *)dword_6D86C);
      fflush((FILE *)dword_6D86C);
      if ( !pthread_mutex_unlock(&stru_6DDD8) )
      {
        off_6CB70();
        if ( v10 != 1 && (byte_73320 || byte_6FA70 || dword_6D35C > 2) )
        {
          v11 = "sharelog fwrite error";
LABEL_12:
          v12 = *(_DWORD *)v11;
          v13 = *((_DWORD *)v11 + 1);
          v14 = *((_DWORD *)v11 + 2);
          v15 = *((_DWORD *)v11 + 3);
          v16 = v11 + 16;
          v23[0] = v12;
          v23[1] = v13;
          v23[2] = v14;
          v23[3] = v15;
          v17 = v16[1];
          v23[4] = *v16;
          v24 = v17;
          sub_343C4(3, v23, 0);
          return;
        }
        return;
      }
      v19 = _errno_location();
      snprintf(
        (char *)v23,
        0x800u,
        "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v19,
        "cgminer.c",
        "sharelog",
        938);
    }
    sub_343C4(3, v23, 1);
    sub_1B070(1, 1);
  }
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
  {
    v11 = "sharelog printf error";
    goto LABEL_12;
  }
}
