CXX = g++
BUILD_DIRECTORY=build/


$(BUILD_DIRECTORY):
	@mkdir build
clean:
	@rm -rf $(BUILD_DIRECTORY)

$(BUILD_DIRECTORY)FileManger.o: ./FileManger.cpp $(BUILD_DIRECTORY)
	@$(CXX) --std=c++17 -c ./FileManger.cpp -o $(BUILD_DIRECTORY)FileManger.o  -I .

$(BUILD_DIRECTORY)main.o: ./main.cpp $(BUILD_DIRECTORY)
	@$(CXX) --std=c++17 -c ./main.cpp -o $(BUILD_DIRECTORY)main.o  -I .

$(BUILD_DIRECTORY)UartManger.o: ./UartManger.cpp $(BUILD_DIRECTORY)
	@$(CXX) --std=c++17 -c ./UartManger.cpp -o $(BUILD_DIRECTORY)UartManger.o  -I .

$(BUILD_DIRECTORY)ExcelManger.o: ./ExcelManger.cpp $(BUILD_DIRECTORY)
	@$(CXX) --std=c++17 -c ./ExcelManger.cpp -o $(BUILD_DIRECTORY)ExcelManger.o  -I .

$(BUILD_DIRECTORY)UartAdapter.o: ./UartAdapter.cpp $(BUILD_DIRECTORY)
	@$(CXX) --std=c++17 -c ./UartAdapter.cpp -o $(BUILD_DIRECTORY)UartAdapter.o  -I .

$(BUILD_DIRECTORY)Logger.o: ./Logger.cpp $(BUILD_DIRECTORY)
	@$(CXX) --std=c++17 -c ./Logger.cpp -o $(BUILD_DIRECTORY)Logger.o  -I .

gdb_uart: $(BUILD_DIRECTORY)FileManger.o $(BUILD_DIRECTORY)main.o $(BUILD_DIRECTORY)UartManger.o $(BUILD_DIRECTORY)ExcelManger.o $(BUILD_DIRECTORY)UartAdapter.o $(BUILD_DIRECTORY)Logger.o 
	@$(CXX) $^ -o $(BUILD_DIRECTORY)gdb_uart -I .
