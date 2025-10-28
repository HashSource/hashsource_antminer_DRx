int sub_F798()
{
  int v0; // r0
  int v1; // r5
  FILE *v3; // [sp+4h] [bp-18h] BYREF
  _DWORD v4[4]; // [sp+8h] [bp-14h] BYREF
  _BYTE v5[4]; // [sp+18h] [bp-4h] BYREF

  v4[0] = -442515456;
  v4[1] = -442503168;
  v4[2] = &v3;
  v4[3] = sub_E7EC;
  sub_10FC4(v4, v5);
  v0 = curl_global_init(3);
  v1 = curl_easy_init(v0);
  curl_easy_setopt(v1, 10002, "www.baidu.com");
  v3 = fopen("save.txt", "w");
  if ( !v3 )
  {
    curl_easy_cleanup(v1);
    exit(1);
  }
  curl_easy_setopt(v1, 20011, v4);
  curl_easy_perform(v1);
  return curl_easy_cleanup(v1);
}
