/**
 * @date 11.11.2020
 * @author Vlad Suptelia
 * @index null
 * @task абстрактный класс; наследование; параметры; БД . . .
 */

package studbase;

public class student extends person {
    
    public String faculty;
    public String getFaculty() { return this.faculty; }
    public void setFaculty(String faculty) { this.faculty = faculty; }
    
    public int group;
    public int getGroup() { return this.group; }
    public void setGroup(int group) { this.group = group; }
    
    // bool budget + scholatship?
    
    public float avgScore;
    public float getAvgScore() { return this.avgScore; }
    public void setAvgScore(float avgScore) { this.avgScore = avgScore; }
    
    protected student(String name, int age, AddressField address, String faculty, int group, float avgScore) {
        super(name, age, address);
        
        this.faculty = faculty;
        this.group = group;
        //
        this.avgScore = avgScore;
    }
    
    protected student() {
        super();
        
        this.faculty = "faculty_placeholder";
        this.group = 0;
        //
        this.avgScore = (float) 0.0;
    }
    
    public void printStudent() {
        super.printInfo(); // проверить
        System.out.format("факультет: %s, группа: %d, средний балл: %f", faculty, group, avgScore);
    }
    
}
