int __fastcall pic1704_write_flash(char a1, const void *a2, char a3, size_t a4)
{
  void *v8; // r7
  _BYTE *v9; // r4
  int v10; // r5
  int v12; // [sp+0h] [bp-10h] BYREF
  char v13; // [sp+4h] [bp-Ch]
  int v14; // [sp+8h] [bp-8h]
  _BYTE *v15; // [sp+Ch] [bp-4h]

  v12 = 255;
  v13 = 0;
  v8 = malloc(a4 + 8);
  v9 = malloc(a4 + 2);
  v9[1] = a4;
  *v9 = a3;
  memcpy(v9 + 2, a2, a4);
  BYTE2(v14) = 5;
  BYTE1(v14) = a4 + 2;
  v15 = v9;
  HIBYTE(v14) = a1;
  LOBYTE(v14) = 51;
  v10 = sub_A6724(v14, (int)v9, (int)v8, (unsigned __int8 *)&v12);
  free(v9);
  free(v8);
  return v10;
}
