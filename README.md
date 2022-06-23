# Uart_debuger

<!-- TODO: An introduction about the project and its use-cases shall be written here. -->
## How to use it
### Prerequisites
- The current code was built using *gcc version 7.5.0*

### Build the debugger by executing the following command:

```shell
make gdb_uart
```

### Run the uart debugger 

```shell
./build/gdb_uart
```
----------------------------

## Design snippets
```plantuml
@startuml "ClassDiagram"
' Objects
class UartManager {
  execel_manager: ExcelManager
  file_manager: FileMAnager
  +logmessages()
  +storeanalysis()
}
class Logger {
  clock: String
  +Write()
}
class UartAdapter {
  frame: Frame
  baudrate: Int
  comport: String
  +analysisbuffer(buffer): frame
}
class FileManager {
  buffer
  +getdata()
  +writedata()
}
class Frame <<struct>> {
  character: char
  bits[8]: bool
  graphical_buffer: String
}
class ExcelManager {
  excelfile: String
  +Excel_open()
  +Excel_Write()
  +Excel_close()
}

' Relations
UartManager .l.> Logger       : <<use>>
UartManager .r.> FileManager  : <<use>>
UartManager -u-|> UartAdapter 
UartAdapter o-u- Frame
UartAdapter -r- FileManager
Logger -u-|> ExcelManager

@enduml
```
![PlantUML](http://www.plantuml.com/plantuml/svg/TL91J_Cm3BtdL-GxRTEdxeoggTeE824n8O4G1uGcDtMxGj9KYIk6WFzEWXUH7jWbU_Qp_VpShITmD1aj_j4H3Ke3pek5lArVK94NIeFtyY5mzZ10Xqv-22dnX0hrmN2eb9Ud0C-4a6vxZR_9gu3skvJxhsrdqFi0_N8L0vwimq3MxxwFeQ_pq1lRfNbAM_LQodjo_T35caVN4sRSA73Nm4ZdWjQ1mJ0wFW7MC3KEA4Ik1uhzh1cjexnZ4b1FROjkoS-gv4vf3k-I6S6qMDyXDK30Axr5UGnJAMkHcuqdDocgAbxi20uKHPlYtzYn9_zqyLpAsbeTSETWFFOAz85d9SsfxynxFauCn1Faw_sm3dR4WHKoPXkpWDBMiwzY8UzG0_Lsy2A__rglgtGR_fLXgybZLSrvBl1ol_xW5LFnMSqEA79WGvwzcuKBL-JD1GlYPlFFSOj3Cndz3G00)


