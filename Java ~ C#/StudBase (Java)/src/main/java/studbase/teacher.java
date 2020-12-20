/**
 * @date 11.11.2020
 * @author Vlad Suptelia
 * @index null
 * @task абстрактный класс; наследование; параметры; БД . . .
 */

package studbase;

import java.util.ArrayList;


public class teacher extends person {
    
    public int salary;
    public int getSalary() { return this.salary; }
    public void setSalary(int salary) { this.salary = salary; }
    
    public AcDegree Degree;
    public String getDegree() {
        switch(Degree) {
            case PhD -> { return "PhD"; }
            case Master -> { return "Master"; }
            case Bachelor -> { return "Bachelor"; }
            
            default -> { return ""; }
        }
    }
    public void setDegree(String acdegree) {
        switch(acdegree) {
            case "PhD" -> { this.Degree = AcDegree.PhD; }
            case "Master" -> { this.Degree = AcDegree.Master; }
            case "Bachelor" -> { this.Degree = AcDegree.Bachelor; }
            
            default ->  { this.Degree = AcDegree.Bachelor; }
        }
    }
    public enum AcDegree {
        PhD,
        Master,
        Bachelor;
        
        public final int value = 1 + ordinal();
    }
    
    public AcRank Rank;
    public String getRank() {
        switch(Rank) {
        case Profesor -> { return "Profesor"; }
        case Docent -> { return "Docent"; }
        case Spivrobytnik -> { return "Spivrobytnik"; }
        case Starshij_vykladach -> { return "Starshij_vykladach"; }
        case Vykladach -> { return "Vykladach"; }
        case Asystent -> { return "Asystent"; }
            
        default -> { return ""; }
        }
    }
    public void setRank(String rank) {
        switch(rank) {
        case "Profesor" -> { this.Rank = AcRank.Profesor; }
        case "Docent" -> { this.Rank = AcRank.Docent; }
        case "Spivrobytnik" -> { this.Rank = AcRank.Spivrobytnik; }
        case "Starshij_vykladach" -> { this.Rank = AcRank.Starshij_vykladach; }
        case "Vykladach" -> { this.Rank = AcRank.Vykladach; }
        case "Asystent" -> { this.Rank = AcRank.Asystent; }
        
        default ->  { this.Rank = AcRank.Asystent; }
        }
    }
    public enum AcRank {
        Profesor,
        Docent,
        Spivrobytnik,
        Starshij_vykladach,
        Vykladach,
        Asystent;
            
        public final int value = 1 + ordinal();
    }
    
    public ArrayList<student> StudentList;
    public ArrayList<student> getStudentList() { return this.StudentList; }
    public void setStudentList(ArrayList<student> students) { this.StudentList = students; }
    
    public int MaxNumOfCourseworks;
    public int getMaxNumOfCourseworks() { return this.MaxNumOfCourseworks; }
    public void setMaxNumOfCourseworks(int MaxNum) { this.MaxNumOfCourseworks = MaxNum; }
    
    protected teacher(String name, int age, AddressField address, int salary, String acdegree, String rank, int MaxNumOfCourseworks) {
        super(name, age, address);
        
        this.salary = salary;
        this.setDegree(acdegree);
        this.setRank(rank);
        this.MaxNumOfCourseworks = MaxNumOfCourseworks;
        StudentList = new ArrayList<>(MaxNumOfCourseworks);
    }
      
    protected teacher() {
        super();
        
        this.salary = 0;
        Degree = AcDegree.Bachelor;
        Rank = AcRank.Asystent;
        this.MaxNumOfCourseworks = 1;
        StudentList = new ArrayList<>(MaxNumOfCourseworks);
    }
       
        
}
