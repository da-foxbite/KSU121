/**
 * @date 25.11.2020
 * @author Vlad Suptelia
 * @index null
 * @task абстрактный класс; наследование; параметры; БД . . .
 */

package studbase;

public class Coursework {
    
    public String title;
    public String geTtitle() { return this.title; }
    public void setTitle(String title) { this.title = title; }
    
    public String description;
    public String getDescription() { return this.description; }
    public void setDescription(String description) { this.description = description; }
    
    protected Coursework(String title, String description) {
        this.title = title;
        this.description = description;
    }
    
    protected Coursework() {
        this.title = "title_placeholder";
        this.description = "description_placeholder";
    }
    
    public void printCoursework() {
        System.out.format("%s%n%s", title, description);
    }
}
