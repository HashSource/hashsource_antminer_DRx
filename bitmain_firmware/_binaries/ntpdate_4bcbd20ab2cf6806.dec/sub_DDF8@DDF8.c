void __fastcall sub_DDF8(int pri, const char *a2)
{
  int v4; // r4
  char *v5; // r0
  int v6; // r4
  int v7; // r6
  const char *v8; // r10
  const char *v9; // r9
  bool v10; // cc
  const char *v11; // r8
  int *v12; // r3
  FILE *v13; // r4
  __pid_t v14; // r0
  const char *v15; // r6
  FILE *v16; // r5
  __pid_t v17; // r0
  char v18; // [sp+10h] [bp-8h] BYREF
  __int16 v19; // [sp+14h] [bp-4h] BYREF

  v4 = dword_2405C;
  v19 = 10;
  v18 = 0;
  if ( dword_2405C != dword_23FDC )
  {
    dword_23FDC = dword_2405C;
    v5 = strrchr((const char *)dword_2405C, 47);
    if ( v5 )
      dword_23FE0 = (int)(v5 + 1);
    else
      dword_23FE0 = v4;
  }
  v6 = dword_23FE4;
  if ( dword_212F8 )
  {
    v7 = 0;
    syslog(pri, "%s", a2);
  }
  else if ( dword_28060 )
  {
    v7 = 1;
  }
  else
  {
    v6 = 1;
    v7 = 0;
  }
  if ( dword_21F80 > 0 )
    v6 = 1;
  if ( v6 | v7 )
  {
    v8 = (const char *)sub_FD48();
    if ( a2[strlen(a2) - 1] == 10 )
      v9 = &v18;
    else
      v9 = (const char *)&v19;
    if ( v6 )
    {
      v10 = pri <= 3;
      v11 = (const char *)dword_23FE0;
      if ( v10 )
        v12 = &stderr;
      else
        v12 = &stdout;
      v13 = (FILE *)*v12;
      v14 = getpid();
      fprintf(v13, "%s %s[%d]: %s%s", v8, v11, v14, a2, v9);
      fflush(v13);
    }
    if ( v7 )
    {
      v15 = (const char *)dword_23FE0;
      v16 = (FILE *)dword_28060;
      v17 = getpid();
      fprintf(v16, "%s %s[%d]: %s%s", v8, v15, v17, a2, v9);
      fflush((FILE *)dword_28060);
    }
  }
}
