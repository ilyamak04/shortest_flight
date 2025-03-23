#include "flight_graph.hpp" 
#include "logger.hpp"

int main() {

    Logger& logger = Logger::get_instance();
    logger.initialize("../logs/server.log");

    try {
        logger.log(LogLevel::INFO, "main", "Program started!");
        
        // Лоигика
    
    } catch (const std::exception& e) {
        logger.log(LogLevel::ERROR, "main",
            std::string("Critical ERROR: ") + e.what());
        return 1;
    }

    logger.log(LogLevel::INFO, "main", "Program has ended");
    return 0;
}