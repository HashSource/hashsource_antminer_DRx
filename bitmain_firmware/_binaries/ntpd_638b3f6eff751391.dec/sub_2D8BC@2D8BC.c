void sub_2D8BC()
{
  double v0; // d18
  double v1; // d17
  FILE *v2; // r6
  unsigned int v3; // r0
  unsigned int v4; // r5
  const char *v5; // r0
  FILE *v6; // r0
  FILE *v7; // r7
  const char *v8; // r4
  int v9[3]; // [sp+30h] [bp-Ch] BYREF

  if ( dword_CB588 )
  {
    sub_4CBA8(v9);
    sub_1DAE8((int)&dword_80048, v9[0]);
    v2 = (FILE *)dword_80048;
    v3 = v9[0] % 0x15180u;
    v4 = v9[0] / 0x15180u + 15020;
    v9[0] %= 0x15180u;
    if ( dword_80048 )
    {
      v5 = (const char *)sub_4F124(v3, v9[1], 0, 3, 0);
      fprintf(
        v2,
        "%lu %s %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu\n",
        v4,
        v5,
        dword_CB548 - dword_CB468,
        dword_CB4A0,
        dword_CB474,
        dword_CB484,
        dword_CB4C0,
        dword_CB4DC,
        dword_CB490,
        dword_CB4F8,
        dword_CB47C,
        dword_CB4C4,
        dword_CB4E4);
      fflush((FILE *)dword_80048);
      sub_26D0C();
    }
  }
  v0 = dbl_80070 - dbl_CABA8;
  dbl_80070 = dbl_CABA8;
  if ( fabs(v0) <= dbl_7A1C0 && dword_CB57C && dword_CB58C )
  {
    dword_CB58C = 0;
    v1 = dbl_CB580 * 0.5;
    dbl_CB580 = dbl_CB580 * 0.5;
    if ( dword_7CF4C )
      printf(
        "write_stats: wander %.6lf thresh %.6lf, freq %.6lf\n",
        dbl_CABA0 * 1000000.0,
        v1 * 1000000.0,
        dbl_CABA8 * 1000000.0);
    if ( byte_CB4B0 != 3 && dbl_CABA0 > dbl_CB580 )
    {
      dbl_CB580 = *(double *)&dword_7A5F0;
      v6 = fopen((const char *)dword_7FFF0, "w");
      v7 = v6;
      if ( v6 )
      {
        fprintf(v6, "%.3f\n", dbl_CABA8 * 1000000.0);
        fclose(v7);
        v8 = (const char *)dword_7FFF0;
        if ( rename((const char *)dword_7FFF0, (const char *)dword_CB57C) )
          sub_4FE78(4, "Unable to rename temp drift file %s to %s, %m", v8, (const char *)dword_CB57C);
      }
      else
      {
        sub_4FE78(3, "frequency file %s: %m", (const char *)dword_7FFF0);
      }
    }
  }
}
