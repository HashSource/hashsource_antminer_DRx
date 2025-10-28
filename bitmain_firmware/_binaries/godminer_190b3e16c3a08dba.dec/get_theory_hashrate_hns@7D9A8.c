int __fastcall get_theory_hashrate_hns(int a1, double *a2)
{
  float v2; // s14

  v2 = *(float *)(a1 + 924);
  *a2 = v2 * 5520.0 * 1000.0 * 1000.0;
  return 0;
}
