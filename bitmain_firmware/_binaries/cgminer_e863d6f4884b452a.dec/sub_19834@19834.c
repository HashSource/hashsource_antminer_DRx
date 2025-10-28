int __fastcall sub_19834(int a1, int a2, unsigned int a3)
{
  int v3; // r0
  unsigned int v4; // r5
  unsigned int *v5; // r1
  unsigned int v6; // t1
  unsigned int v7; // r4
  _BYTE v9[131592]; // [sp+8h] [bp-20208h] BYREF
  int v10[7]; // [sp+20210h] [bp+0h] BYREF
  unsigned int v11; // [sp+2022Ch] [bp+1Ch] BYREF
  _BYTE v12[72]; // [sp+20230h] [bp+20h] BYREF
  char v13; // [sp+20278h] [bp+68h] BYREF
  unsigned int v14; // [sp+2027Ch] [bp+6Ch]
  char s[2048]; // [sp+20280h] [bp+70h] BYREF

  v3 = a1 - 4;
  v4 = *(_DWORD *)(a2 + 28);
  v5 = &v11;
  do
  {
    v6 = *(_DWORD *)(v3 + 4);
    v3 += 4;
    v5[1] = bswap32(v6);
    ++v5;
  }
  while ( v5 != (unsigned int *)&v13 );
  v14 = bswap32(a3);
  sub_17C8C((int)v12, (int)v9, v10);
  v7 = bswap32(v11);
  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    snprintf(s, 0x800u, "htarget %08lx diff1 %08lx hash %08lx", v4, 0xFFFF, v7);
    sub_343C4(7, s, 0);
  }
  if ( v7 >= 0x10000 )
    return -1;
  else
    return v4 >= v7;
}
