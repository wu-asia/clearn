
public class Weather {
    private String date;
    private String dist;
    private double windSpeed;
    private double temp;
    private double wet;
    public String getDate(){
        return this.date;
    }
    public String getDist(){
        return this.dist;
    }
    public double getWindSpeed(){
        return this.windSpeed;
    }
    public double getTemp(){
        return this.temp;
    }
    public double getWet(){
        return this.wet;    
    }
    public void setDate(String date){
        this.date = date;
    }
    public void setDist(String dist){
        this.dist = dist;
    }
    public void setWindSpeed(double windSpeed){
        this.windSpeed = windSpeed;
    }
    public void setTemp(double temp){
        this.temp = temp;
    }
    public void setWet(double wet){
        this.wet = wet;
    }
}
