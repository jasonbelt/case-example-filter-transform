#include <Radio_i_pradio_radio_adapter.h>

Unit t_AttestationGate_Radio_i_pradio_radio_adapter_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Radio_i_pradio_radio_adapter.c", "", "t_AttestationGate_Radio_i_pradio_radio_adapter_initialiseArchitecture", 0);

  t_Radio_i_pradio_radio_radio_initialiseArchitecture(SF_LAST);
}

Unit t_AttestationGate_Radio_i_pradio_radio_adapter_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Radio_i_pradio_radio_adapter.c", "", "t_AttestationGate_Radio_i_pradio_radio_adapter_initialiseEntryPoint", 0);

  t_Radio_i_pradio_radio_radio_initialiseEntryPoint(SF_LAST);
}

Unit t_AttestationGate_Radio_i_pradio_radio_adapter_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Radio_i_pradio_radio_adapter.c", "", "t_AttestationGate_Radio_i_pradio_radio_adapter_computeEntryPoint", 0);

  t_Radio_i_pradio_radio_radio_computeEntryPoint(SF_LAST);
}

art_Bridge_EntryPoints t_AttestationGate_Radio_i_pradio_radio_adapter_entryPoints(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Radio_i_pradio_radio_adapter.c", "", "t_AttestationGate_Radio_i_pradio_radio_adapter_entryPoints", 0);

  return t_Radio_i_pradio_radio_radio_entryPoints(SF_LAST);
}
