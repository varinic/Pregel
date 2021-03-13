
#include <string>
#include <vector>

class String {
    private:
        std::string value;

    public:
        String(){}
        String(std::string value){
            this->value = value;
        }
        String(double value){
            this->value = std::to_string(value);
        }
        String(float value){
            this->value = std::to_string(value);
        }
        String(int value){
            this->value = std::to_string(value);
        }
        
        std::string toString(){
            return this->value;
        }
        double toDouble(){
            return std::stod(this->value);
        }
        float toFloat(){
            return std::stof(this->value);
        }
        int toInt(){
            return std::stoi(this->value);
        }
        ~String(){}
};

class Edge {
    private:
        String destVertexId;
        String value;
    public:
        Edge(){}
        Edge(String destVertexId, String value){
            this->destVertexId = destVertexId;
            this->value = value;
        }
        String getDestVertexId(){
            return this->destVertexId;
        }
        void setDestVertexId(String destVertexId){
            this->destVertexId = destVertexId;
        }
        String getValue(){
            return this->value;
        }
        void setValue(String value){
            this->value = value;
        }
        ~Edge(){}
};

class Vertex {
    private:
        String id;
        String value;
        bool ishalted;
        std::vector<Edge> Edges;

    public:
        Vertex(){
            //this->id = String();
            this->ishalted = false;
        }

        void setId(String id){
            this->id = id;
        }
        String getId(){
            return this->id;
        }
        void setValue(String value){
            this->value = value;
        }
        String getValue(){
            return this->value;
        }
        void voteToHalt(){
            //
        }
        bool isHalted(){
            //
        }
        bool hasEdges(){
        }
        std::vector<Edge> getEdges(){
            return this->Edges;
        }
        int getNumEdges(){
            return this->Edges.size();
        }
        void addEdge(String destVertexId, String edgeValue){
            //

        }
        void setup(){
            //
        }
        void compute(){
        }

        ~Vertex(){}

}; 

class GraphJob {
    private:
        //mpiId zero is master, others are workers
        String jobId;


    public:


};






