// #Sireum

package t

import org.sireum._
import art._
import art.PortMode._
import art.DispatchPropertyProtocol._

// This file was auto-generated.  Do not edit

object Arch {
  val s_impl_Instance_pradio_radio : t.AttestationGate.Radio_i_pradio_radio_Bridge = {
    val write_port = Port[Base_Types.Bits] (id = 0, name = "s_impl_Instance_pradio_radio_write_port", mode = EventOut)

    t.AttestationGate.Radio_i_pradio_radio_Bridge(
      id = 0,
      name = "s_impl_Instance_pradio_radio",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      write_port = write_port
    )
  }
  val s_impl_Instance_preceiver_receiver : t.AttestationGate.Receiver_i_preceiver_receiver_Bridge = {
    val read_port = Port[Base_Types.Bits] (id = 1, name = "s_impl_Instance_preceiver_receiver_read_port", mode = EventIn)

    t.AttestationGate.Receiver_i_preceiver_receiver_Bridge(
      id = 1,
      name = "s_impl_Instance_preceiver_receiver",
      dispatchProtocol = Sporadic(min = 1),
      dispatchTriggers = None(),

      read_port = read_port
    )
  }
  val s_impl_Instance_Filter_Filter : t.AttestationGate.Filter_Impl_Filter_Filter_Bridge = {
    val Input = Port[Base_Types.Bits] (id = 2, name = "s_impl_Instance_Filter_Filter_Input", mode = EventIn)
    val Output = Port[Base_Types.Bits] (id = 3, name = "s_impl_Instance_Filter_Filter_Output", mode = EventOut)

    t.AttestationGate.Filter_Impl_Filter_Filter_Bridge(
      id = 2,
      name = "s_impl_Instance_Filter_Filter",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      Input = Input,
      Output = Output
    )
  }

  val ad : ArchitectureDescription = {
    TranspilerUtil.touch()

    ArchitectureDescription(
      components = ISZ (s_impl_Instance_pradio_radio, s_impl_Instance_preceiver_receiver, s_impl_Instance_Filter_Filter),

      connections = ISZ (Connection(from = s_impl_Instance_pradio_radio.write_port, to = s_impl_Instance_Filter_Filter.Input),
                         Connection(from = s_impl_Instance_Filter_Filter.Output, to = s_impl_Instance_preceiver_receiver.read_port))
    )
  }
}

object TranspilerUtil {
  def touch(): Unit = {
    if(F) {
      TranspilerToucher.touch()

      // add types used in Platform.receive and Platform.receiveAsync
      val mbox2Boolean_Payload: MBox2[Art.PortId, DataContent] = MBox2(0, Base_Types.Boolean_Payload(T))
      val mbox2OptionDataContent: MBox2[Art.PortId, Option[DataContent]] = MBox2(0, None())

      // touch process/thread timing properties
      println(Schedulers.s_impl_Instance_proc_timingProperties)
      println(Schedulers.s_impl_Instance_pradio_radio_timingProperties)
      println(Schedulers.s_impl_Instance_preceiver_receiver_timingProperties)
      println(Schedulers.s_impl_Instance_Filter_Filter_timingProperties)

      // touch each payload/type in case some are only used as a field in a record
      def printDataContent(a: art.DataContent): Unit = { println(s"${a}") }

      printDataContent(Base_Types.Bits_Payload(Base_Types.Bits_example()))
      printDataContent(art.Empty())

      {
        t.AttestationGate.Radio_i_pradio_radio_Bridge.c_initialization_api.get.logInfo("")
        t.AttestationGate.Radio_i_pradio_radio_Bridge.c_initialization_api.get.logDebug("")
        t.AttestationGate.Radio_i_pradio_radio_Bridge.c_initialization_api.get.logError("")
        t.AttestationGate.Radio_i_pradio_radio_Bridge.c_operational_api.get.logInfo("")
        t.AttestationGate.Radio_i_pradio_radio_Bridge.c_operational_api.get.logDebug("")
        t.AttestationGate.Radio_i_pradio_radio_Bridge.c_operational_api.get.logError("")
        t.AttestationGate.Radio_i_pradio_radio_Bridge.c_initialization_api.get.put_write_port(Base_Types.Bits_example())
        t.AttestationGate.Radio_i_pradio_radio_Bridge.c_operational_api.get.put_write_port(Base_Types.Bits_example())
      }
      {
        t.AttestationGate.Receiver_i_preceiver_receiver_Bridge.c_initialization_api.get.logInfo("")
        t.AttestationGate.Receiver_i_preceiver_receiver_Bridge.c_initialization_api.get.logDebug("")
        t.AttestationGate.Receiver_i_preceiver_receiver_Bridge.c_initialization_api.get.logError("")
        t.AttestationGate.Receiver_i_preceiver_receiver_Bridge.c_operational_api.get.logInfo("")
        t.AttestationGate.Receiver_i_preceiver_receiver_Bridge.c_operational_api.get.logDebug("")
        t.AttestationGate.Receiver_i_preceiver_receiver_Bridge.c_operational_api.get.logError("")
        val apiUsage_read_port: Option[Base_Types.Bits] = t.AttestationGate.Receiver_i_preceiver_receiver_Bridge.c_operational_api.get.get_read_port()
      }
      {
        t.AttestationGate.Filter_Impl_Filter_Filter_Bridge.c_initialization_api.get.logInfo("")
        t.AttestationGate.Filter_Impl_Filter_Filter_Bridge.c_initialization_api.get.logDebug("")
        t.AttestationGate.Filter_Impl_Filter_Filter_Bridge.c_initialization_api.get.logError("")
        t.AttestationGate.Filter_Impl_Filter_Filter_Bridge.c_operational_api.get.logInfo("")
        t.AttestationGate.Filter_Impl_Filter_Filter_Bridge.c_operational_api.get.logDebug("")
        t.AttestationGate.Filter_Impl_Filter_Filter_Bridge.c_operational_api.get.logError("")
        val apiUsage_Input: Option[Base_Types.Bits] = t.AttestationGate.Filter_Impl_Filter_Filter_Bridge.c_operational_api.get.get_Input()
        t.AttestationGate.Filter_Impl_Filter_Filter_Bridge.c_initialization_api.get.put_Output(Base_Types.Bits_example())
        t.AttestationGate.Filter_Impl_Filter_Filter_Bridge.c_operational_api.get.put_Output(Base_Types.Bits_example())
      }
    }
  }
}

