int __fastcall blake2s_init_key(int *a1, int a2, const void *a3, size_t a4)
{
  char *v8; // r3
  int v10; // [sp+0h] [bp-78h] BYREF
  __int16 v11; // [sp+4h] [bp-74h]
  __int16 v12; // [sp+6h] [bp-72h]
  __int16 v13; // [sp+8h] [bp-70h]
  __int16 v14; // [sp+Ah] [bp-6Eh]
  __int16 v15; // [sp+Ch] [bp-6Ch]
  __int16 v16; // [sp+Eh] [bp-6Ah]
  int v17; // [sp+10h] [bp-68h]
  int v18; // [sp+14h] [bp-64h]
  int v19; // [sp+18h] [bp-60h]
  int v20; // [sp+1Ch] [bp-5Ch]
  char s[64]; // [sp+20h] [bp-58h] BYREF
  char v22; // [sp+60h] [bp-18h] BYREF

  if ( (unsigned int)(a2 - 1) > 0x1F )
    return -1;
  if ( a4 - 1 > 0x1F || a3 == 0 )
    return -1;
  LOBYTE(v10) = a2;
  BYTE1(v10) = a4;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  HIWORD(v10) = 257;
  if ( blake2s_init_param(a1, &v10) < 0 )
    return -1;
  memset(s, 0, sizeof(s));
  memcpy(s, a3, a4);
  blake2s_update(a1, s, 0x40u);
  v8 = s;
  do
    *v8++ = 0;
  while ( v8 != &v22 );
  return 0;
}
