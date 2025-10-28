void *frontend_runtime_dcr()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_17AB2C = (int)stratum_connect;
  dword_17AB30 = (int)stratum_disconnect;
  dword_17AB34 = (int)stratum_recv_line;
  dword_17AB38 = (int)stratum_send_line;
  dword_17AB3C = (int)stratum_login_base;
  dword_17AB40 = (int)stratum_handle_method_base;
  dword_17AB44 = (int)pre_stratum_handle_method_base;
  dword_17AB48 = (int)stratum_handle_response_base;
  dword_17AB4C = (int)sub_40038;
  dword_17AB50 = (int)sub_3FFD0;
  dword_17AB54 = (int)stratum_subscribe_base;
  dword_17AB58 = (int)stratum_authorize_base;
  dword_17AB5C = (int)sub_3F4E4;
  LODWORD(v0) = diff_to_target_dcr;
  HIDWORD(v0) = target_to_double_diff_dcr;
  dword_17AB60 = (int)sub_3F1A8;
  dword_17AB64 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_17AB6C = v0;
  dword_17AB68 = (int)target_to_diff_dcr;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_17AB2C, 0x54u);
}
