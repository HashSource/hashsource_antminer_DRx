int __fastcall digestInit(char *a1, unsigned int a2, int a3)
{
  signed int v6; // r3
  _WORD v8[24]; // [sp+0h] [bp-40h] BYREF
  _BYTE v9[8]; // [sp+30h] [bp-10h] BYREF
  unsigned int v10; // [sp+38h] [bp-8h]
  int v11; // [sp+3Ch] [bp-4h]

  memset(v8, 0, sizeof(v8));
  v8[1] = 257;
  v6 = a2 * sub_146690(512, a2);
  v10 = a2;
  qmemcpy(v9, "ZcashPoW", sizeof(v9));
  v11 = a3;
  LOBYTE(v8[0]) = v6 / 8;
  return blake2b_init_param(a1, (int)v8);
}
