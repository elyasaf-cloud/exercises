import java.util.Collection;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;

public class Graph
{
    private ArrayList<Node> nodes;
    private ArrayList<Edge> edges;
    private HashMap<String, String> attributes;
    public Graph()
    {
        this.nodes = new ArrayList<>();
        this.edges = new ArrayList<>();
        this.attributes = new HashMap<>();
    }

    public Graph(Map<String, String> attributes)
    {
        this.nodes = new ArrayList<>();
        this.edges = new ArrayList<>();
        this.attributes = new HashMap<>(attributes);
    }

    public Collection<Node> getNodes()
    {
        return this.nodes;
    }

    public Collection<Edge> getEdges()
    {
        return this.edges;
    }

    public Graph node(String name)
    {
        Node n = new Node(name);
        this.nodes.add(n);
        return this;
    }

    public Graph node(String name, Map<String, String> attributes)
    {
        Node n = new Node(name, attributes);
        this.nodes.add(n);
        return this;
    }

    public Graph edge(String start, String end)
    {
        Edge e = new Edge(start, end);
        this.edges.add(e);
        return this;
    }

    public Graph edge(String start, String end, Map<String, String> attributes)
    {
        Edge e = new Edge(start, end, attributes);
        this.edges.add(e);
        return this;
    }

    public Map<String, String> getAttributes()
    {
        return Map.copyOf(this.attributes);
    }
}
