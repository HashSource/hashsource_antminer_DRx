_DWORD *dhash_content_ckb_2042()
{
  _DWORD *v0; // r0
  int *v1; // r12
  _DWORD *v2; // r4
  int *v3; // lr
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r1

  v0 = calloc(1u, 0x18u);
  LOWORD(v1) = -7036;
  v2 = v0;
  HIWORD(v1) = (unsigned int)&unk_146A08 >> 16;
  v3 = v0;
  v4 = *v1;
  v5 = v1[1];
  v6 = v1[2];
  v7 = v1[3];
  v1 += 4;
  *v3 = v4;
  v3[1] = v5;
  v3[2] = v6;
  v3[3] = v7;
  v3 += 4;
  v8 = v1[1];
  *v3 = *v1;
  v3[1] = v8;
  return v2;
}
