#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <utility>

class FlightGraph {
public:
    // Добавление ребра в граф
    void add_edge(const std::string& origin, const std::string& destination, int distance);

    // Поиск кратчайшего пути с помощью алгоритма Дейкстры
    std::pair<int, std::vector<std::string>> find_shortest_path(const std::string& start, const std::string& end);

private:
    // Хранение графа в виде списка смежности
    std::unordered_map<std::string, std::vector<std::pair<std::string, int>>> graph;

    // Вспомогательная функция для алгоритма Дейкстры
    std::string get_min_distance_node(
        const std::unordered_map<std::string, int>& distances, 
        const std::unordered_map<std::string, bool>& visited
    );
};