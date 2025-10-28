int __fastcall sub_42190(int a1)
{
  int v1; // r4
  _DWORD *v2; // r1
  __int16 v3; // r3
  unsigned int v4; // r2
  int v5; // t1
  int *v6; // r7
  int *v7; // r5
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r2
  int *v15; // r0
  int *v16; // r0
  int *v17; // r0
  _DWORD s[11]; // [sp+14h] [bp-830h] BYREF
  char v19[2052]; // [sp+40h] [bp-804h] BYREF

  v1 = *(_DWORD *)(*(_DWORD *)(a1 + 36) + 20);
  *(_DWORD *)(v1 + 4534) = a1;
  if ( pthread_mutex_init((pthread_mutex_t *)(v1 + 4858), 0) )
  {
    v16 = _errno_location();
    snprintf(
      v19,
      0x800u,
      "Failed to pthread_mutex_init errno=%d in %s %s():%d",
      *v16,
      "driver-btm-dcr.c",
      "bitmain_dcr_prepare",
      6692);
    sub_343C4(3, v19, 1);
    sub_26B0C(1);
  }
  if ( pthread_mutex_init((pthread_mutex_t *)v1, 0) )
  {
    v17 = _errno_location();
    snprintf(
      v19,
      0x800u,
      "Failed to pthread_mutex_init errno=%d in %s %s():%d",
      *v17,
      "driver-btm-dcr.c",
      "bitmain_dcr_prepare",
      6693);
    sub_343C4(3, v19, 1);
    sub_26B0C(1);
  }
  if ( pthread_rwlock_init((pthread_rwlock_t *)(v1 + 24), 0) )
  {
    v15 = _errno_location();
    snprintf(
      v19,
      0x800u,
      "Failed to pthread_rwlock_init errno=%d in %s %s():%d",
      *v15,
      "driver-btm-dcr.c",
      "bitmain_dcr_prepare",
      6693);
    sub_343C4(3, v19, 1);
    sub_26B0C(1);
  }
  memset(s, 0, sizeof(s));
  BYTE2(s[3]) = dword_6D7FC;
  LOWORD(s[3]) = 18438;
  HIBYTE(s[3]) = 80;
  s[1] = 3000000;
  LOWORD(s[5]) = 2570;
  LOBYTE(s[0]) = 81;
  LOBYTE(s[7]) = 4;
  HIWORD(s[0]) = 24;
  LOBYTE(s[2]) = (2 * (byte_72B63 & 1)) | 0xF5;
  HIWORD(s[7]) = 300;
  s[8] = 16843352;
  BYTE1(s[2]) = 15;
  s[9] = 117455361;
  LOWORD(s[4]) = dword_6D800;
  HIWORD(s[4]) = dword_6D804;
  if ( (unsigned __int16)dword_6D800 == 600 )
  {
    dword_72AFC = 0;
    dword_6D804 = 870;
    HIWORD(s[4]) = 870;
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
    {
      snprintf(v19, 0x800u, "%s, working in normal mode. frequency %dMHz.", "bitmain_dcr_prepare", 600);
      goto LABEL_9;
    }
  }
  else if ( (unsigned __int16)dword_6D800 == 450 )
  {
    dword_72AFC = 1;
    dword_6D804 = 800;
    HIWORD(s[4]) = 800;
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
    {
      snprintf(v19, 0x800u, "%s, working in low power mode. frequency %dMHz.", "bitmain_dcr_prepare", 450);
      goto LABEL_9;
    }
  }
  else if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    snprintf(
      v19,
      0x800u,
      "%s, working frequency %dMHz voltage %d0mV.",
      "bitmain_dcr_prepare",
      (unsigned __int16)dword_6D800,
      (unsigned __int16)dword_6D804);
LABEL_9:
    sub_343C4(5, v19, 0);
  }
  v2 = s;
  v3 = 19156;
  LOWORD(v4) = 255;
  while ( 1 )
  {
    v4 = (unsigned __int16)(v3 ^ ((_WORD)v4 << 8));
    if ( v2 == (_DWORD *)((char *)&s[10] + 1) )
      break;
    v5 = *((unsigned __int8 *)v2 + 1);
    v2 = (_DWORD *)((char *)v2 + 1);
    v3 = *(_WORD *)&aBitmainDcrDete_0[2 * (v5 ^ (v4 >> 8)) + 100];
  }
  v6 = s;
  v7 = (int *)(v1 + 4882);
  HIWORD(s[10]) = v4;
  do
  {
    v7 += 4;
    v8 = *v6;
    v9 = v6[1];
    v10 = v6[2];
    v11 = v6[3];
    v6 += 4;
    *(v7 - 4) = v8;
    *(v7 - 3) = v9;
    *(v7 - 2) = v10;
    *(v7 - 1) = v11;
  }
  while ( v6 != &s[8] );
  v12 = v6[1];
  v13 = v6[2];
  *v7 = *v6;
  v7[1] = v12;
  v7[2] = v13;
  memset((void *)(v1 + 2230), 0, 0x900u);
  sub_373A8(v1);
  sub_41888(v1);
  return 1;
}
