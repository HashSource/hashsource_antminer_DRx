int __fastcall sub_FA54(const char *a1, const char *a2)
{
  FILE *v4; // r0
  FILE *v5; // r4
  size_t v6; // r5
  void *v8; // r8
  _DWORD *v9; // r4
  _DWORD *v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  _DWORD *v14; // r0
  FILE *v15; // r5
  _DWORD *v16; // r4
  _DWORD *v17; // r0
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r0
  _DWORD *v21; // r0
  _DWORD *v22; // r0
  char *v23; // r6
  char v24[12]; // [sp+0h] [bp-78h] BYREF
  char v25[12]; // [sp+Ch] [bp-6Ch] BYREF
  char dest[16]; // [sp+18h] [bp-60h] BYREF
  char v27[20]; // [sp+28h] [bp-50h] BYREF
  char v28[60]; // [sp+3Ch] [bp-3Ch] BYREF

  v4 = fopen(a1, "rb+");
  v5 = v4;
  if ( !v4 )
  {
    puts("open error");
    exit(1);
  }
  fseek(v4, 0, 2);
  v6 = ftell(v5);
  if ( !v6 )
    return 0;
  fseek(v5, 0, 0);
  v8 = malloc(v6 + 100);
  fread(v8, 1u, v6, v5);
  fclose(v5);
  v9 = sub_D9D8((const char *)v8);
  v10 = sub_DA50((int)v9, (int)"api-switch");
  strcpy(dest, (const char *)v10[4]);
  v11 = sub_DA50((int)v9, (int)"api-uid");
  strcpy(v28, (const char *)v11[4]);
  v12 = sub_DA50((int)v9, (int)"ip_server");
  strcpy(v27, (const char *)v12[4]);
  v13 = sub_DA50((int)v9, (int)"port_server");
  strcpy(v24, (const char *)v13[4]);
  v14 = sub_DA50((int)v9, (int)"port_local");
  strcpy(v25, (const char *)v14[4]);
  sub_D864(v9);
  v15 = fopen(a1, "w+");
  if ( !v15 )
    puts("open error");
  v16 = sub_DE4C();
  v17 = sub_DE04(dest);
  sub_DAC8(v16, "api-switch", (int)v17);
  v18 = sub_DE04(v28);
  sub_DAC8(v16, "api-uid", (int)v18);
  v19 = sub_DE04(a2);
  sub_DAC8(v16, "auth", (int)v19);
  v20 = sub_DE04(v27);
  sub_DAC8(v16, "ip_server", (int)v20);
  v21 = sub_DE04(v24);
  sub_DAC8(v16, "port_server", (int)v21);
  v22 = sub_DE04(v25);
  sub_DAC8(v16, "port_local", (int)v22);
  v23 = sub_D9E4((size_t)v16);
  fputs(v23, v15);
  fclose(v15);
  sub_D864(v16);
  free(v23);
  free(v8);
  return 1;
}
