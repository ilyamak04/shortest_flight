#include flight_graph.hpp
#include <limits.h>
#include <algorithm>

void FlightGraph::add_edge(const std::string& origin,
	const std::string& destination,
	int distance)
{
	// Строим неориентированный граф
	graph[origin].push_back({ destination, distance });
	graph[destination].push_back({ origin, distance }); 
}