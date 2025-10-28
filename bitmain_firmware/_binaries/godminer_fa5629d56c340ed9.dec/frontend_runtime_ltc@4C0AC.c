void *frontend_runtime_ltc()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_19779C = (int)stratum_connect;
  dword_1977A0 = (int)stratum_disconnect;
  dword_1977A4 = (int)stratum_recv_line;
  dword_1977A8 = (int)stratum_send_line;
  dword_1977AC = (int)stratum_login_base;
  dword_1977B0 = (int)stratum_handle_method_base;
  dword_1977B4 = (int)pre_stratum_handle_method_base;
  dword_1977B8 = (int)stratum_handle_response_base;
  dword_1977BC = (int)sub_4BFE4;
  dword_1977C0 = (int)sub_4B864;
  dword_1977C4 = (int)stratum_subscribe_base;
  dword_1977C8 = (int)stratum_authorize_base;
  dword_1977CC = (int)sub_4B89C;
  LODWORD(v0) = diff_to_target_ltc;
  HIDWORD(v0) = target_to_double_diff_ltc;
  dword_1977D0 = (int)sub_4B5AC;
  dword_1977D4 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_1977DC = v0;
  dword_1977D8 = (int)target_to_diff_ltc;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_19779C, 0x54u);
}
