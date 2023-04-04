class Romanian():
    def __init__(self,data_set,source, destination):
        self.data_set = data_set
        self.source = source 
        self.destination = destination
    
    # DFS function to calculate shortest path
    def DFS_shortest_path(self):
        print("*************   Depth First Search  ****************")
        stack = [(self.source, [self.source], 0)]
        visited = set()
        while stack:
            (current, path, distance) = stack.pop()
            visited.add(current)
            if current == self.destination:
                return path, distance
            for neighbor, weight in data_set[current].items():
                if neighbor not in visited:
                    stack.append((neighbor, path + [neighbor], distance + weight))
        return None

    
    # BFS function to calculate shortest path
    def BFS_shortest_path(self):
        print("*************   Breadth First Search  ****************")
        queue = [(self.source , [self.source ], 0)]
        visited = set()
        while queue:
            (current, path, distance) = queue.pop(0)
            visited.add(current)
            if current == self.destination:
                return path, distance

            for neighbor, weight in self.data_set[current].items():
                if neighbor not in visited:
                    queue.append((neighbor, path + [neighbor], distance + weight))
        return None  

    
    def outperform_algorithm(self):
        # shortest path of both algorithms
        dfs = self.DFS_shortest_path()
        print("\nThe shortest DFS Path =  ",dfs,"\n")
        
        bfs = self.BFS_shortest_path() 
        print("\nThe shortest BFS Path =  ",bfs) 
        
        # checking the outperform algorithm between them
        print("\n*************   Outporforming algorithms  ****************\n")
    
        if dfs[1] < bfs[1]:
            print('Depth First Search Outperformed the Breadth First Search\n')
            print(dfs)
        elif bfs[1] < dfs[1]:
            print('Breadth First Search Outperformed the Depth First Search\n')
            print(bfs)
            
        elif bfs[1] == dfs[1]:
            print('Both Gave the Same Answer\n')
            print(dfs)
            print(bfs)
       
    
    

        
#Main
if __name__ == '__main__':
    # data set of cities
    data_set = {
        'Arad': {'Zerind': 75, 'Sibiu': 140, 'Timisoara': 118},
        'Zerind': {'Arad': 75, 'Oradea': 71},
        'Oradea': {'Zerind': 71, 'Sibiu': 151},
        'Sibiu': {'Arad': 140, 'Oradea': 151, 'Rimnicu Vilcea': 80, 'Fagaras': 99},
        'Timisoara': {'Arad': 118, 'Lugoj': 111},
        'Lugoj': {'Timisoara': 111, 'Mehadia': 70},
        'Mehadia': {'Lugoj': 70, 'Dobreta': 75},
        'Dobreta': {'Mehadia': 75, 'Craiova': 120},
        'Craiova': {'Dobreta': 120, 'Rimnicu Vilcea': 146, 'Pitesti': 138},
        'Rimnicu Vilcea': {'Sibiu': 80, 'Pitesti': 97, 'Craiova': 146},
        'Pitesti': {'Rimnicu Vilcea': 97, 'Craiova': 138, 'Bucharest': 101},
        'Fagaras': {'Sibiu': 99, 'Bucharest': 211},
        'Bucharest': {'Pitesti': 101, 'Fagaras': 211, 'Giurgiu': 90, 'Urziceni': 85},
        'Giurgiu': {'Bucharest': 90},
        'Urziceni': {'Bucharest': 85, 'Hirsova': 98, 'Vaslui': 142},
        'Hirsova': {'Urziceni': 98, 'Eforie': 86},
        'Eforie': {'Hirsova': 86},
        'Vaslui': {'Iasi': 92, 'Urziceni': 142},
        'Iasi': {'Vaslui': 92, 'Neamt': 87},
        'Neamt': {'Iasi': 87}
    }
    
    
    #Source and destination
    source = 'Arad' 
    destination = 'Bucharest'

    # making class object and passing all required information
    Romanian = Romanian(data_set,source,destination)
    
    # calling DFS and BFS function inside class which will give you shortest paths of both algorithms
    # also finding which will outperform
    Romanian.outperform_algorithm()
    
