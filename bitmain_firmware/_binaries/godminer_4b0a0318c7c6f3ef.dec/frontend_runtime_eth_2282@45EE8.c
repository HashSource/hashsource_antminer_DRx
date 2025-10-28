void *frontend_runtime_eth_2282()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_1965A4 = (int)stratum_connect;
  dword_1965A8 = (int)stratum_disconnect;
  dword_1965AC = (int)stratum_recv_line;
  dword_1965B0 = (int)stratum_send_line;
  dword_1965B4 = (int)stratum_login_base;
  dword_1965B8 = (int)stratum_handle_method_eth_2282;
  dword_1965BC = (int)pre_stratum_handle_method_eth_2282;
  dword_1965C0 = (int)stratum_handle_response_eth_2282;
  dword_1965C4 = (int)sub_44E9C;
  dword_1965C8 = (int)sub_44DC4;
  dword_1965CC = (int)sub_43FE8;
  dword_1965D0 = (int)stratum_authorize_eth_2282;
  dword_1965D4 = (int)sub_448FC;
  LODWORD(v0) = diff_to_target_eth_2282;
  HIDWORD(v0) = target_to_double_diff_eth_2282;
  dword_1965D8 = (int)sub_44714;
  dword_1965DC = (int)sub_44534;
  *(_QWORD *)&dword_1965E4 = v0;
  dword_1965E0 = (int)target_to_diff_eth_2282;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_1965A4, 0x54u);
}
