
/**
 * Models a car park by storing some basci details about the
 * state of an individual car park(location capacity occupancy)
 *
 * @author kim seungwook
 * @version (2022/03/31)
 */
public class carpark
{
    //3 fields
    //2 int
    //1 string
    String location;
    //How many cars are currently parked in the car park
    int capacity;
    //how many cars can be parked in the car park)
    int occupancy;
    
    //1 string
    
    
    /**
     * Constructor for objects of class carpark
     */
    public carpark(String location,int capacity)
    {
        this.location = location;
        this.capacity = capacity;
        this.occupancy = 0;
    }
    /**
     * Returns the location of the car park
     */
    public String getlocation(){
        return location;
    }
    /**
     * Returns the capacity of the car park
     */
    public int getCapacity(){

        return capacity;
    }
    /**
     * Returns the occupancy of the car park
     */
    public int getOccupancy(){
        
        return occupancy;
        
    }
    public void park(){
        if(occupancy < capacity){
            occupancy ++;
        }
        else{
            System.out.println("you cannot park" +
                                "the car park is full");
        }
        
        
    }
    /**
     * Decreases the occupancy of car park by 1
     * if occupancy > 0 
     * otherwise prints error message
     */
    public void leave(){
        if(occupancy > 0){
            occupancy --;
        }
        else{
            System.out.println("The car is empty");
            System.out.println("so no car can leave");
        }
    }
    /**
     * Changes the capacity(up or down) of car park
     */
    public void changecapacity(int changeincapacity){
        //basic case
        int newcapacity = capacity + changeincapacity;
        //special case
        //if occupancy > 0 &&(and)
        //(capacity + changeincapacity) < occupancy
        //then do not change capacity and print error messege
        if(occupancy > 0 &&(capacity + changeincapacity) < occupancy ){
            System.out.println("New capacity is less than current occupancy");
            System.out.println(" , so cannot update messege");
        }
        else if(occupancy == 0 && (capacity + changeincapacity) < 0){
            capacity = 0;
            System.out.println("the car park is closed");
        }
        else{
            //basic case
            capacity = capacity + changeincapacity;
        }
    }
    /**
         * Prints the details about car park
        */
    public void printDetails(){
            System.out.println(location +"car park has " +
                                (capacity - occupancy) + " spaces.");
    }
        
        
    
    
    //occupancy always <= capacity
    
    
    
    
    
    /**
     * An example of a method - replace this comment with your own
     *
     * @param  y  a sample parameter for a method
     * @return    the sum of x and y
     */

}
