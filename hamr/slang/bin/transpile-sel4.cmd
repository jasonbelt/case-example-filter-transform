::#! 2> /dev/null                                   #
@ 2>/dev/null # 2>nul & echo off & goto BOF         #
if [ -z ${SIREUM_HOME} ]; then                      #
  echo "Please set SIREUM_HOME env var"             #
  exit -1                                           #
fi                                                  #
exec ${SIREUM_HOME}/bin/sireum slang run "$0" "$@"  #
:BOF
setlocal
if not defined SIREUM_HOME (
  echo Please set SIREUM_HOME env var
  exit /B -1
)
%SIREUM_HOME%\\bin\\sireum.bat slang run "%0" %*
exit /B %errorlevel%
::!#
// #Sireum

import org.sireum._

// This file was auto-generated.  Do not edit

val SCRIPT_HOME: Os.Path = Os.slashDir
val PATH_SEP: String = Os.pathSep

val Radio_i_pradio_radio: ISZ[String] = ISZ(
  "--sourcepath", s"${SCRIPT_HOME}/../src/main/bridge${PATH_SEP}${SCRIPT_HOME}/../src/main/component${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/t/AttestationGate${PATH_SEP}${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/t/Radio_i_pradio_radio",
  "--output-dir", s"${SCRIPT_HOME}/../../camkes/slang_libraries/Radio_i_pradio_radio",
  "--name", "Radio_i_pradio_radio",
  "--apps", "t.Radio_i_pradio_radio.radio",
  "--fingerprint", "3",
  "--bits", "32",
  "--string-size", "256",
  "--sequence-size", "16",
  "--sequence", s"MS[Z,Option[art.Bridge]]=1;IS[Z,art.UPort]=1;IS[Z,B]=256",
  "--constants", s"art.Art.maxComponents=1;art.Art.maxPorts=1",
  "--cmake-includes", s"+${SCRIPT_HOME}/settings_Radio_i_pradio_radio.cmake",
  "--forward", "art.ArtNative=t.Radio_i_pradio_radio.radio",
  "--stack-size", "16777216",
  "--stable-type-id",
  "--exts", s"${SCRIPT_HOME}/../../c/ext-c/ext.c${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/ext.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/Radio_i_pradio_radio/Radio_i_pradio_radio.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/Radio_i_pradio_radio/Radio_i_pradio_radio.c${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/Radio_i_pradio_radio/Radio_i_pradio_radio_api.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/Radio_i_pradio_radio/Radio_i_pradio_radio_api.c${PATH_SEP}${SCRIPT_HOME}/../../c/etc_seL4/adapters/Radio_i_pradio_radio/Radio_i_pradio_radio_adapter.h${PATH_SEP}${SCRIPT_HOME}/../../c/etc_seL4/adapters/Radio_i_pradio_radio/Radio_i_pradio_radio_adapter.c",
  "--exclude-build", "t.AttestationGate.Radio_i_pradio_radio,t.AttestationGate.Receiver_i_preceiver_receiver,t.AttestationGate.Filter_Impl_Filter_Filter",
  "--lib-only",
  "--verbose")

val Receiver_i_preceiver_receiver: ISZ[String] = ISZ(
  "--sourcepath", s"${SCRIPT_HOME}/../src/main/bridge${PATH_SEP}${SCRIPT_HOME}/../src/main/component${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/t/AttestationGate${PATH_SEP}${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/t/Receiver_i_preceiver_receiver",
  "--output-dir", s"${SCRIPT_HOME}/../../camkes/slang_libraries/Receiver_i_preceiver_receiver",
  "--name", "Receiver_i_preceiver_receiver",
  "--apps", "t.Receiver_i_preceiver_receiver.receiver",
  "--fingerprint", "3",
  "--bits", "32",
  "--string-size", "256",
  "--sequence-size", "16",
  "--sequence", s"MS[Z,Option[art.Bridge]]=1;IS[Z,art.UPort]=1;IS[Z,B]=256",
  "--constants", s"art.Art.maxComponents=1;art.Art.maxPorts=1",
  "--cmake-includes", s"+${SCRIPT_HOME}/settings_Receiver_i_preceiver_receiver.cmake",
  "--forward", "art.ArtNative=t.Receiver_i_preceiver_receiver.receiver",
  "--stack-size", "16777216",
  "--stable-type-id",
  "--exts", s"${SCRIPT_HOME}/../../c/ext-c/ext.c${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/ext.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/Receiver_i_preceiver_receiver/Receiver_i_preceiver_receiver.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/Receiver_i_preceiver_receiver/Receiver_i_preceiver_receiver.c${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/Receiver_i_preceiver_receiver/Receiver_i_preceiver_receiver_api.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/Receiver_i_preceiver_receiver/Receiver_i_preceiver_receiver_api.c${PATH_SEP}${SCRIPT_HOME}/../../c/etc_seL4/adapters/Receiver_i_preceiver_receiver/Receiver_i_preceiver_receiver_adapter.h${PATH_SEP}${SCRIPT_HOME}/../../c/etc_seL4/adapters/Receiver_i_preceiver_receiver/Receiver_i_preceiver_receiver_adapter.c",
  "--exclude-build", "t.AttestationGate.Radio_i_pradio_radio,t.AttestationGate.Receiver_i_preceiver_receiver,t.AttestationGate.Filter_Impl_Filter_Filter",
  "--lib-only",
  "--verbose")

