#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <utility>

class FlightGraph {
public:
    // ���������� ����� � ����
    void add_edge(const std::string& origin, const std::string& destination, int distance);

    // ����� ����������� ���� � ������� ��������� ��������
    std::pair<int, std::vector<std::string>> find_shortest_path(const std::string& start, const std::string& end);

private:
    // �������� ����� � ���� ������ ���������
    std::unordered_map<std::string, std::vector<std::pair<std::string, int>>> graph;

    // ��������������� ������� ��� ��������� ��������
    std::string get_min_distance_node(
        const std::unordered_map<std::string, int>& distances, 
        const std::unordered_map<std::string, bool>& visited
    );
};