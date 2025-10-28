void *frontend_runtime_kas()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_1976A0 = (int)stratum_connect;
  dword_1976A4 = (int)stratum_disconnect;
  dword_1976A8 = (int)stratum_recv_line;
  dword_1976AC = (int)stratum_send_line;
  dword_1976B0 = (int)stratum_login_base;
  dword_1976B4 = (int)stratum_handle_method_base;
  dword_1976B8 = (int)pre_stratum_handle_method_base;
  dword_1976BC = (int)stratum_handle_response_kas;
  dword_1976C0 = (int)sub_489F8;
  dword_1976C4 = (int)sub_47CFC;
  dword_1976C8 = (int)sub_494A8;
  dword_1976CC = (int)stratum_authorize_kas;
  dword_1976D0 = (int)sub_4817C;
  LODWORD(v0) = diff_to_target_kas;
  HIDWORD(v0) = target_to_double_diff_kas;
  dword_1976D4 = (int)sub_47E88;
  dword_1976D8 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_1976E0 = v0;
  dword_1976DC = (int)target_to_diff_kas;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_1976A0, 0x54u);
}
