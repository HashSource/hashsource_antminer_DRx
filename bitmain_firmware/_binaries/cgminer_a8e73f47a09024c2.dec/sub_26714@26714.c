int __fastcall sub_26714(int a1)
{
  char *v2; // r0
  char *v3; // r4
  char *v4; // r6
  char *v5; // r0
  char *v6; // r0
  void *v7; // r7
  _DWORD *v8; // r8
  char *v9; // r0
  char *v10; // r10
  int v11; // r5
  char v13[2052]; // [sp+8h] [bp-804h] BYREF

  immedok((WINDOW *)dword_80560, 1);
  strcpy(v13, "Input server details.\n");
  sub_157F8(v13);
  v2 = sub_258F4("URL");
  v3 = v2;
  if ( *v2 == 45 && v2[1] == 49 && !v2[2] )
  {
    v4 = 0;
LABEL_20:
    immedok((WINDOW *)dword_80560, 0);
    v11 = 0;
    v7 = 0;
LABEL_19:
    free(v3);
    free(v4);
    free(v7);
    return v11;
  }
  v5 = sub_258F4("Username");
  v4 = v5;
  if ( *v5 == 45 && v5[1] == 49 && !v5[2] )
    goto LABEL_20;
  v6 = sub_258F4("Password");
  v7 = v6;
  if ( *v6 == 45 && v6[1] == 49 && !v6[2] )
  {
    free(v6);
    v7 = calloc(1u, 1u);
  }
  v8 = sub_1B268();
  if ( !sub_11C2C((int)v8, v3) && strncmp(v3, "http://", 7u) && strncmp(v3, "https://", 8u) )
  {
    v9 = (char *)malloc(0x100u);
    v10 = v9;
    if ( !v9 )
    {
      strcpy(v13, "Failed to malloc httpinput");
      sub_3F178(3, v13, 1);
      sub_134A4(1);
    }
    strcpy(v9, "http://");
    strncat(v9, v3, 0xF8u);
    free(v3);
    v3 = v10;
  }
  v11 = sub_265F0((int)v8, a1, (int)v3, v4, (const char *)v7);
  immedok((WINDOW *)dword_80560, 0);
  if ( !v11 )
    goto LABEL_19;
  return v11;
}
