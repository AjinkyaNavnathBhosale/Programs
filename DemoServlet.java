import javax.servlet.http.*;  // Upgrade package of java is called javax.
import javax.servlet.*;  
import java.io.*;  // buffer reader
public class DemoServlet extends HttpServlet // inbuild class
{  
    public void doGet(HttpServletRequest req,HttpServletResponse res) throws ServletException,IOException  
    {                    // kagad                dugh dya.
        res.setContentType("text/html");//setting the content type  
        PrintWriter pw=res.getWriter();//get the stream to write the data  
        
        //writing html in the stream  
        pw.println("<html><body>");  
        pw.println("Jay Ganesh...");  
        pw.println("</body></html>");  
        
        pw.close();//closing the stream  
    }
}