import java.util.ArrayList;

/**
 * A class to hold details of audio files.
 * 
 * @author David J. Barnes and Michael Kölling
 * @version 2016.02.29
 */
public class MusicOrganizer
{
    // An ArrayList for storing the file names of music files.
    private ArrayList<String> files;
        
    /**
     * Create a MusicOrganizer
     */
    public MusicOrganizer()
    {
        files = new ArrayList<>();
    }
    
    /**
     * Add a file to the collection.
     * @param filename The file to be added.
     */
    public void addFile(String filename)
    {
        files.add(filename);
    }
    
    /**
     * Return the number of files in the collection.
     * @return The number of files in the collection.
     */
    public int getNumberOfFiles()
    {
        return files.size();
        
    }
    
    /**
     * List a file from the collection.
     * @param index The index of the file to be listed.
     */
    public void listFile(int index)
    {
        if(index >= 0 && index < files.size()) {
            String filename = files.get(index);
            System.out.println(filename);
        }
    }
    /**
     * Print the names of all files in the collection
     */
    public void listAllFiles(){
        
        for(String filename : files){
            System.out.println(filename);
        }
       
    }
    /**
     * Print the name of all files in the collections
     */
    public void listAllFilesWhile(){
        int index = 0;
        while(true){
            String filename = files.get(index);
            System.out.println(filename);
            index++;
        }
    }
    /**
     * Print the filenames that contain the substring
     */
     public void findFiles(String substing){
        for(String filename : files){
        if(filename.contains(substing)){
            System.out.println(filename);
            
        }
    }
    }
    /**
     * print numbers from 0 to 10
     */
    public void printNubmer(){
        int num = 0;
        while(num < 11){
            System.out.println(num);
            num++;
        }
    }
    /**
     * Return true if the target exists in the collection
     * otherwise returns false
     * 
     */
    public boolean fileExist(String target){
        int index = 0;
        boolean found = false;
            //valid index And not found
        while(index < files.size()&& !found){
            String filename = files.get(index);
            //if we have a match
            if(filename.equals(target)){
                found = true;
            }
            else{
                index ++;
            }
        }
        return false;
    }
    /**
     * Remove a file from the collection.
     * @param index The index of the file to be removed.
     */
    public void removeFile(int index)
    {
        if(index >= 0 && index < files.size()) {
            files.remove(index);
        }
    }
}
