void *frontend_runtime_ks5()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_197748 = (int)stratum_connect;
  dword_19774C = (int)stratum_disconnect;
  dword_197750 = (int)stratum_recv_line;
  dword_197754 = (int)stratum_send_line;
  dword_197758 = (int)stratum_login_base;
  dword_19775C = (int)stratum_handle_method_base;
  dword_197760 = (int)pre_stratum_handle_method_base;
  dword_197764 = (int)stratum_handle_response_ks5;
  dword_197768 = (int)sub_4A9E8;
  dword_19776C = (int)sub_49CEC;
  dword_197770 = (int)sub_4B498;
  dword_197774 = (int)stratum_authorize_ks5;
  dword_197778 = (int)sub_4A16C;
  LODWORD(v0) = diff_to_target_ks5;
  HIDWORD(v0) = target_to_double_diff_ks5;
  dword_19777C = (int)sub_49E78;
  dword_197780 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_197788 = v0;
  dword_197784 = (int)target_to_diff_ks5;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_197748, 0x54u);
}
