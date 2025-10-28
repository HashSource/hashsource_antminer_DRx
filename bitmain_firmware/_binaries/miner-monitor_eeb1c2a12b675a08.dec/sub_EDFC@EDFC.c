void __fastcall sub_EDFC(const char *a1)
{
  _DWORD *v2; // r7
  char *v3; // r5
  char *v4; // r4
  int v5; // r8
  size_t v6; // r0
  const char *v7; // r0
  char v8; // r10
  const char *v9; // r0
  char v10; // r11
  char v11; // r9
  char *v12; // r6
  int v13; // r0
  int v14; // r0
  int v15; // r0
  char *v16; // r0
  _DWORD v17[2]; // [sp+0h] [bp-74h] BYREF
  __int16 v18; // [sp+8h] [bp-6Ch]
  _DWORD v19[10]; // [sp+Ch] [bp-68h] BYREF
  _BYTE s[64]; // [sp+34h] [bp-40h] BYREF

  memset(s, 0, 0x3Cu);
  v17[0] = 0;
  v17[1] = 0;
  v18 = 0;
  memset(v19, 0, sizeof(v19));
  v2 = calloc(0x1Eu, 1u);
  v3 = (char *)calloc(0x19u, 1u);
  v4 = (char *)calloc(0x3Cu, 1u);
  if ( !sub_E284("eth0", (char *)v19) )
    puts("get ip error!");
  sprintf(v3, "IP=%s,", (const char *)v19);
  strcpy(v4, "UID=");
  v5 = sub_FA50(off_1B2F0, "api-uid", s);
  v6 = strlen(v4);
  *(_WORD *)stpcpy(&v4[v6], v5) = 44;
  sprintf((char *)v17, "TYPE=%d", 7);
  v7 = sub_E1F8(byte_1E44C);
  v8 = strlen(v7);
  v9 = (const char *)sub_E340(v2, "eth0");
  v10 = strlen(v9);
  LOBYTE(v5) = strlen(v3);
  v11 = strlen(v4);
  LOBYTE(v5) = v10 + v8 + v5 + v11 + strlen((const char *)v17);
  sub_ECD0(a1, (unsigned __int8)v5);
  v12 = (char *)calloc((unsigned __int8)v5 + 4, 1u);
  v13 = stpcpy(v12, byte_1E44C);
  v14 = stpcpy(v13, v2);
  v15 = stpcpy(v14, v3);
  v16 = (char *)stpcpy(v15, v4);
  strcpy(v16, (const char *)v17);
  dword_26F90 = off_1D43C(dword_26F98, dword_258BC, v12, (unsigned __int8)v5);
  if ( dword_26F90 == -1 )
    perror("send");
  printf("send pakge str :%s\n", v12);
  free(v2);
  free(v3);
  free(v4);
  if ( v12 )
    free(v12);
}
