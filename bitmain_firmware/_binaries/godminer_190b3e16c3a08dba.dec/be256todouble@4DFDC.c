int __fastcall be256todouble(unsigned __int64 *a1)
{
  sub_12E0FC(_byteswap_uint64(*a1));
  sub_12E0FC(_byteswap_uint64(a1[1]));
  sub_12E0FC(_byteswap_uint64(a1[2]));
  return sub_12E0FC(_byteswap_uint64(a1[3]));
}
