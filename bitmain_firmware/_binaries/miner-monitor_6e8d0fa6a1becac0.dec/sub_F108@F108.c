int __fastcall sub_F108(char *s1)
{
  void *v1; // r6
  void *v2; // r8
  void *v3; // r10
  char **v4; // r5
  int v6; // r4
  const char *v7; // t1
  char *v8; // r5
  const char *v9; // r0
  size_t v10; // r7
  const char *v11; // r0
  __int16 v12; // r4
  char *v13; // r0
  int v14; // r9
  char *v15; // r4
  char *v16; // r0
  int v17; // r0
  size_t v18; // r12
  int v19; // r1
  const char *v21; // r5
  size_t v22; // r6
  const char *v23; // r5
  size_t v24; // r7
  const char *v25; // r4
  size_t v26; // r5
  size_t v27; // [sp+0h] [bp-44h]
  _BYTE v28[12]; // [sp+Ch] [bp-38h] BYREF
  char v29[44]; // [sp+18h] [bp-2Ch] BYREF

  v4 = off_1B330;
  v6 = 0;
  while ( 1 )
  {
    v7 = v4[1];
    ++v4;
    if ( !strcmp(s1, v7) )
      break;
    if ( ++v6 == 7 )
      goto LABEL_4;
  }
  v21 = (const char *)*(&off_1B2FC + v6);
  v22 = strlen(v21) + 1;
  v2 = malloc(v22);
  memset(v2, 0, v22);
  strcpy((char *)v2, v21);
  v23 = off_1B318[v6];
  v24 = strlen(v23) + 1;
  v1 = malloc(v24);
  memset(v1, 0, v24);
  strcpy((char *)v1, v23);
  v25 = off_1B350[v6];
  v26 = strlen(v25) + 1;
  v3 = malloc(v26);
  memset(v3, 0, v26);
  strcpy((char *)v3, v25);
LABEL_4:
  v8 = (char *)calloc(0x1000u, 1u);
  v9 = sub_E1F8(byte_1E44C);
  v10 = strlen(v9);
  v11 = (const char *)sub_F990(off_1B2F0, "port_local", v28);
  v12 = strtol(v11, 0, 10);
  if ( !sub_E284("eth0", v29) )
    puts("get IP error");
  v13 = sub_BEA4((const char *)v1, v29, v12);
  v14 = (unsigned __int8)*v13;
  v15 = v13;
  if ( *v13 )
  {
    printf("result of callapi:%s\n ", v13);
    v16 = sub_BC44((const char *)v2, v8, v15);
    v27 = strlen(v16);
    printf("state_len=%d\n", v27 + v10);
    sub_ECD0((const char *)v3, v27 + v10);
    v17 = off_1D43C(dword_26F98, dword_258BC, byte_1E44C, v10);
    v18 = v27;
    dword_26F90 = v17;
    if ( v17 == -1 )
    {
      perror("send");
      v18 = v27;
    }
    v19 = off_1D43C(dword_26F98, dword_258BC, v8, v18);
    dword_26F90 = v19;
    if ( v19 == -1 )
    {
      perror("send");
      v19 = dword_26F90;
    }
    printf("sendbytes=%d\n", v19);
    printf("send pakge str :%s\n", v8);
    if ( v3 )
      free(v3);
    if ( v2 )
      free(v2);
    if ( v1 )
      free(v1);
    free(v15);
    free(v8);
    return 1;
  }
  else
  {
    printf("nothing returned form callapi\n\n\n ");
    return v14;
  }
}
