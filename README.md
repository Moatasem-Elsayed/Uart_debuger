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

