/**
 * Write a description of class Contest here.
 * 
 * @author (your name)
 * @version (a version number or a date)
 */
import java.util.ArrayList;
import java.util.Iterator;
public class Contest
{
    /**
     * Constructor for objects of class Contest 
     */
    private ArrayList<String> Singer;
    private int VoteFor;
    private int votes;
    public Contest()
    {
        Singer = new ArrayList<>();
    }
    public void addSinger(String SingerName)
    {
        Singer.add(SingerName);
    }
    public int getNumberOfFiles()
    {
        return Singer.size();
    }
    public void list(){
        
        for(String Singername : Singer){
            System.out.println(Singername);
            System.out.println(votes);
        }
       
    }
    public void Shortlist(int amount){
        if(amount > votes){
            ArrayList.remove();
        }
        
    }
    public void VoteFor(String Singer,int amount)
    {
        if(amount > 0) {
            votes ++;
        }
        else{
            System.out.println("error");
        }
    }
}
