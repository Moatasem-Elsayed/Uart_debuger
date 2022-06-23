CXX = g++
BUILD_DIRECTORY=build/


$(BUILD_DIRECTORY):
	@mkdir build
clean:
	@rm -rf $(BUILD_DIRECTORY)

$(BUILD_DIRECTORY)FileManger.o: ./src/FileManger.cpp $(BUILD_DIRECTORY)
	@$(CXX) --std=c++17 -c ./src/FileManger.cpp -o $(BUILD_DIRECTORY)FileManger.o  -I ./lib

$(BUILD_DIRECTORY)main.o: ./main.cpp $(BUILD_DIRECTORY)
	@$(CXX) --std=c++17 -c ./main.cpp -o $(BUILD_DIRECTORY)main.o  -I ./lib

$(BUILD_DIRECTORY)UartManger.o: ./src/UartManger.cpp $(BUILD_DIRECTORY)
	@$(CXX) --std=c++17 -c ./src/UartManger.cpp -o $(BUILD_DIRECTORY)UartManger.o  -I ./lib

$(BUILD_DIRECTORY)ExcelManger.o: ./src/ExcelManger.cpp $(BUILD_DIRECTORY)
	@$(CXX) --std=c++17 -c ./src/ExcelManger.cpp -o $(BUILD_DIRECTORY)ExcelManger.o  -I ./lib

$(BUILD_DIRECTORY)UartAdapter.o: ./src/UartAdapter.cpp $(BUILD_DIRECTORY)
	@$(CXX) --std=c++17 -c ./src/UartAdapter.cpp -o $(BUILD_DIRECTORY)UartAdapter.o  -I ./lib

$(BUILD_DIRECTORY)Logger.o: ./src/Logger.cpp $(BUILD_DIRECTORY)
	@$(CXX) --std=c++17 -c ./src/Logger.cpp -o $(BUILD_DIRECTORY)Logger.o  -I ./lib

gdb_uart: $(BUILD_DIRECTORY)FileManger.o $(BUILD_DIRECTORY)main.o $(BUILD_DIRECTORY)UartManger.o $(BUILD_DIRECTORY)ExcelManger.o $(BUILD_DIRECTORY)UartAdapter.o $(BUILD_DIRECTORY)Logger.o 
	@$(CXX) $^ -o $(BUILD_DIRECTORY)gdb_uart -I ./lib

