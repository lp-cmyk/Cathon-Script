#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>

const char* PYTHON_CMD = "python3 ./node.ca.py";
const char* JAVA_CMD   = "java -cp . NodeCa";
const char* HTTP_CMD   = "python3 -m http.server & 8000";

int main()
{
    std::cout << "[C++ Boot] Starting all services..." << std::endl;
    std::cout << "Starting HTTP server..." << std::endl;
    std::system(HTTP_CMD);
    std::cout << "Starting Python backend..." << std::endl;
    std::system(PYTHON_CMD);
    std::cout << "Starting Java backend..." << std::endl;
    std::system(JAVA_CMD);
    std::cout << "All services started. Keeping alive..." << std::endl;
    
    while (true)
    {
        std::this_thread::sleep_for(std::chrono::seconds(3600));
    }
    return 0;
}