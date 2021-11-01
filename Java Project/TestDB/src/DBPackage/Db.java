
package DBPackage;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Statement;
import javax.swing.JOptionPane;

public class Db {
    
    public static Connection con;
    public static Statement st;
    
    static
    {
        try{
            con=DriverManager.getConnection("jdbc:mysql://localhost:3306/testDB"+"?useSSL=false","root","");
            st=con.createStatement();
            
        }
        catch(Exception ex)
        {
            JOptionPane.showMessageDialog(null, ex);
        }
    }
   
}
