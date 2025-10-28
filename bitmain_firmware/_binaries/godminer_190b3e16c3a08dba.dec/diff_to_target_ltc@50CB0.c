int __fastcall diff_to_target_ltc(unsigned __int64 *a1)
{
  double v1; // d0
  __int64 v3; // r6
  double v4; // r0
  double v5; // d8
  __int64 v6; // kr00_8
  double v7; // r0
  double v8; // d8
  __int64 v9; // kr08_8
  double v10; // r0
  unsigned __int64 v11; // r0

  if ( v1 <= 0.0 )
  {
    v11 = 0;
    v3 = 0xFFFF00000000LL;
    v6 = 0;
    v9 = 0;
  }
  else
  {
    v3 = (unsigned __int64)(1.7668201e72 / v1 * 1.59309191e-58);
    LODWORD(v4) = sub_12E0FC(v3);
    v5 = 1.7668201e72 / v1 - v4 * 6.27710174e57;
    v6 = (unsigned __int64)(v5 * 2.93873588e-39);
    LODWORD(v7) = sub_12E0FC(v6);
    v8 = v5 - v7 * 3.40282367e38;
    v9 = (unsigned __int64)(v8 * 5.42101086e-20);
    LODWORD(v10) = sub_12E0FC(v9);
    v11 = (unsigned __int64)(v8 - v10 * 1.84467441e19);
  }
  *a1 = v11;
  a1[1] = v9;
  a1[2] = v6;
  a1[3] = v3;
  return v6;
}
