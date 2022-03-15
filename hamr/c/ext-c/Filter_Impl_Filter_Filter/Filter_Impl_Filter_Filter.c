#include <Filter_Impl_Filter_Filter_api.h>
#include <Filter_Impl_Filter_Filter.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

static char* component_id = "s_impl_Instance_Filter_Filter";

Unit t_AttestationGate_Filter_Impl_Filter_Filter_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Filter_Impl_Filter_Filter.c", "", "t_AttestationGate_Filter_Impl_Filter_Filter_initialise_", 0);

  printf("%s: t_AttestationGate_Filter_Impl_Filter_Filter_initialise_ called\n", component_id);

  // example usage of api setters

  uint8_t t0[numBytes_t_Data_Types_Temp_i];
  byte_array_default(SF t0, numBits_t_Data_Types_Temp_i, numBytes_t_Data_Types_Temp_i);
  api_put_Output__t_AttestationGate_Filter_Impl_Filter_Filter(SF numBits_t_Data_Types_Temp_i, t0);

  /* example usage of api loggers. Commented out as the constructed String may be too long
  api_logInfo__t_AttestationGate_Filter_Impl_Filter_Filter(SF string("Example logInfo"));

  api_logDebug__t_AttestationGate_Filter_Impl_Filter_Filter(SF string("Example logDebug"));

  api_logError__t_AttestationGate_Filter_Impl_Filter_Filter(SF string("Example logError"));
  */
}

Unit t_AttestationGate_Filter_Impl_Filter_Filter_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Filter_Impl_Filter_Filter.c", "", "t_AttestationGate_Filter_Impl_Filter_Filter_finalise_", 0);
}

Unit t_AttestationGate_Filter_Impl_Filter_Filter_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Filter_Impl_Filter_Filter.c", "", "t_AttestationGate_Filter_Impl_Filter_Filter_timeTriggered_", 0);

  // examples of api getter usage

  uint8_t t0[numBytes_t_Data_Types_Temp_i];
  size_t t0_numBits;
  if(api_get_Input__t_AttestationGate_Filter_Impl_Filter_Filter(SF &t0_numBits, t0)) {
    // sanity check
    sfAssert((Z) t0_numBits == numBits_t_Data_Types_Temp_i, "numBits received does not match expected")

    printf("%s: Received data on event data port Input: \n", component_id);
    hex_dump(SF t0, numBytes_t_Data_Types_Temp_i);

    /* alternative using logInfo.  Commented out as the constructed String may be too large
    DeclNewString(Input_str);
    String__append(SF (String) &Input_str, string("Received data on event data port Input: "));
    byte_array_string(SF (String) &Input_str, t0, numBytes_t_Data_Types_Temp_i);
    api_logInfo__t_AttestationGate_Filter_Impl_Filter_Filter(SF (String) &Input_str);
    */
  }
}
