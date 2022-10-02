/*
Author's Name : Saptarshi Sarkar
Date Modified : 2nd October, 2022
*/
import java.util.Calendar;
import java.text.SimpleDateFormat;

public class Clock {
    public static void main(String[] args){
        Calendar obj = Calendar.getInstance();
        DateFormat df = new SimpleDateFormat("HH:mm:ss");
        System.out.println(df.format(obj.getTime()));
    }
}
