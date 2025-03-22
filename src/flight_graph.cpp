#include "flight_graph.hpp"
#include <limits.h>
#include <algorithm>
#include <string>
#include <vector>

void FlightGraph::add_edge(const std::string& origin,
	const std::string& destination,
	int distance)
{
	// Строим неориентированный граф
	graph[origin].push_back({ destination, distance });
	graph[destination].push_back({ origin, distance }); 
}

std::pair<int, std::vector<std::string>> FlightGraph::find_shortest_path(const std::string& start, const std::string& end) 
{
	// Заглушка
	return { 0, {start, end} };
}

std::string FlightGraph::get_min_distance_node(
	const std::unordered_map<std::string, int>& distances,
	const std::unordered_map<std::string, bool>& visited
)
{	
	// Заглушка
	return "";
}