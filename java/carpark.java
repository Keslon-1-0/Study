
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
    //how many cars can be parked in the car park)
    int occupancy;
    //How many cars are currently parked in the car park
    int capacity;
    //1 string
    String location;
    
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
    
    
    
    
    
    
    
    /**
     * An example of a method - replace this comment with your own
     *
     * @param  y  a sample parameter for a method
     * @return    the sum of x and y
     */

}
