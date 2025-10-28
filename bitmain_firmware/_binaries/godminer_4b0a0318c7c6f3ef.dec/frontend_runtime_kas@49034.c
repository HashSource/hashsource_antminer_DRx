void *frontend_runtime_kas()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_196690 = (int)stratum_connect;
  dword_196694 = (int)stratum_disconnect;
  dword_196698 = (int)stratum_recv_line;
  dword_19669C = (int)stratum_send_line;
  dword_1966A0 = (int)stratum_login_base;
  dword_1966A4 = (int)stratum_handle_method_base;
  dword_1966A8 = (int)pre_stratum_handle_method_base;
  dword_1966AC = (int)stratum_handle_response_kas;
  dword_1966B0 = (int)sub_4856C;
  dword_1966B4 = (int)sub_47870;
  dword_1966B8 = (int)sub_4901C;
  dword_1966BC = (int)stratum_authorize_kas;
  dword_1966C0 = (int)sub_47CF0;
  LODWORD(v0) = diff_to_target_kas;
  HIDWORD(v0) = target_to_double_diff_kas;
  dword_1966C4 = (int)sub_479FC;
  dword_1966C8 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_1966D0 = v0;
  dword_1966CC = (int)target_to_diff_kas;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_196690, 0x54u);
}
