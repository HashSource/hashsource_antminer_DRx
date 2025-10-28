int __fastcall sub_91CC(int a1, __int16 a2, int a3)
{
  time_t v6; // r0
  FILE *v8; // r4
  int *v9; // r0
  char *v10; // r0
  _BYTE v11[4]; // [sp+4h] [bp-24h] BYREF
  _DWORD v12[2]; // [sp+8h] [bp-20h] BYREF
  _WORD v13[4]; // [sp+10h] [bp-18h] BYREF
  _BYTE *v14; // [sp+18h] [bp-10h]
  __int16 v15; // [sp+1Ch] [bp-Ch]
  __int16 v16; // [sp+1Eh] [bp-Ah]
  __int16 v17; // [sp+20h] [bp-8h]
  int *v18; // [sp+24h] [bp-4h]

  v6 = time(0);
  v13[0] = a2;
  v15 = a2;
  dword_11CBC = a3;
  v18 = &dword_11CB8;
  v11[1] = 0;
  v11[0] = 0;
  v13[1] = 0;
  v13[2] = 2;
  v12[1] = 2;
  v14 = v11;
  v16 = 0x4000;
  v17 = 64;
  v12[0] = v13;
  dword_11CB8 = v6;
  if ( ioctl(a1, 0x707u, v12) >= 0 )
    return 0;
  v8 = (FILE *)stderr;
  v9 = _errno_location();
  v10 = strerror(*v9);
  fprintf(v8, "Error: Transaction failed: %s\n", v10);
  return 1;
}
