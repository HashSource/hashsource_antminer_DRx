void __fastcall sub_1D318(const char *a1, _DWORD *a2)
{
  int v4; // r7
  int v5; // r8
  int v6; // r11
  int v7; // r9
  char *v8; // r6
  char *v9; // r5
  char *v10; // r4
  signed int v11; // r7
  int *v12; // r0
  size_t v13; // r5
  int *v14; // r0
  char v15[2048]; // [sp+20h] [bp-C04h] BYREF
  char s[1028]; // [sp+820h] [bp-404h] BYREF

  if ( !dword_7AB44 )
    return;
  v4 = a2[78];
  v5 = sub_13DE8(v4);
  v6 = a2[79];
  v7 = a2[124];
  v8 = (char *)sub_2D0B4(a2 + 53, 32);
  v9 = (char *)sub_2D0B4(a2 + 61, 32);
  v10 = (char *)sub_2D0B4(a2, 180);
  v11 = snprintf(
          s,
          0x400u,
          "%lu,%s,%s,%s,%s%u,%u,%s,%s\n",
          v7,
          a1,
          v8,
          *(const char **)(v6 + 172),
          *(const char **)(*(_DWORD *)(v5 + 4) + 8),
          *(_DWORD *)(v5 + 8),
          v4,
          v9,
          v10);
  free(v8);
  free(v9);
  free(v10);
  if ( v11 >= 1024 )
  {
    s[1023] = 0;
LABEL_9:
    if ( pthread_mutex_lock(&stru_7C3D8) )
    {
      v12 = _errno_location();
      snprintf(v15, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v12, "cgminer.c", "sharelog", 935);
      sub_3F178(3, v15, 1);
      sub_134A4(1);
    }
    v13 = fwrite(s, v11, 1u, (FILE *)dword_7AB44);
    fflush((FILE *)dword_7AB44);
    if ( pthread_mutex_unlock(&stru_7C3D8) )
    {
      v14 = _errno_location();
      snprintf(v15, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v14, "cgminer.c", "sharelog", 938);
      sub_3F178(3, v15, 1);
      sub_134A4(1);
    }
    off_79D40(0);
    if ( v13 != 1 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 2) )
    {
      strcpy(v15, "sharelog fwrite error");
      sub_3F178(3, v15, 0);
    }
    return;
  }
  if ( v11 >= 0 )
    goto LABEL_9;
  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
  {
    strcpy(v15, "sharelog printf error");
    sub_3F178(3, v15, 0);
  }
}
