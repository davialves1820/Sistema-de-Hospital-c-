CXX = g++
CXXFLAGS = -Wall -Wextra -g -Iinclude

SRC_DIR = src
OBJ_DIR = obj
BUILD_DIR = build
SOURCES = $(SRC_DIR)/main.cpp $(SRC_DIR)/Person.cpp $(SRC_DIR)/Patient.cpp $(SRC_DIR)/Doctor.cpp $(SRC_DIR)/Employee.cpp $(SRC_DIR)/Consult.cpp $(SRC_DIR)/Hospital.cpp
OBJECTS = $(addprefix $(OBJ_DIR)/, $(SOURCES:$(SRC_DIR)/%.cpp=%.o))
EXECUTABLE = $(BUILD_DIR)/my_program

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