val Filter_Impl_Filter_Filter: ISZ[String] = ISZ(
  "--sourcepath", s"${SCRIPT_HOME}/../src/main/bridge${PATH_SEP}${SCRIPT_HOME}/../src/main/component${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/t/AttestationGate${PATH_SEP}${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/t/Filter_Impl_Filter_Filter",
  "--output-dir", s"${SCRIPT_HOME}/../../camkes/slang_libraries/Filter_Impl_Filter_Filter",
  "--name", "Filter_Impl_Filter_Filter",
  "--apps", "t.Filter_Impl_Filter_Filter.Filter",
  "--fingerprint", "3",
  "--bits", "32",
  "--string-size", "256",
  "--sequence-size", "16",
  "--sequence", s"MS[Z,Option[art.Bridge]]=1;IS[Z,art.UPort]=2;IS[Z,B]=256",
  "--constants", s"art.Art.maxComponents=1;art.Art.maxPorts=2",
  "--cmake-includes", s"+${SCRIPT_HOME}/settings_Filter_Impl_Filter_Filter.cmake",
  "--forward", "art.ArtNative=t.Filter_Impl_Filter_Filter.Filter",
  "--stack-size", "16777216",
  "--stable-type-id",
  "--exts", s"${SCRIPT_HOME}/../../c/ext-c/ext.c${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/ext.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/Filter_Impl_Filter_Filter/Filter_Impl_Filter_Filter.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/Filter_Impl_Filter_Filter/Filter_Impl_Filter_Filter.c${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/Filter_Impl_Filter_Filter/Filter_Impl_Filter_Filter_api.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/Filter_Impl_Filter_Filter/Filter_Impl_Filter_Filter_api.c${PATH_SEP}${SCRIPT_HOME}/../../c/etc_seL4/adapters/Filter_Impl_Filter_Filter/Filter_Impl_Filter_Filter_adapter.h${PATH_SEP}${SCRIPT_HOME}/../../c/etc_seL4/adapters/Filter_Impl_Filter_Filter/Filter_Impl_Filter_Filter_adapter.c",
  "--exclude-build", "t.AttestationGate.Radio_i_pradio_radio,t.AttestationGate.Receiver_i_preceiver_receiver,t.AttestationGate.Filter_Impl_Filter_Filter",
  "--lib-only",
  "--verbose")

val SlangTypeLibrary: ISZ[String] = ISZ(
  "--sourcepath", s"${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/t/SlangTypeLibrary",
  "--output-dir", s"${SCRIPT_HOME}/../../camkes/slang_libraries/SlangTypeLibrary",
  "--name", "SlangTypeLibrary",
  "--apps", "t.SlangTypeLibrary.SlangTypeLibrary",
  "--fingerprint", "3",
  "--bits", "32",
  "--string-size", "256",
  "--sequence-size", "1",
  "--sequence", s"IS[Z,B]=256",
  "--cmake-includes", s"+${SCRIPT_HOME}/settings_SlangTypeLibrary.cmake",
  "--forward", "art.ArtNative=t.SlangTypeLibrary.SlangTypeLibrary",
  "--stack-size", "16777216",
  "--stable-type-id",
  "--lib-only",
  "--verbose")

val projects: ISZ[ISZ[String]] = ISZ(
  Radio_i_pradio_radio,
  Receiver_i_preceiver_receiver,
  Filter_Impl_Filter_Filter,
  SlangTypeLibrary
)

println("Initializing runtime library ...")
Sireum.initRuntimeLibrary()

for(p <- projects) {
  Sireum.run(ISZ[String]("slang", "transpilers", "c") ++ p)
}

//ops.ISZOps(projects).parMap(p =>
//  Sireum.run(ISZ[String]("slang", "transpilers", "c") ++ p)
//)
