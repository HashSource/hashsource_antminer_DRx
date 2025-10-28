void __fastcall sub_1D408(const char *a1, _DWORD *a2)
{
  int v4; // r10
  int v5; // r9
  char *v6; // r7
  char *v7; // r6
  char *v8; // r8
  signed int v9; // r4
  size_t v10; // r4
  const char *v11; // lr
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  _DWORD *v16; // lr
  int v17; // r1
  int v18; // [sp+20h] [bp-C0Ch]
  int v19; // [sp+24h] [bp-C08h]
  char s[1024]; // [sp+28h] [bp-C04h] BYREF
  _DWORD v21[5]; // [sp+428h] [bp-804h] BYREF
  __int16 v22; // [sp+43Ch] [bp-7F0h]

  if ( !dword_60FA4 )
    return;
  v4 = a2[64];
  v5 = *(_DWORD *)(sub_1C36C(v4) + 36);
  v19 = a2[65];
  v18 = a2[108];
  v6 = (char *)sub_294B8(a2 + 40, 32);
  v7 = (char *)sub_294B8(a2 + 48, 32);
  v8 = (char *)sub_294B8(a2, 128);
  v9 = snprintf(
         s,
         0x400u,
         "%lu,%s,%s,%s,%s%u,%u,%s,%s\n",
         v18,
         a1,
         v6,
         *(const char **)(v19 + 164),
         *(const char **)(*(_DWORD *)(v5 + 4) + 8),
         *(_DWORD *)(v5 + 8),
         v4,
         v7,
         v8);
  free(v6);
  free(v7);
  free(v8);
  if ( v9 < 1024 )
  {
    if ( v9 < 0 )
    {
      if ( !byte_632F0 && !byte_630C0 && dword_60964 <= 2 )
        return;
      v11 = "sharelog printf error";
LABEL_11:
      v12 = *(_DWORD *)v11;
      v13 = *((_DWORD *)v11 + 1);
      v14 = *((_DWORD *)v11 + 2);
      v15 = *((_DWORD *)v11 + 3);
      v16 = v11 + 16;
      v21[0] = v12;
      v21[1] = v13;
      v21[2] = v14;
      v21[3] = v15;
      v17 = v16[1];
      v21[4] = *v16;
      v22 = v17;
      sub_38438(3, v21, 0);
      return;
    }
  }
  else
  {
    s[1023] = 0;
  }
  if ( pthread_mutex_lock(&stru_61538) )
    sub_B4E4("sharelog", 673);
  v10 = fwrite(s, v9, 1u, (FILE *)dword_60FA4);
  fflush((FILE *)dword_60FA4);
  if ( pthread_mutex_unlock(&stru_61538) )
    sub_B694("sharelog", 676);
  off_60178();
  if ( v10 != 1 && (byte_632F0 || byte_630C0 || dword_60964 > 2) )
  {
    v11 = "sharelog fwrite error";
    goto LABEL_11;
  }
}
