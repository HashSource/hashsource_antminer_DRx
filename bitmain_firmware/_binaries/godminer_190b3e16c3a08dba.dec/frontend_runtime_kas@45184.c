void *frontend_runtime_kas()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_17AC6C = (int)stratum_connect;
  dword_17AC70 = (int)stratum_disconnect;
  dword_17AC74 = (int)stratum_recv_line;
  dword_17AC78 = (int)stratum_send_line;
  dword_17AC7C = (int)stratum_login_base;
  dword_17AC80 = (int)stratum_handle_method_base;
  dword_17AC84 = (int)pre_stratum_handle_method_base;
  dword_17AC88 = (int)stratum_handle_response_kas;
  dword_17AC8C = (int)sub_44354;
  dword_17AC90 = (int)sub_441B0;
  dword_17AC94 = (int)sub_4516C;
  dword_17AC98 = (int)stratum_authorize_kas;
  dword_17AC9C = (int)sub_43E2C;
  LODWORD(v0) = diff_to_target_kas;
  HIDWORD(v0) = target_to_double_diff_kas;
  dword_17ACA0 = (int)sub_43B40;
  dword_17ACA4 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_17ACAC = v0;
  dword_17ACA8 = (int)target_to_diff_kas;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_17AC6C, 0x54u);
}
